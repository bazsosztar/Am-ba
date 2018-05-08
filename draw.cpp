#include "draw.h"
#include <vector>
#include<cmath>
#include <iostream>
#include "graphics.hpp"
using namespace std;
using namespace genv;
draw::draw()
{
    //ctor
}

void draw::xrajz ()
{
    gout<<move_to(p_x+1,p_y+1)<<color(255,255,255)<<line(18,18)<<move_to(p_x,p_y+19)<<line(18,-18);

}

void draw::orajz ()
{
    int circle_radius = 9;
    for (int i = 0; i <= 2*circle_radius; i++)
    {
        for (int j = 0; j <= 2*circle_radius; j++)
        {
            float distance_to_centre = sqrt((i - circle_radius)*(i - circle_radius) + (j - circle_radius)*(j - circle_radius));
            if (distance_to_centre > circle_radius-0.5 && distance_to_centre < circle_radius+0.5)
            {
                gout<<move_to(p_x+i+1,p_y+j+1)<< dot;
            }
        }
    }
}


void draw::kezdet()
{
        for(int i = 0; i<hossz; i++)
        {
            gout<<move_to(i*20,0)<<color(255,255,255)<<line_to(i*20,(magas*20));
        }
        for(int i = 0; i<magas; i++)
        {
            gout<<move_to(0, i*20)<<color(255,255,255)<<line_to((hossz*20),i*20);
        }
}




void draw::rajzol(vector<bool> xek, vector<bool> ok, bool vege)
{
    event ev;
    //event_loop* get = new event_loop();

        if(vege)
        {
            gout<<move_to(200,200)<<color(200,12,143)<<text("Vége a játéknak");
        }else{

        gout<<color(0,0,0)<<move_to(0,0)<<box(hossz*20,magas*20);
        kezdet();
        for(int i=0;i<(hossz*magas);i++)
        {
            if(xek[i]==true)
            {
                p_x=(i%hossz)*20;
                p_y= (((i-(i%hossz))/hossz)*20);
                xrajz();
            }
            if(ok[i]==true)
            {
                p_x=(i%hossz)*20;
                p_y= (((i-(i%hossz))/hossz)*20);
                orajz();
            }
        }
        gout<<refresh;

        }
}
draw::~draw()
{
    //dtor
}
