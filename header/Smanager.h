#ifndef SMANAGER_H
#define SMANAGER_H

#include "student.h"

class Smanager ()
{
    private:
        Student stud ;
        Smanager* pnext ;

    public:
        Smanager () ;
        void setpnext (Smanager*) ;
        Smanager* getpnext () ;
        void display () ;
        void takeFromdb () ; 
} ;

#endif