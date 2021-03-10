/*****************************************************************************
 * FILE NAME    : HTTPServer.c
 * DATE         : October 14 2020
 * PROJECT      : NONE
 * COPYRIGHT    : Copyright (C) 2020 by Gregory R Saltis
 *****************************************************************************/

/*****************************************************************************!
 * Global Headers
 *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <pthread.h>
#include <unistd.h>
#include <mongoose.h>
#include <StringUtils.h>

/*****************************************************************************!
 * Local Headers
 *****************************************************************************/
#include "HTTPServer.h"
#include "main.h"

/*****************************************************************************!
 * Local Macros
 *****************************************************************************/

/*****************************************************************************!
 * Local Data
 *****************************************************************************/
string
MainWWWDirectory = "www";

struct mg_serve_http_opts
HTTPServerOptions;

struct mg_connection*
HTTPServerConnection;

struct mg_mgr
HTTPServerMgr;

/*****************************************************************************!
 * Local Functions
 *****************************************************************************/

#include "HTTPServerInitialize.c"
#include "HTTPServerThread.c"
#include "HTTPServerThreadInitialize.c"
#include "HTTPEventHandler.c"
