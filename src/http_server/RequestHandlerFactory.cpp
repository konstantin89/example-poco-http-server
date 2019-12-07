#include "RequestHandlerFactory.h"

using http_server::RequestHandlerFactory;

  Poco::Net::HTTPRequestHandler* RequestHandlerFactory::createRequestHandler(const Poco::Net::HTTPServerRequest &)
  {
    return new http_server::RequestHandler;
  }