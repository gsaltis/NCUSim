/*****************************************************************************
 * FILE NAME    : HTTPServer.h
 * DATE         : October 14 2020
 * PROJECT      : NONE
 * COPYRIGHT    : Copyright (C) 2020 by Gregory R Saltis
 *****************************************************************************/
#ifndef _httpserver_h_
#define _httpserver_h_

/*****************************************************************************!
 * Global Headers
 *****************************************************************************/
#include <mongoose.h>

/*****************************************************************************!
 * Local Headers
 *****************************************************************************/

/*****************************************************************************!
 * Exported Macros
 *****************************************************************************/

/*****************************************************************************!
 * Exported Data
 *****************************************************************************/
extern string
MainWWWDirectory;

extern string
HTTPServerPort;

extern struct mg_serve_http_opts
HTTPServerOptions;

extern struct mg_connection*
HTTPServerConnection;

extern struct mg_mgr
HTTPServerMgr;

/*****************************************************************************!
 * Exported Functions
 *****************************************************************************/
void
HTTPEventHandler
(struct mg_connection* InConnection, int InEvent, void* InMessagePointer);

bool
HTTPServerThreadInitialize
();

void*
HTTPServerThread
(void* InArgs);

pthread_t
HTTPServerInitialize
();

#endif // _httpserver_h_
