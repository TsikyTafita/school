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

#endif