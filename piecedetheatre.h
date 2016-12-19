//
// Created by Thomas on 16/12/2016.
//

#include "Livre.h"
#include <iostream>
using namespace std;

#ifndef PROJETCPP_PIECEDETHEATRE_H
#define PROJETCPP_PIECEDETHEATRE_H


class piecedetheatre: public Livre {
protected:
    int siecle;

public:
    piecedetheatre(int code, const string &auteur, const string &titre, const string &editeur, int ISBN,
                   const string &publique,int num_biblio_origine,int siecle);

};


#endif //PROJETCPP_PIECEDETHEATRE_H
