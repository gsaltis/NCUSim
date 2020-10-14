/*****************************************************************************!
 * Function : MainStartThreads
 *****************************************************************************/
void
MainStartThreads
()
{
  MainUserInputThreadID = UserInputInitialize();
  MainHTTPServerThreadID = HTTPServerInitialize();

  pthread_join(MainUserInputThreadID, NULL);
  pthread_join(MainHTTPServerThreadID, NULL);
}
