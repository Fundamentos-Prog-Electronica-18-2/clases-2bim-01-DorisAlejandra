#include <iostream>

using namespace std;
void obtenerTablaMultiplicar(int valor_tabla, int limite){
    int contador = 1;
    while (contador<=limite){
            int resultado1= contador*valor_tabla;
            cout << valor_tabla << "*"<<contador << "="<< resultado1<<endl;
            contador =contador+1;
    }
}
void obtenerTablaSumar(int valor_tabla, int limite){

    for (int i = 1;i<=limite;i++){
            int resultado2=valor_tabla+i;

        cout << valor_tabla << "+"<<i<< "="<< resultado2<<endl;
    }

}

int main()
{
    int  limite,valor_tabla,opcion;
    cout << " ingrese  el valor a multiplicarse"<<endl;
    cin>> valor_tabla;

    cout << " ingrese el limite"<<endl;
    cin>> limite;

    cout << " eliga opcion 1 es tabla de multiplicar, opcion 2 presenta tabla de sumar"<<endl;
    cin>> opcion;

    if (opcion==1){
        obtenerTablaMultiplicar(valor_tabla,limite);

    }else{
        if(opcion==2){
            obtenerTablaSumar(valor_tabla,limite);

        }else{
            cout << "opcion incorrecta";
        }

    }

    return 0;
}
