#include "RequestHandler.h"

using namespace Poco::Net;

 void RequestHandler::handleRequest(HTTPServerRequest &req, HTTPServerResponse &resp)
 {
   resp.setStatus(HTTPResponse::HTTP_OK);
   resp.setContentType("text/html");

}