PRAGMA foreign_keys=OFF;
BEGIN TRANSACTION;
CREATE TABLE SERVICE_HEARTBEAT_V1 ( ID INTEGER PRIMARY KEY AUTOINCREMENT, PROVISIONED CHAR(32), NAME CHAR(32), TYPE CHAR(32), SRC_ADDRESS CHAR(256), SRC_PORT INT, DST_ADDRESS CHAR(256), DST_PORT INT, MESSAGE CHAR(256), INTERVAL_IN_MS INT, MISSED_WARN INT, MISSED_DEGRADE INT, MISSED_FAIL INT, STATE CHAR(32), MISSED INT, HEARTBEAT_TIMER_ID INT, HEARTBEAT_SOCKET INT );
COMMIT;
