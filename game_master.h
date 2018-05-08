#ifndef GAME_MASTER_H
#define GAME_MASTER_H
#include <vector>
#include "graphics.hpp"
#include "event_loop.h"
using namespace genv;


using namespace std;
class game_master
{
    public:
        game_master();
        virtual ~game_master();
        void kezdet();
    protected:
    event ev;
    vector<bool> xek;
    vector<bool> ok;
    int hossz = 40;
    int magas =20;
    void start();

    private:
};

#endif // GAME_MASTER_H
