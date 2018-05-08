#ifndef EVENT_LOOP_H
#define EVENT_LOOP_H
#include <vector>
#include "graphics.hpp"
#include "game_master.h"
using namespace std;
using namespace genv;

class ellenorzo;
class event_loop
{
    public:
        event_loop();
        virtual ~event_loop();
        virtual void event_handler();
    protected:
    event ev;
    vector<bool> xek;
    vector<bool> ok;
    int hossz = 40;
    int magas =20;
    bool vege = false;
    int lepes = 1;
    private:

};

#endif // EVENT_LOOP_H
