#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define bigboxcoin-Qt message queue name
#define BITCOINURI_QUEUE_NAME "bigboxcoinURI"

void ipcScanRelay(uint64_t argc, char *argv[]);
void ipcInit(uint64_t argc, char *argv[]);

#endif // QTIPCSERVER_H
