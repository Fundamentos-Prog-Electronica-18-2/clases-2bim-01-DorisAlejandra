#include <iostream>

using namespace std;
 int obtener_edad(int anioactual, int nacimiento){
    int valor= anioactual-nacimiento;
    return valor;
   }

int main()
{
   int edad,nacimiento;
   string nombre,apellido;
   cout << "ingrese su nombre por favor:"<<endl;
   cin >> nombre;
   cout << "ingrese su apellido:"<<endl;
   cin>> apellido;
   cout<< "Ingrese la fecha de nacimineto"<<endl;
   cin>>nacimiento;

   edad= obtener_edad(2018,nacimiento);
   cout << "Su edad es:"<< edad;
   return 0;
}
