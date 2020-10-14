/*****************************************************************************!
 * Function : UserInputThread
 *****************************************************************************/
void*
UserInputThread
(void* InArgs)
{
  string								s;
  char*									commandLine;

  while (true) {
	commandLine = linenoise("Command : ");
	s = StringTrim(commandLine);
 	free(commandLine);
	if ( s == NULL ) {
	  continue;
	}
	linenoiseHistoryAdd(s);
	UserInputProcessCommandLine(s);
	FreeMemory(s);
  }
}
