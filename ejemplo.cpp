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
    cin>>n;
    float mventa = 0;
    for (int i = 0; i < n; i++){
        cin>>EMPLEADOS[i].num;
        cin.ignore();
        getline(cin, EMPLEADOS[i].nom);
        float vtotales = 0;
        for (int j = 0; j < 12; j++) {
            cin>>EMPLEADOS[i].ven[j];
            vtotales = vtotales + EMPLEADOS[i].ven[j];
            //Determinar el empleado con mayores ventas
            if (vtotales > mventa){
                mventa = vtotales;
                k = i;
            }
        }
        cin>>EMPLEADOS[i].sal;
        if (vtotales > 100)
            EMPLEADOS[i].sal = EMPLEADOS[i].sal * 1.10;
    }

    //VERIFICACION
    for (int i = 0; i < n; i++) {
        cout<<EMPLEADOS[i].num<<endl;
        cout<<EMPLEADOS[i].nom<<endl;
        for (int j = 0; j < 12; j++)
            cout<<EMPLEADOS[i].ven[j]<< " ";
        cout<<endl;
        cout<<EMPLEADOS[i].sal<<endl;
    }
    cout<<EMPLEADOS[k].num<<endl;
    cout<<EMPLEADOS[k].nom<<endl;

    return 0;
}