#pragma once

#include <memory>
#include <string>
#include "RequestHandlerFactory.h"

#include <Poco/Net/HTTPServer.h>


namespace http_server
{

class HttpServer
{
    using PocoServerType = Poco::Net::HTTPServer;
    using ServerPointerType = std::shared_ptr<PocoServerType>;
public:

    HttpServer(int port);

    void Start();

    void Stop();

private:
   ServerPointerType mServerInstance; 

   int mPort;
};


}