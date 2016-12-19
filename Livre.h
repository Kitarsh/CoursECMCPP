//
// Created by Thomas on 16/12/2016.
//

#include <iostream>
using namespace std;



#ifndef PROJETCPP_LIVRE_H
#define PROJETCPP_LIVRE_H


class Livre {
protected:
    int code;
    string auteur;
    string titre;
    string editeur;
    int ISBN;
    string publique;
    string etat;
    int num_biblio_origine;

public:
    Livre();
    Livre(int code, string auteur, string titre, string editeur, int ISBN, string publique,int num_biblio_origine);

    int getCode() const;

    void setCode(int code);

    const string &getAuteur() const;

    void setAuteur(const string &auteur);

    const string &getTitre() const;

    void setTitre(const string &titre);

    const string &getEditeur() const;

    void setEditeur(const string &editeur);

    int getISBN() const;

    void setISBN(int ISBN);

    const string &getPublique() const;

    void setPublique(const string &publique);

    const string &getEtat() const;

    void setEtat(const string &etat);
};


#endif //PROJETCPP_LIVRE_H
