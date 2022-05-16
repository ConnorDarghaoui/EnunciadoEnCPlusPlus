 /* @author Luis Boniche luisboniche@ya.ru
 * @brief 
 * @version 0.1
 * @date 2022-05-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cmath>
#include <stdlib.h>
  using namespace std;

int
main ()
{
  int opcion, salir;
  float dato1, dato2, resultado;
  do
    {
  cout << "Calculadora C++" << endl; 
  cout << "Que operacion desea hacer?" << endl;
  cout << "1. Suma" << endl;
  cout << "2. Resta" << endl;
  cout << "3. Multiplicacion" << endl;
  cout << "4. Division" << endl;
  cout << "5. Raiz Cuadrada" << endl;
  cout << "6. Potencia" << endl;
  cout << "7. Modulo" << endl;
  cout << "8. Seno" << endl;
  cout << "9. Coseno" << endl;
  cout << "10. Tangente" << endl;
  cout << "Opcion: " << endl;
  cin >> opcion;
  if (opcion == 1)
    {
      cout << "Ingrese el primer dato: " << endl;
      cin >> dato1;
      cout << "Ingrese el segundo dato: " << endl;
      cin >> dato2;
      resultado = dato1 + dato2;
      cout << "El resultado de la suma es: " << resultado << endl;
    }
  else if (opcion == 2)
    {
      cout << "Ingrese el primer dato: " << endl;
      cin >> dato1;
      cout << "Ingrese el segundo dato: " << endl;
      cin >> dato2;
      resultado = dato1 - dato2;
      cout << "El resultado de la resta es: " << resultado << endl;
    }
  else if (opcion == 3)
    {
      cout << "Ingrese el primer dato: " << endl;
      cin >> dato1;
      cout << "Ingrese el segundo dato: " << endl;
      cin >> dato2;
      resultado = dato1 * dato2;
      cout << "El resultado de la multiplicacion es: " << resultado << endl;
    }
  else if (opcion == 4)
    {
      cout << "Ingrese el primer dato: " << endl;
      cin >> dato1;
      cout << "Ingrese el segundo dato: " << endl;
      cin >> dato2;
      resultado = dato1 / dato2;
      cout << "El resultado de la division es: " << resultado << endl;
    }
  else if (opcion == 5)
    {
      cout << "Ingrese el dato: " << endl;
      cin >> dato1;
      resultado = sqrt (dato1);
      cout << "La raiz cuadrada del dato ingresado es: " << resultado << endl;
    }
  else if (opcion == 6)
    {
      cout << "Ingrese el dato: " << endl;
      cin >> dato1;
      cout << "Ingrese la potencia: " << endl;
      cin >> dato2;
      resultado = pow (dato2, dato2);
      cout << "El dato elevado a la potencia ingresada es: " << resultado <<
	endl;
    }
  else if (opcion == 7)
    {
      cout << "Ingrese el primer dato: " << endl;
      cin >> dato1;
      cout << "Ingrese el segundo dato: " << endl;
      cin >> dato2;
      resultado = fmod (dato1, dato2);
      cout << "El modulo de los datos ingresados es: " << resultado << endl;
    }
  else if (opcion == 8)
    {
      cout << "Ingrese el dato: " << endl;
      cin >> dato1;
      resultado = sin (dato1 * 3.1416 / 180);
      cout << "El seno del dato ingresado es: " << resultado << endl;
    }
  else if (opcion == 9)
    {
      cout << "Ingrese el dato: " << endl;
      cin >> dato1;
      resultado = cos (dato1 * 3.1416 / 180);
      cout << "El coseno del dato ingresado es: " << resultado << endl;
    }
  else if (opcion == 10)
    {
      cout << "Ingrese el dato: " << endl;
      cin >> dato1;
      resultado = tan (dato1 * 3.1416 / 180);
      cout << "La tangente del dato ingresado es: " << resultado << endl;
    }
  else
    {
      cout << "La opcion ingresada no es valida" << endl;
    }
    cout << "Desea salir? 1. Si 2. No" << endl;
    cin >> salir;
    }
  while (salir != 1);
  system ("PAUSE");
}