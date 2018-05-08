#include <iostream>
#include "graphics.hpp"
#include <vector>
#include "event_loop.h"
#include "draw.h"
#include "game_master.h"
#include "ellenorzo.h"
int HEIGHT = 800;
int WEIDTH = 400;
using namespace genv;
using namespace std;
struct helyzet{
bool x;
bool o;

};

int main()
{
    gout.open(HEIGHT,WEIDTH);
    event_loop* handler = new event_loop();
    handler->event_handler();


    return 0;
}
