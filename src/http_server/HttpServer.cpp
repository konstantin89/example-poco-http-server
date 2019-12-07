#include "HttpServer.h"
#include "RequestHandlerFactory.h"

#include <Poco/Net/ServerSocket.h>


using http_server::HttpServer;

HttpServer::HttpServer(int port)
{
    mPort = port;

    mServerInstance = std::make_shared<PocoServerType>(
        new RequestHandlerFactory, 
        Poco::Net::ServerSocket(port), 
        new Poco::Net::HTTPServerParams);
}

void HttpServer::Start()
{
    mServerInstance->start();
}

void HttpServer::Stop()
{
    mServerInstance->stop();
}