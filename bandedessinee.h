//
// Created by Thomas on 16/12/2016.
//

#include "Livre.h"
#include <iostream>
using namespace std;

#ifndef PROJETCPP_BANDEDESSINEE_H
#define PROJETCPP_BANDEDESSINEE_H


class bandedessinee: public Livre {

protected:
    string dessinateur;

public:
    bandedessinee(int code, const string &auteur, const string &titre, const string &editeur, int ISBN,
                  const string &publique,int num_biblio_origine, string dessinateur);



};


#endif //PROJETCPP_BANDEDESSINEE_H
