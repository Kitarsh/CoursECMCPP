//
// Created by Thomas on 16/12/2016.
//

#include <iostream>
using namespace std;
#include "Livre.h"

#ifndef PROJETCPP_BIBLIOTHEQUE_H
#define PROJETCPP_BIBLIOTHEQUE_H


class Bibliotheque {
private:
    string nom;
    string adresse;
    int code;
    Livre * Liste_Livre;

public:
    Bibliotheque(string nom, string adresse, int code);
    ~Bibliotheque();
    void afficheLivre();
    void afficheLivre(string categorie);
    void demandeLivre(int ISBN);
    void rendreLivre();
    void achatLivre(Livre);
    void supprimeLivre(int ISBN);

    const string &getNom() const;

    void setNom(const string &nom);

    const string &getAdresse() const;

    void setAdresse(const string &adresse);

    int getCode() const;

    void setCode(int code);

    Livre *getListe_Livre() const;

    void setListe_Livre(Livre *Liste_Livre);
};


#endif //PROJETCPP_BIBLIOTHEQUE_H
