﻿/*
 * client_handler.h
 *
 *  Created on: 2014年5月6日
 *      Author: jimm
 */

#ifndef CLIENT_HANDLER_H_
#define CLIENT_HANDLER_H_

#include "../netevent/net_impl.h"
#include "../netevent/net_ioadapter.h"
#include "../netevent/net_connector.h"

using namespace NETEVENT;

class CClientHandler : public CIOHandlerAdapter
{
public:
	virtual int32_t OnOpened(IIOSession *pIoSession);

	virtual int32_t OnRecved(IIOSession *pIoSession, uint8_t *pBuf, uint32_t nBufSize);

	virtual int32_t OnSent(IIOSession *pIoSession, uint8_t *pBuf, uint32_t nBufSize);

	virtual int32_t OnClosed(IIOSession *pIoSession);

	virtual int32_t OnError(IIOSession *pIoSession);

	virtual int32_t OnTimeout(IIOSession *pIoSession);

	void SetConnector(CConnector *pConnector);

protected:
	CConnector		*m_pConnector;
};


#endif /* CLIENT_HANDLER_H_ */
