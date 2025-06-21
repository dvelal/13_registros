#include <iostream>
#include <string>
using namespace std;

struct empleado{
    string nombre;
    string sexo;
    double sueldo;
};

int main() {
    int n;
    cout<<"Cantidad de empleados: "; cin>>n;
    empleado E[n];
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, E[i].nombre);
        cin>>E[i].sexo;
        cin>>E[i].sueldo;
    }
    for (int i = 0; i < n; i++) {
        cout<<E[i].nombre<<endl;
        cout<<E[i].sexo<<endl;
        cout<<E[i].sueldo<<endl;
    }
    return 0;
} 