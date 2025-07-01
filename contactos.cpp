#include "contacto.h"
#include<iostream>
using namespace std;

int main(){
    int n, op, num;
    string nom, user, domain;
    char sex;
    int edad;
    correo email;
    contactoEmail cont, lista[100];
    n = 0;
    do{
        system("cls");
        cout<<"Menu de opciones -------------------------"<<endl;
        cout<<"1. Agregar contacto"<<endl;
        cout<<"2. Modificar contacto"<<endl;
        cout<<"3. Mostrar contactos"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Elige una opcion: "; cin>>op;
        switch(op){
            case 1:
                system("cls");
                cout<<"Ingrese los datos de un usuario: "<<endl;
                cin.ignore();
                cout<<"Ingrese el nombre del contacto: "; getline(cin,nom);
                cout<<"Ingrese el sexo (M/F): "; cin>>sex;
                cout<<"Ingrese la edad: "; cin>>edad;
                cout<<"Ingrese el correo electronico (usuario@dominio): "<<endl;
                cout<<"\tIngrese el usuario: "; cin>>user;
                cout<<"\tIngrese el dominio: "; cin>>domain;
                leerCorreo(email,user,domain);
                leerContacto(cont,nom,sex,edad,email);
                //imprimeContacto(cont);

                lista[n] = cont;
                n++;
                system("pause");
                break;
            case 2:
                system("cls");
                cout<<"Ingrese el numero del contacto a modificar: "; cin>>num;
                if (num > n || num <= 0)
                    cout<<"Contacto no encontrado."<<endl;
                else {
                cout<<"Modificar contacto :::::::::::::::::::::::::::"<<endl;
                imprimeContacto(lista[num - 1]);
                char r;
                bool modNom = false, modSex = false, modEdad = false, modCorreo = false;
                string nuevoNom, nuevoUser, nuevoDomain;
                char nuevoSex;
                int nuevaEdad;
                cout<<"Modificar nombres? (S/N): "; cin>>r;
                if (r == 'S' || r == 's') {
                cin.ignore();
                cout<<"\tIngrese nombres: ";getline(cin, nuevoNom);
                modNom = true;
                }
                cout<<"Modificar sexo? (S/N): "; cin>>r;
                if (r == 'S' || r == 's') {
                cout<<"\tIngrese sexo (M/F): "; cin>>nuevoSex;
                modSex = true;
                }
                cout<<"Modificar edad? (S/N): "; cin>>r;
                if (r == 'S' || r == 's') {
                cout<<"\tIngrese edad: "; cin>>nuevaEdad;
                modEdad = true;
                }
                cout<<"Modificar correo electronico? (S/N): "; cin>>r;
                if (r == 'S' || r == 's') {
                cout<<"\tIngrese usuario: "; cin>>nuevoUser;
                cout<<"\tIngrese dominio: "; cin>>nuevoDomain;
                modCorreo = true;
                }

                modificarContacto(lista[num - 1], modNom, nuevoNom, modSex, nuevoSex,
                modEdad, nuevaEdad, modCorreo, nuevoUser, nuevoDomain);

                cout<<"\nContacto modificado correctamente.\n";
                }

                system("pause");
                break;
            case 3:
                system("cls");
                for(int i = 0; i < n; i++){
                    cout<<"Contacto #"<<i+1<<" ------------"<<endl;
                    imprimeContacto(lista[i]);
                    cout<<endl;
                }
                system("pause");
                break;
            case 0:
                system("cls");
                char seg, S, N;
                cout<<"Esta seguro de salir? (S/N): "; cin>>seg;
                if (seg == N || seg == n)
                    op = -1;
                break;
            default:
                cout<<"Opcion no valida!"<<endl;
                system("pause");
                break;
        }
    } while(op != 0);
    return 0;
}