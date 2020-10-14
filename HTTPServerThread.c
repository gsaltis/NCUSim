/*****************************************************************************!
 * Function : HTTPServerThread
 *****************************************************************************/
void*
HTTPServerThread
(void* InArgs)
{
  if ( !HTTPServerThreadInitialize() ) {
	return NULL;
  }

  printf("HTTP Server Thread starting\n");
  for (;;) {
	mg_mgr_poll(&HTTPServerMgr, 20);
  }
}
