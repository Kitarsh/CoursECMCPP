//
// Created by Thomas on 16/12/2016.
//

#include "Livre.h"
#include <iostream>
using namespace std;

#ifndef PROJETCPP_ROMAN_H
#define PROJETCPP_ROMAN_H


class roman: public Livre {
protected:
    string genre;

public:
    roman(int code, const string &auteur, const string &titre, const string &editeur, int ISBN,
          const string &publique,int num_biblio_origine, string genre);

};


#endif //PROJETCPP_ROMAN_H
