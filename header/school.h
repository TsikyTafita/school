#ifndef SCHOOL_H
#define SCHOOL_H

#include <string>
using namespace std ;

/******************Définition des classes********************/
class Student 
{
    private :
        int id ; // l'identité de l'étudiant
        string Lname; // le nom de l'élève
        string Fname ; // le prénom
        string birth ; // la date de naissance
        string Afees ; // la date de paiement du droit de l'élève
        string grade ; // la classe de l' élève

    public :
        Student () ; // constructeur 
        int getid () ; 
        void setid () ; 
        string getLname () ;
        void setLname () ;
        string getFname () ;
        void setFname () ;
        string getbirth () ;
        void setbirth () ;
        string getAfees () ;
        void setAfees () ;
        string getgrade () ;
        void setgrade () ;
        void insertTodb () ; // insérer un étudiant dans la base
        void removeFromdb () ; // supprimer un étudiant dans la base  
        void displayStudent () ; // afficher un étudiant dans la liste  
        void updateIndb () ; // 

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