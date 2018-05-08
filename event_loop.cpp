#include "event_loop.h"
#include "ellenorzo.h"
#include "draw.h"
#include "graphics.hpp"
#include <iostream>
using namespace genv;
event_loop::event_loop()
{
    //ctor
}


void event_loop::event_handler()
{

    for(int i = 0; i<(magas*hossz);i++)
    {
        xek.push_back(false);
    }
    for(int i = 0; i<(magas*hossz);i++)
    {
        ok.push_back(false);
    }

    while(gin>>ev)
    {
        if(ev.type == ev_mouse && ev.button == btn_left)
        {
           int p_h = (ev.pos_x-(ev.pos_x% 20))/20+(hossz*((ev.pos_y-(ev.pos_y % 20))/20));

           if(lepes%2==0 && xek[p_h]==false&& ok[p_h]==false)
           {
               xek[p_h] = true;
                lepes++;

           }
           if(lepes%2==1 && xek[p_h]==false&& ok[p_h]==false)
           {
                ok[p_h] = true;
                lepes++;
           }
        }
        gout<<refresh;
        draw* rajz = new draw();
        if (vege)
        {
            cout<<"faszommmat";
        }
        rajz->rajzol(xek, ok, vege);
        ellenorzo* controll = new ellenorzo(xek, ok, vege);
        controll->ellenorzes();
    }
}






event_loop::~event_loop()
{
    //dtor
}
