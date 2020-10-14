/*****************************************************************************
 * FILE NAME    : UserInput.c
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
#include <linenoise.h>
#include <MemoryManager.h>
#include <String.h>

/*****************************************************************************!
 * Local Headers
 *****************************************************************************/
#include "UserInput.h"

/*****************************************************************************!
 * Local Macros
 *****************************************************************************/

/*****************************************************************************!
 * Local Data
 *****************************************************************************/

/*****************************************************************************!
 * Local Functions
 *****************************************************************************/
void*
UserInputThread
(void* InArgs);

#include "UserInputInitialize.c"
#include "UserInputThread.c"
#include "UserInputProcessCommandLine.c"
#include "UserInputCommandQuit.c"
#include "UserInputCommandHelp.c"
