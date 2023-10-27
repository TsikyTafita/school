#ifndef SCHOOL_H
#define SCHOOL_H

#include <string>
using namespace std ;

/******************Définition des classes********************/
class Student 
{
    private :
        int id ; // l'identité de l'étudiant
        string lname; // le nom de l'élève
        string fname ; // le prénom
        string birth ; // la date de naissance
        string afees ; // la date de paiement du droit de l'élève
        string Class ; // la classe de l' élève

    public :
        Student () ; // constructeur 
        int getid () ; 
        void setid () ; 
        string getlname () ;
        void setlname () ;
        string getfname () ;
        void setfname () ;
        string getbirth () ;
        void setbirth () ;
        string getafees () ;
        void setafees () ;
        string getClass () ;
        void setClass () ;
        void insert () ; // insérer un étudiant dans la base
        void delete () ; // supprimer un étudiant dans la base
        void deleteAll () ; // supprimer toutes les listes chaque fin d'année
        void displayList () ; // afficher la liste des étudiants dans chaque classe  
        void displayStudent () ; // afficher un étudiant dans la liste
        void takeFrom () ; //  
        void saveTo () ; // 

} ;

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