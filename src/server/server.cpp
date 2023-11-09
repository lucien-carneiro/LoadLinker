#include "server/server.hpp"

int main() {
    config config;
    listener listener;

    config.loadlinker_configure(SERVER_CONFIG, "./loadlinker/network.conf");
    if (listener.init_listener(config.get_server_config()) == 0)
        listener.run();
    return 0;
}