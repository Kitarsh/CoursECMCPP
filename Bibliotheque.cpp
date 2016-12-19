//
// Created by Thomas on 16/12/2016.
//

#include "Bibliotheque.h"






const string &Bibliotheque::getNom() const {
    return nom;
}

void Bibliotheque::setNom(const string &nom) {
    Bibliotheque::nom = nom;
}

const string &Bibliotheque::getAdresse() const {
    return adresse;
}

void Bibliotheque::setAdresse(const string &adresse) {
    Bibliotheque::adresse = adresse;
}

int Bibliotheque::getCode() const {
    return code;
}

void Bibliotheque::setCode(int code) {
    Bibliotheque::code = code;
}

Livre *Bibliotheque::getListe_Livre() const {
    return Liste_Livre;
}

void Bibliotheque::setListe_Livre(Livre *Liste_Livre) {
    Bibliotheque::Liste_Livre = Liste_Livre;
}
