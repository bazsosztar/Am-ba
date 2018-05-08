#include "ellenorzo.h"
#include <iostream>
#include<vector>
using namespace std;
ellenorzo::ellenorzo(vector<bool> _xek, vector<bool> _ok, bool _vege)
{
    xek = _xek;
    ok = _ok;
    //ctor
}



void ellenorzo::nyert(int e_x, int e_o)
{
    cout<<e_x;
    if(e_x ==5 || e_o==5)
    {
        vege=true;
        cout<<"vege";
    }
}

void ellenorzo::vkeres()
{
        int e_x=0;
        int e_o=0;

     for(int i = 0; i<magas;i++)
    {
        for(int j = 0;j<hossz;j++)
        {
            int jelen = i*hossz+j;

            if(xek[jelen]==true)
            {
                e_x++;
               nyert(e_x, e_o);
            }else{
            e_x=0;
            }
            if(ok[jelen]==true)
            {
                e_o++;
                nyert(e_x, e_o);
            }else
            {
                e_o=0;
            }
        }
    e_o = 0;
    e_x = 0;
    }
}

void ellenorzo::fkeres()
{
        int e_x=0;
        int e_o=0;

    for(int i = 0; i<hossz;i++)
    {
        for(int j = 0;j<magas;j++)
        {
            int jelen = j*magas+i;
            if(xek[jelen]==true)
            {
                e_x++;
                nyert(e_x, e_o);
            }else{

             e_x=0;
            }
            if(ok[jelen]==true)
            {
                e_o++;
                nyert(e_x, e_o);
            }else
            {
               e_o=0;
            }
        }
    e_o = 0;
    e_x = 0;
    }
}

void ellenorzo::atkeres()
{

}

void ellenorzo::ellenorzes()
{
    fkeres();
    vkeres();
    atkeres();


}

ellenorzo::~ellenorzo()
{
    //dtor
}
