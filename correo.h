#ifndef CORREO_H
#define CORREO_H

#include <string>
using namespace std; 

struct correo{
    string user;
    string domain;
};

void leerCorreo(correo &, string, string);

#endif