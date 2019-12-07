#include <thread>

#include "http_server/HttpServer.h"

constexpr int SERVER_PORT = 8088;

constexpr int SERVER_TIME_TO_LIVE_SECONDS = 60;

int main()
{
    http_server::HttpServer server(SERVER_PORT);
    server.Start();

    std::this_thread::sleep_for(std::chrono::seconds(SERVER_TIME_TO_LIVE_SECONDS));

    server.Stop();

    return 0;
}