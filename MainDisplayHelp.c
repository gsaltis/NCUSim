/*****************************************************************************!
 * Function : MainDisplayHelp
 *****************************************************************************/
void
MainDisplayHelp
()
{
  printf("Usage : %s options\n", MainProgramName);
  printf("        -h, --help           : Display this information\n");
  printf("        -w, --www direcdtory : Specify the WWW Directory (default %s)\n", MainWWWDirectoryDefault);
  printf("        -p, --port number    : Specify the HTTP Server port (default %s)\n", MainPortNumberDefault);
}

