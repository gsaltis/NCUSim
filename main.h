/*****************************************************************************
 * FILE NAME    : main.h
 * DATE         : October 14 2020
 * PROJECT      : NONE
 * COPYRIGHT    : Copyright (C) 2020 by Gregory R Saltis
 *****************************************************************************/
#ifndef _main_h_
#define _main_h_

/*****************************************************************************!
 * Global Headers
 *****************************************************************************/

/*****************************************************************************!
 * Local Headers
 *****************************************************************************/

/*****************************************************************************!
 * Exported Macros
 *****************************************************************************/

/*****************************************************************************!
 * Exported Data
 *****************************************************************************/
extern bool
MainStartUI;

extern string
MainPortNumberDefault;

extern string
MainPortNumber;

extern bool
MainVerbose;

extern string
MainProgramName;

extern string
MainWWWDirectoryDefault;

extern string
MainWWWDirectory;

/*****************************************************************************!
 * Exported Functions
 *****************************************************************************/
void
MainDisplayHelp
();

void
MainTerminate
();

void
MainStartThreads
();

void
MainVerifyCommandLine
();

void
MainProcessCommandLine
(int argc, char** argv);

void
MainInitialize
();

#endif // _main_h_
