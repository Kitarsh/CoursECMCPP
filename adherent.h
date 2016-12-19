//
// Created by Thomas on 16/12/2016.
//

#include "Bibliotheque.h"
#include "Livre.h"
#include <iostream>
using namespace std;

#ifndef PROJETCPP_ADHERENT_H
#define PROJETCPP_ADHERENT_H


class adherent {
private:
    string nom;
    string prenom;
    string adresse;
    int numero;
    Bibliotheque bibliotheque_adheree;
    Livre* livre_emprunt;
    int nb_max_emprunt;

public:
    adherent(string nom, string prenom, string adresse, int numero, Bibliotheque, int nb_max_emprunt);
};


#endif //PROJETCPP_ADHERENT_H
