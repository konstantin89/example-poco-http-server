#pragma once

#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPRequestHandlerFactory.h>
#include "RequestHandler.h"

namespace http_server
{

class RequestHandlerFactory : public Poco::Net::HTTPRequestHandlerFactory
{
public:
  virtual Poco::Net::HTTPRequestHandler* createRequestHandler(const Poco::Net::HTTPServerRequest &);
};

}