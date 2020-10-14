/*****************************************************************************!
 * Function : UserInputProcessCommandLine
 *****************************************************************************/
void
UserInputProcessCommandLine
(string InCommandLine)
{
  StringList*							elements;

  if ( NULL == InCommandLine ) {
	return;
  }

  elements = StringSplit(InCommandLine, " ", true);
  if ( NULL == elements ) {
	return;
  }

  if ( StringEqualNoCase(elements->strings[0], "quit") ) {
	UserInputCommandQuit(elements);
  } else if ( StringEqualNoCase(elements->strings[0], "help") ) {
	UserInputCommandHelp(elements);
  }
  StringListDestroy(elements);
}
