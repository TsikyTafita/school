#ifndef FMANAGER_H
#define FMANAGER_H

#include "fees.h"

class Fmanager 
{
    private :
        Fees fees ;
        Fmanager* pnext ;

    public :
        Fmanager () ;
        void setpnext () ;
        Fmanager* getpnext () ;
        void display () ;
        void takeFromdb () ;
} ;

#endif