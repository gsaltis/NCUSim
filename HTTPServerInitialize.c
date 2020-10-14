/*****************************************************************************!
 * Function : HTTPServerInitialize
 *****************************************************************************/
pthread_t
HTTPServerInitialize
()
{
  pthread_t								threadID;

  if ( pthread_create(&threadID, NULL, HTTPServerThread, NULL) ) {
	fprintf(stderr, "Could not create HTTP Server Thread\n");
	exit(EXIT_FAILURE);
  }

  return threadID;
}
