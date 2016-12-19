//
// Created by Thomas on 16/12/2016.
//

#include "Livre.h"
#include <iostream>
using namespace std;

#ifndef PROJETCPP_RECUEILDEPOESIE_H0
#define PROJETCPP_RECUEILDEPOESIE_H


class recueildepoesie : public Livre {

protected:
    string indicateur;

public:
    recueildepoesie(int code, const string &auteur, const string &titre, const string &editeur, int ISBN,
                    const string &publique,int num_biblio_origine, string indicateur);


};


#endif //PROJETCPP_RECUEILDEPOESIE_H
