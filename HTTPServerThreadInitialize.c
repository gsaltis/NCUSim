/*****************************************************************************!
 * Function : HTTPServerThreadInitialize
 *****************************************************************************/
bool
HTTPServerThreadInitialize
()
{
  mg_mgr_init(&HTTPServerMgr, NULL);

  HTTPServerConnection = mg_bind(&HTTPServerMgr, MainPortNumber, HTTPEventHandler);
  if ( HTTPServerConnection == NULL ) {
	printf("Failed to start HTTP Server\n");
	return false;
  }
  mg_set_protocol_http_websocket(HTTPServerConnection);
  HTTPServerOptions.document_root = MainWWWDirectory;
  HTTPServerOptions.enable_directory_listing = "yes";

  if ( MainVerbose ) {
	printf("HTTP Server start on port   : %s\n", MainPortNumber);
	printf("HTTP Server using directory : %s\n", MainWWWDirectory);
  }
  return true;
}
