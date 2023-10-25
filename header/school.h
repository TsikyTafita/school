#ifndef SCHOOL_H
#define SCHOOL_H

#include <string>
using namespace std ;

/******************Définition des classes********************/
class Student 
{
    private :
        int id ; // l'identité de l'étudiant
        string nom ; // le nom de l'élève
        string prenoms ; // le prénom
        string naissance ; // la date de naissance
        string droit ; // la date de paiement du droit de l'élève
        string classe ; // la classe de l' élève

    public :
        Student () ; // constructeur 
        int getid () ; 
        void setid () ; 
        string getnom () ;
        void setnom () ;
        string getprenoms () ;
        void setprenoms () ;
        string getnaissance () ;
        void setnaissance () ;
        string getdroit () ;
        void setdroit () ;
        string getclasse () ;
        void setclasse () ;
        void insert () ; // insérer un étudiant dans la base
        void delete () ; // supprimer un étudiant dans la base
        void deleteAll () ; // supprimer toutes les listes chaque fin d'année
        void displayStudent () ; // afficher la liste des étudiants dans chaque classe  

} ;

class Fees 
{
    private :
        int id ; // l' identité de l' étudiant
        string jan ;
        string fev ;
        string mar ;
        string avr ;
        string mai ;
        string jui ;
        string jll ;
        string aou ;
        string sept ;
        string oct ;
        string nov ;
        string dec ;

    public :
        Fees () ; // Constructeur
        void insert () ; // compléter la date de paiement de l'écolage
        void delete () ; // supprimer un élève renvoyé
        void deleteAll () ; // supprimer tous les carnets chaque fin d'année
        void displayFees () ; // afficher la liste des carnets de paiement d'écolage 
} ;

#endif