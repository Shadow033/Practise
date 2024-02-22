// loggeruiinterface.cpp
#include "loggeruiinterface.h"

LoggerUiInterface::LoggerUiInterface(QObject *parent) : QObject(parent) {
    
}

//Database Connection
bool LoggerUiInterface::openDatabase() {
    db = QSqlDatabase::addDatabase("QPSQL", "loggerUIConnection");
    db.setHostName("localhost");
    db.setDatabaseName("testdb");
    db.setUserName("postgress");
    db.setPassword("1234");

    if (db.open()) {
        return true;
    } else {
        qDebug() << "Database connection error: " << db.lastError().text();
        return false;
    }
}

//closing Database
void LoggerUiInterface::closeDatabase() {
    if (db.open()){
    db.close();
    }
}

//SQL Query
QVariantList LoggerUiInterface::executeQuery(const QString &query) {
    QVariantList result;

    QSqlQuery sqlQuery(db);
    if (sqlQuery.exec(query)) {
        while (sqlQuery.next()) {
            result.append(sqlQuery.value(0));
        }
    } else {
        qDebug() << "Query execution error: " << sqlQuery.lastError().text();
    }

    return result;
}

//signalloggroup
QVariantList LoggerUiInterface::readAllGroups() {
    if (openDatabase()) {
        QString query = "SELECT groupname FROM signalloggroup";
        QVariantList result = executeQuery(query);
        closeDatabase();
        return result;
    }

    return QVariantList();
}

//PredefinedGroups
QVariantList LoggerUiInterface::readAllPredefinedGroups() {
    if (openDatabase()) {
        QString query = "SELECT groupname FROM signalloggroup WHERE predefgpflag = true";
        QVariantList result = executeQuery(query);
        closeDatabase();
        return result;
    }

    return QVariantList();
}

//Polling Based Groups
QVariantList LoggerUiInterface::readPollingBasedGroups() {
    if (openDatabase()) {
        QString query = "SELECT groupname FROM signalloggroup WHERE eventtypeflag = false";
        QVariantList result = executeQuery(query);
        closeDatabase();
        return result;
    }

    return QVariantList();
}

//Event based groups
QVariantList LoggerUiInterface::readEventBasedGroups() {
    if (openDatabase()) {
        QString query = "SELECT groupname FROM signalloggroup WHERE eventtypeflag = true";
        QVariantList result = executeQuery(query);
        closeDatabase();
        return result;
    }

    return QVariantList();
}

//inserting data to signalloggroup table
bool LoggerUiInterface::insertGroupData(const QString &groupName, const QString &groupCategory, const QString &groupType, bool predefGroupFlag, bool eventTypeFlag, int logRate, int eventTypeChangeScanRate, bool deadBandFlag, int deadBandValue) {
    if (openDatabase()) {
        QSqlQuery query(db);
        query.prepare("INSERT INTO signalloggroup (groupname, groupcategory, grouptype, predefgpflag, eventtypeflag, lograte, eventtypechangescanrate, deadbandflag, deadbandvalue) "
                      "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)");
        query.addBindValue(groupName);
        query.addBindValue(groupCategory);
        query.addBindValue(groupType);
        query.addBindValue(predefGroupFlag);
        query.addBindValue(eventTypeFlag);
        query.addBindValue(logRate);
        query.addBindValue(eventTypeChangeScanRate);
        query.addBindValue(deadBandFlag);
        query.addBindValue(deadBandValue);

        if (query.exec()) {
            closeDatabase();
            return true;
        } else {
            qDebug() << "Database insertion error: " << query.lastError().text();
        }

        closeDatabase();
    }

    return false;
}

//signallogdata table
QVariantList LoggerUiInterface::readAllSignalLogData(const QDateTime& startTime, const QDateTime& endTime) {
    if (openDatabase()) {
        QString query = "SELECT signalid, signalvalue, signalstatus, signaltimestamp, signallogid, groupid "
                        "FROM signallogdata "
                        "WHERE signaltimestamp BETWEEN :startTime AND :endTime";

        QSqlQuery sqlQuery(database);
        sqlQuery.prepare(query);
        sqlQuery.bindValue(":startTime", startTime);
        sqlQuery.bindValue(":endTime", endTime);

        if (sqlQuery.exec()) {
            QVariantList result;
            while (sqlQuery.next()) {
                QVariantMap data;
                data["signalid"] = sqlQuery.value("signalid");
                data["signalvalue"] = sqlQuery.value("signalvalue");
                data["signalstatus"] = sqlQuery.value("signalstatus");
                data["signaltimestamp"] = sqlQuery.value("signaltimestamp");
                data["signallogid"] = sqlQuery.value("signallogid");
                data["groupid"] = sqlQuery.value("groupid");

                result.append(data);
            }

            closeDatabase();
            return result;
        } else {
            qDebug() << "Database query error: " << sqlQuery.lastError().text();
        }

        closeDatabase();
    }

    return QVariantList();
}

//logarchive table
QVariantList LoggerUiInterface::readLogArchive(const QDateTime& startTime, const QDateTime& endTime) {
    if (openDatabase()) {
        QString query = "SELECT logarchiveid, archivetimestamp, archivefrom, archiveto, userid, archivemethodid, archivesuccess "
                        "FROM logarchive "
                        "WHERE archivetimestamp BETWEEN :startTime AND :endTime";

        QSqlQuery sqlQuery(database);
        sqlQuery.prepare(query);
        sqlQuery.bindValue(":startTime", startTime);
        sqlQuery.bindValue(":endTime", endTime);

        if (sqlQuery.exec()) {
            QVariantList result;
            while (sqlQuery.next()) {
                QVariantMap data;
                data["logarchiveid"] = sqlQuery.value("logarchiveid");
                data["archivetimestamp"] = sqlQuery.value("archivetimestamp");
                data["archivefrom"] = sqlQuery.value("archivefrom");
                data["archiveto"] = sqlQuery.value("archiveto");
                data["userid"] = sqlQuery.value("userid");
                data["archivemethodid"] = sqlQuery.value("archivemethodid");
                data["archivesuccess"] = sqlQuery.value("archivesuccess");

                result.append(data);
            }

            closeDatabase();
            return result;
        } else {
            qDebug() << "Database query error: " << sqlQuery.lastError().text();
        }

        closeDatabase();
    }

    return QVariantList();
}

//alertlog table
QVariantList LoggerUiInterface::readAllAlerts(const QDateTime& startTime, const QDateTime& endTime) {
    if (openDatabase()) {
        QString query = "SELECT alertid, sourceid, severity, active_state, acknowledge_state, priority, category, subcategory, "
                        "messages, condition_name, time_stamp, alertlogid "
                        "FROM alertlog "
                        "WHERE time_stamp BETWEEN :startTime AND :endTime";

        QSqlQuery sqlQuery(database);
        sqlQuery.prepare(query);
        sqlQuery.bindValue(":startTime", startTime);
        sqlQuery.bindValue(":endTime", endTime);

        if (sqlQuery.exec()) {
            QVariantList result;
            while (sqlQuery.next()) {
                QVariantMap data;
                data["alertid"] = sqlQuery.value("alertid");
                data["sourceid"] = sqlQuery.value("sourceid");
                data["severity"] = sqlQuery.value("severity");
                data["active_state"] = sqlQuery.value("active_state");
                data["acknowledge_state"] = sqlQuery.value("acknowledge_state");
                data["priority"] = sqlQuery.value("priority");
                data["category"] = sqlQuery.value("category");
                data["subcategory"] = sqlQuery.value("subcategory");
                data["messages"] = sqlQuery.value("messages");
                data["condition_name"] = sqlQuery.value("condition_name");
                data["time_stamp"] = sqlQuery.value("time_stamp");
                data["alertlogid"] = sqlQuery.value("alertlogid");

                result.append(data);
            }

            closeDatabase();
            return result;
        } else {
            qDebug() << "Database query error: " << sqlQuery.lastError().text();
        }

        closeDatabase();
    }

    return QVariantList();
}

//eventlog table
QVariantList LoggerUiInterface::readAllEvents(const QDateTime& startTime, const QDateTime& endTime) {
    if (openDatabase()) {
        QString query = "SELECT eventid, eventdescription, eventtype, eventcat, eventsubcategory, eventunit, "
                        "eventlimit, eventtimestamp, priority "
                        "FROM eventlog "
                        "WHERE eventtimestamp BETWEEN :startTime AND :endTime";

        QSqlQuery sqlQuery(database);
        sqlQuery.prepare(query);
        sqlQuery.bindValue(":startTime", startTime);
        sqlQuery.bindValue(":endTime", endTime);

        if (sqlQuery.exec()) {
            QVariantList result;
            while (sqlQuery.next()) {
                QVariantMap data;
                data["eventid"] = sqlQuery.value("eventid");
                data["eventdescription"] = sqlQuery.value("eventdescription");
                data["eventtype"] = sqlQuery.value("eventtype");
                data["eventcat"] = sqlQuery.value("eventcat");
                data["eventsubcategory"] = sqlQuery.value("eventsubcategory");
                data["eventunit"] = sqlQuery.value("eventunit");
                data["eventlimit"] = sqlQuery.value("eventlimit");
                data["eventtimestamp"] = sqlQuery.value("eventtimestamp");
                data["priority"] = sqlQuery.value("priority");

                result.append(data);
            }

            closeDatabase();
            return result;
        } else {
            qDebug() << "Database query error: " << sqlQuery.lastError().text();
        }

        closeDatabase();
    }

    return QVariantList();
}

LoggerUiInterface::~LoggerUiInterface() {
    
}
