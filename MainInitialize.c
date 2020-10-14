/*****************************************************************************!
 * Function : MainInitialize
 *****************************************************************************/
void
MainInitialize
()
{
  MainVerbose = true;
  MainWWWDirectory = StringCopy(MainWWWDirectoryDefault);
  MainPortNumber = StringCopy(MainPortNumberDefault);
}
