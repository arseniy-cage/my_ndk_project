// -- -- -- -- -- -- -- 
// by weikton x reytiz
// -- -- -- -- -- -- --
#include "CNetwork.h"
#include <stdint.h>

#include "util/CJavaWrapper.h"

const char* g_szServerNames[MAX_SERVERS] = {
	"BLACK MOSCOW | RED",
	"BLACK RUSSIA | TEST"
};

const CSetServer::CServerInstanceEncrypted g_sEncryptedAddresses[MAX_SERVERS] = {
	CSetServer::create("141.95.190.146", 1, 16, 2113, false),
	CSetServer::create("141.95.190.146", 1, 16, 2113, false)	
};