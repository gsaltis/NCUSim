/*****************************************************************************!
 * Function : MainVerifyCommandLine
 *****************************************************************************/
void
MainVerifyCommandLine
()
{
  if ( NULL == MainWWWDirectory ) {
	fprintf(stderr, "Missing the www directory\n");
	MainDisplayHelp();
	exit(EXIT_FAILURE);
  }
}
