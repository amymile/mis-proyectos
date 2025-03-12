/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // este es un comentario de linea simple
    /* este es un 
    comentario de 
    multiples lineae*/
    
 int a, b;
 cout << "Ingresa el primer numero"<<endl;
 cin >> a;
 cout << "Ingresa el segundo numero"<<endl;
 cin >> b;
 cout <<"La suma de los numeros es: "<< a+b <<endl; 
 cout <<"La resta de los numeros es: "<< a-b <<endl;
 cout <<"La multiplicacion de los numeros es: "<< a*b <<endl;
 cout <<"La division de los numeros es: "<< a/b <<endl;
 cout <<"El residuo es: "<< a%b <<endl;
 
 return 0;
}

