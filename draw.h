#ifndef DRAW_H
#define DRAW_H
#include <vector>
#include "event_loop.h"
using namespace std;

class draw
{
    public:
        draw();
        virtual ~draw();
        void rajzol(vector<bool> xek, vector<bool> ok, bool vege);
    private:

    int hossz = 40;
    int magas =20;
    int p_x;
    int p_y;
    void orajz();
    void xrajz();
    void kezdet();
};

#endif // DRAW_H
