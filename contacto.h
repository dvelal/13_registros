#ifndef CONTACTO_H
#define CONTACTO_H

#include <string>
#include "correo.h"
using namespace std; 

struct contactoEmail{
    string nom;
    char sex;
    int edad;
    correo email;
};

void leerContacto(contactoEmail &, string, char, int, correo);
void imprimeContacto(contactoEmail &);
void modificarContacto(contactoEmail &, bool, string, bool, char, bool, int, bool, string, string);

#endif