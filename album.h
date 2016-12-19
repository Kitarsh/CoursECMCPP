//
// Created by Thomas on 16/12/2016.
//

#include "Livre.h"
#include <iostream>
using namespace std;

#ifndef PROJETCPP_ALBUM_H
#define PROJETCPP_ALBUM_H


class album: public Livre {
protected:
    string type;

public:
    album(int code, const string &auteur, const string &titre, const string &editeur, int ISBN,
          const string &publique,int num_biblio_origine, string type);

};


#endif //PROJETCPP_ALBUM_H
