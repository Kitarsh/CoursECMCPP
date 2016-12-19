//
// Created by Thomas on 16/12/2016.
//

#include "Livre.h"
using namespace std;
#include <iostream>

Livre::Livre(){
    this->code=0;
    this->auteur="";
    this->titre="";
    this->editeur="";
    this->ISBN=0;
    this->publique="";
    this->code=0;
}

Livre::Livre(int c, string a, string t, string e, int isbn, string p,int n){
    this->code=c;
    this->auteur=a;
    this->titre=t;
    this->editeur=e;
    this->ISBN=isbn;
    this->publique=p;
    this->num_biblio_origine=n;
}

int Livre::getCode() const {
    return code;
}

void Livre::setCode(int code) {
    Livre::code = code;
}

const string &Livre::getAuteur() const {
    return auteur;
}

void Livre::setAuteur(const string &auteur) {
    Livre::auteur = auteur;
}

const string &Livre::getTitre() const {
    return titre;
}

void Livre::setTitre(const string &titre) {
    Livre::titre = titre;
}

const string &Livre::getEditeur() const {
    return editeur;
}

void Livre::setEditeur(const string &editeur) {
    Livre::editeur = editeur;
}

int Livre::getISBN() const {
    return ISBN;
}

void Livre::setISBN(int ISBN) {
    Livre::ISBN = ISBN;
}

const string &Livre::getPublique() const {
    return publique;
}

void Livre::setPublique(const string &publique) {
    Livre::publique = publique;
}

const string &Livre::getEtat() const {
    return etat;
}

void Livre::setEtat(const string &etat) {
    Livre::etat = etat;
}
