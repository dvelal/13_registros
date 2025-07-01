#include "contacto.h"
#include <iostream>
using namespace std;

void leerContacto(contactoEmail &c, string n, char s, int e, correo em){
    c.nom = n;
    c.sex = s;
    c.edad = e;
    c.email = em;
}
void imprimeContacto(contactoEmail &c){
    cout<<"Nombre: "<<c.nom<<endl;
    cout<<"Sexo: "<<c.sex<<endl;
    cout<<"Edad: "<<c.edad<<endl;
    cout<<"Email: "<<c.email.user<<"@"<<c.email.domain<<endl;
}
void modificarContacto(contactoEmail &c, bool modNom, string nuevoNom, bool modSex, char nuevoSex, 
bool modEdad, int nuevaEdad, bool modCorreo, string nuevoUser, string nuevoDomain) {
    if (modNom) c.nom = nuevoNom;
    if (modSex) c.sex = nuevoSex;
    if (modEdad) c.edad = nuevaEdad;
    if (modCorreo) {
        c.email.user = nuevoUser;
        c.email.domain = nuevoDomain;
    }
}