/*****************************************************************************!
 * Function : UserInputInitialize
 *****************************************************************************/
pthread_t
UserInputInitialize
()
{
  pthread_t								threadID;

  if ( pthread_create(&threadID, NULL, UserInputThread, NULL) ) {
	fprintf(stderr, "Could not create User Input Thread\n");
	exit(EXIT_FAILURE);
  }
  return threadID;
}
