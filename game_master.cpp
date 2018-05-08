#include "game_master.h"
#include "graphics.hpp"

using namespace genv;


game_master::game_master()
{
    //ctor
}

void game_master::start()
{
    event_loop* handler = new event_loop();
    handler->event_handler();

}




void game_master::kezdet()
{

    while(gin>>ev)
    {
        if(ev.type == ev_key && ev.keycode==key_space)
        {
            start();
        }



    }

}


game_master::~game_master()
{
    //dtor
}
