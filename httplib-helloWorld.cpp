#include <iostream> 
#include "httplib.h"


int main()
{
    httplib::Server server;
    server.Get("/", [](const httplib::Request& req, httplib::Response& res){
        res.set_content("<h1>Hello World!</h1>", "text/html");
    });
    server.listen("192.168.135.132", 9000);

    
    return 0;
}
