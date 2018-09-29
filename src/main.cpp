#include <iostream>
#include "server.h"

int
main ( int argc, char **argv )
{
    if ( argc != 3 )
    {
        std::cout << "Usage: bulk_server <port> <bulk_size>\n";
        return 1;
    }

    unsigned short port = std::atoi ( argv[1] );
    size_t  bulk_size   = std::atoi ( argv[2] );

    bulk::Server server ( port, bulk_size );
    server.serve_forever ( );

    return 0;
}