/*****************************************************************************!
 * Function : HTTPEventHandler
 *****************************************************************************/
void
HTTPEventHandler
(struct mg_connection* InConnection, int InEvent, void* InMessagePointer)
{
  if ( InEvent == MG_EV_HTTP_REQUEST ) {
	mg_serve_http(InConnection, (struct http_message*)InMessagePointer, HTTPServerOptions);
  }
}
