#pragma once

#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>

namespace http_server
{

class RequestHandler : public Poco::Net::HTTPRequestHandler
{
public:
  virtual void handleRequest(
      Poco::Net::HTTPServerRequest &req, 
      Poco::Net::HTTPServerResponse &resp);
};

}