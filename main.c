/*****************************************************************************
 * FILE NAME    : main.c
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
#include <StringUtils.h>
#include <MemoryManager.h>
#include <pthread.h>

/*****************************************************************************!
 * Local Headers
 *****************************************************************************/
#include "main.h"
#include "UserInput.h"
#include "HTTPServer.h"

/*****************************************************************************!
 * Local Macros
 *****************************************************************************/

/*****************************************************************************!
 * Local Data
 *****************************************************************************/
bool
MainStartCLI = true;

string
MainPortNumberDefault = "80";

string
MainPortNumber;

bool
MainVerbose;

string
MainProgramName = "NCUSim";

string
MainWWWDirectoryDefault = "www";

string
MainWWWDirectory;

pthread_t
MainUserInputThreadID;

pthread_t
MainHTTPServerThreadID;

/*****************************************************************************!
 * Local Functions
 *****************************************************************************/

/*****************************************************************************!
 * Function : main
 *****************************************************************************/
int
main
(int argc, char** argv)
{
  MainInitialize();
  MainProcessCommandLine(argc, argv);
  MainVerifyCommandLine();
  MainStartThreads();
  MainTerminate();
  return EXIT_SUCCESS;
}

#include "MainInitialize.c"
#include "MainProcessCommandLine.c"
#include "MainVerifyCommandLine.c"
#include "MainStartThreads.c"
#include "MainTerminate.c"
#include "MainDisplayHelp.c"
