#ifndef FEES_H
#define FEES_H

#include <string>
using namespace std ;

class Fees 
{
    private :
        int id ; // l' identité de l' étudiant
        string jan ;
        string feb ;
        string mar ;
        string apr ;
        string mai ;
        string jun ;
        string jul ;
        string aug ;
        string sep ;
        string oct ;
        string nov ;
        string dec ;

    public :
        Fees () ; // Constructeur
        void insertTodb () ; // compléter la date de paiement de l'écolage
        void removeFrom () ; // supprimer un élève renvoyé
        void displayFees () ; // afficher la liste des carnets de paiement d'écolage 
} ;

#endif