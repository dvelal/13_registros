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
    cout<<"    ----  EMPLEADOS DE DATATECH  ----"<<endl;
    cout<<"Cantidad de empleados: "; cin>>n;
    empleado E[n];
    for (int i = 0; i < n; i++) {
        cout<<"---------------------------------"<<endl;
        cout<<"Nombre: ";
        cin.ignore();
        getline(cin, E[i].nombre);
        cout<<"Sexo: "; cin>>E[i].sexo;
        cout<<"Sueldo: "; cin>>E[i].sueldo;
    }
    cout<<"----Empleado(s) con menor salario----"<<endl;
    double min = E[0].sueldo;
    for (int i = 0; i < n; i++) {
        if (E[i].sueldo < min)
            min = E[i].sueldo;
    }
    for (int i = 0; i < n; i++) {
        if (E[i].sueldo == min) {
            cout<<"- "<<E[i].nombre;
            cout<<"; sexo: "<<E[i].sexo;
            cout<<"; salario: "<<E[i].sueldo<<endl;
        }
    }
    cout<<"----Empleado(s) con mayor salario----"<<endl;
    double max = E[0].sueldo;
    for (int i = 0; i < n; i++) {
        if (E[i].sueldo > max)
            max = E[i].sueldo;
    }
    for (int i = 0; i < n; i++) {
        if (E[i].sueldo == max) {
            cout<<"- "<<E[i].nombre;
            cout<<"; sexo: "<<E[i].sexo;
            cout<<"; salario: "<<E[i].sueldo;
        }
    }
    return 0;
} 