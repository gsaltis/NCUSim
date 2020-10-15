/*****************************************************************************!
 * Function : MainStartThreads
 *****************************************************************************/
void
MainStartThreads
()
{
  if ( MainStartCLI ) {
    MainUserInputThreadID = UserInputInitialize();
  }
  MainHTTPServerThreadID = HTTPServerInitialize();

  if ( MainStartCLI ) {
    pthread_join(MainUserInputThreadID, NULL);
  }
  pthread_join(MainHTTPServerThreadID, NULL);
}
