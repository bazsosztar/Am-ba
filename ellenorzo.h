#ifndef ELLENORZO_H
#define ELLENORZO_H
#include "event_loop.h"


class ellenorzo: public event_loop
{
    public:
        ellenorzo(vector<bool> xek, vector<bool> ok, bool vege);

        virtual ~ellenorzo();
        void ellenorzes();

    private:
       // vector<bool> xek;
        //vector<bool> ok;
        void nyert(int e_x, int e_o);
        void vkeres();
        void fkeres();
        void atkeres ();
};

#endif // ELLENORZO_H
