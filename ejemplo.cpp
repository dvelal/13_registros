#include <iostream>
#include <string>
using namespace std;

struct EMP {
    int num;
    string nom;
    float ven[12], sal;
};

int main () {
    EMP EMPLEADOS[100];
    int n, k;
    cout<<"Ingrese cantidad de empleados: ";
    cin>>n;
    float mventa = 0;
    for (int i = 0; i < n; i++){
        cout<<"-------------------------------"<<endl;
        cout<<"Ingrese numero de empleado: ";
        cin>>EMPLEADOS[i].num;
        cout<<"Ingrese el nombre del empleado: ";
        cin.ignore();
        getline(cin, EMPLEADOS[i].nom);
        float vtotales = 0;
        for (int j = 0; j < 12; j++) {
            cout<<"Ventas del mes "<<j+1<<": ";
            cin>>EMPLEADOS[i].ven[j];
            vtotales = vtotales + EMPLEADOS[i].ven[j];
            //Determinar el empleado con mayores ventas
            if (vtotales > mventa){
                mventa = vtotales;
                k = i;
            }
        }
        cout<<"Ingrese el salario del empleado: ";
        cin>>EMPLEADOS[i].sal;
        //incrementamos 10% a empleados con ventas mayor a 100u durante el año"
        if (vtotales > 100)
            EMPLEADOS[i].sal = EMPLEADOS[i].sal * 1.10;
    }

    cout<<"---Listado de empleados y salario---"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<"Numero: "<<EMPLEADOS[i].num;
        cout<<" Nombre: "<<EMPLEADOS[i].nom;
        cout<<"; Salario: "<<EMPLEADOS[i].sal<<endl;
    }
    cout<<"--Empleado con mayores ventas durante el anio--"<<endl;
    cout<<"Numero: "<<EMPLEADOS[k].num;
    cout<<" Nombre: "<<EMPLEADOS[k].nom<<endl;
    
    cout<<"--Empleados con ventas bajas en diciembre--"<<endl;
    for (int i = 0; i < n; i++) {
        if (EMPLEADOS[i].ven[11] < 30) {
            cout<<"Numero: "<<EMPLEADOS[i].num;
            cout<<" Nombre: "<<EMPLEADOS[i].nom<<endl;
        }
    }
    return 0;
}