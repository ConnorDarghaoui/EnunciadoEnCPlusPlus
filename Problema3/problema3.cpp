//convertir un número decimal a hexadecimal en c++
/**
 * @file problema3.cpp
 * @author Luis Boniche Luisboniche@ya.ru
 * @brief 
 * @version 0.1
 * @date 2022-05-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

    //declaracion de variables
    char hexa[100]; 
    int numero, residuo, i=1, j, temp; 

    //declaracion de un arreglo de caracteres
    char hexa[100]; 

    //ingreso de un numero entero
    cout<<"Ingrese un numero entero: ";
    cin>>numero; 

    //se guarda el numero ingresado en una variable temporal
    temp = numero;

    //mientras el numero sea diferente de 0
    while (numero!=0) 
    {
        //se obtiene el residuo de la division del numero entre 16
        residuo = numero % 16; 

        //si el residuo es menor a 10
        if (residuo < 10) 
        {
            //se guarda el residuo en el arreglo de caracteres
            hexa[i++]= 48 + residuo; 
        }
        //si el residuo es mayor a 10
        else 
        {
            //se guarda el residuo en el arreglo de caracteres
            hexa[i++] = 55 + residuo; 
        }
        //se divide el numero entre 16
        numero = numero / 16; 
    }
    cout<<"El numero en hexadecimal es : ";
    //se recorre el arreglo de caracteres
    for (j = i -1 ;j> 0;j--) 
    {
        //se imprime el arreglo de caracteres
        cout<<hexa[j]; 
    }
    cout<<endl;
    return 0;
}

//El programa funciona de la siguiente manera:
//1. Se declaran las variables que se van a utilizar en el programa
//2. Se pide al usuario que ingrese un numero entero
//3. Se guarda el numero ingresado en la variable temp
//4. Se crea un ciclo while que se ejecutara mientras el numero ingresado sea diferente de 0
//5. Se guarda el residuo de la division del numero ingresado entre 16 en la variable residuo
//6. Se crea una condicion if que se ejecutara si el residuo es menor a 10
//7. Se guarda el residuo en la variable hexa
//8. Se crea una condicion else que se ejecutara si el residuo es mayor a 10
//9. Se guarda el residuo en la variable hexa
//10. Se divide el numero ingresado entre 16 y se guarda el resultado en la variable numero
//11. Se imprime el numero en hexadecimal
//12. Se crea un ciclo for que se ejecutara mientras j sea mayor a 0
//13. Se imprime el numero en hexadecimal
//14. Se termina el programa