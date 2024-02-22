// loggeruiinterface.h
#ifndef LOGGERUIINTERFACE_H
#define LOGGERUIINTERFACE_H

#include <QObject>
#include <QDateTime>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariantList>

class LoggerUiInterface : public QObject {
    Q_OBJECT

public:
    explicit LoggerUiInterface(QObject *parent = nullptr);

    // SignalLogGroup
    Q_INVOKABLE QVariantList readAllGroups();
    Q_INVOKABLE QVariantList readAllPredefinedGroups();
    Q_INVOKABLE QVariantList readPollingBasedGroups();
    Q_INVOKABLE QVariantList readEventBasedGroups();
    Q_INVOKABLE bool insertGroupData(const QString &groupName, const QString &groupCategory, const QString &groupType, bool predefGroupFlag, bool eventTypeFlag, int logRate, int eventTypeChangeScanRate, bool deadBandFlag, int deadBandValue);

    // SignalLogData
    Q_INVOKABLE QVariantList readAllSignalLogData(const QDateTime &startTime, const QDateTime &endTime);

    // Log Archive
    Q_INVOKABLE QVariantList readLogArchive(const QDateTime &startTime, const QDateTime &endTime);

    // Alert Log
    Q_INVOKABLE QVariantList readAllAlerts(const QDateTime &startTime, const QDateTime &endTime);

    // Event Log
    Q_INVOKABLE QVariantList readAllEvents(const QDateTime &startTime, const QDateTime &endTime);

    ~LoggerUiInterface();

private:
    QSqlDatabase db;

    bool openDatabase();
    void closeDatabase();
    QVariantList executeQuery(const QString &query);
};

#endif // LOGGERUIINTERFACE_H
