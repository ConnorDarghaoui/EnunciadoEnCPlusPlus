/**
 * @file problema2.cpp
 * @author @ConnorDarghaoui (Luisboniche@ya.ru)
 * @brief 
 * @version 0.1
 * @date 2022-05-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

//Librerias
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Prototipos de funciones
void tiempo(float *tj, float *tf, float *tjt, float *tft, float *tjd, float *tfd, float *tjc, float *tfc, float *tjtt, float *tftt, float *tjtd, float *tftd, float *tjtc, float *tftc);
void materia(float *mj, float *mf, float *mjt, float *mft, float *mjd, float *mfd, float *mjc, float *mfc, float *mjtt, float *mftt, float *mjtd, float *mftd, float *mjtc, float *mftc);
void ganancia(float *gj, float *gf, float *gjt, float *gft, float *gjd, float *gfd, float *gjc, float *gfc, float *gjtt, float *gftt, float *gjtd, float *gftd, float *gjtc, float *gftc);
void resultado(float tjtt, float tftt, float mjtt, float mftt, float gjtt, float gftt);

int main()
{
    //Variables
    float tj, tf, tjt, tft, tjd, tfd, tjc, tfc, tjtt, tftt, tjtd, tftd, tjtc, tftc;
    float mj, mf, mjt, mft, mjd, mfd, mjc, mfc, mjtt, mftt, mjtd, mftd, mjtc, mftc;
    //Punteros
    float gj, gf, gjt, gft, gjd, gfd, gjc, gfc, gjtt, gftt, gjtd, gftd, gjtc, gftc;

    //Llamada a funciones
    tiempo(&tj, &tf, &tjt, &tft, &tjd, &tfd, &tjc, &tfc, &tjtt, &tftt, &tjtd, &tftd, &tjtc, &tftc);
    materia(&mj, &mf, &mjt, &mft, &mjd, &mfd, &mjc, &mfc, &mjtt, &mftt, &mjtd, &mftd, &mjtc, &mftc);
    ganancia(&gj, &gf, &gjt, &gft, &gjd, &gfd, &gjc, &gfc, &gjtt, &gftt, &gjtd, &gftd, &gjtc, &gftc);

    resultado(tjtt, tftt, mjtt, mftt, gjtt, gftt);

    //Salida de datos
    /* cout << "Tiempo total de produccion: " << tjtt + tftt << " horas" << endl;
    cout << "Materia prima necesaria: " << mjtt + mftt << " kg de hilo" << endl;
    cout << "Ganancias esperadas: " << gjtt + gftt << " soles" << endl;
    */
    return 0;
}

    //Variables
void tiempo(float *tj, float *tf, float *tjt, float *tft, float *tjd, float *tfd, float *tjc, float *tfc, float *tjtt, float *tftt, float *tjtd, float *tftd, float *tjtc, float *tftc)
{
    *tj = 0.2;
    *tf = 0.5;
    *tjt = 0.7;
    *tft = 0.3;
    *tjd = 1;
    *tfd = 1;
    //Calculos
    *tjc = 0.3;
    *tfc = 0.5;
    *tjtt = *tj / *tjt + *tj / *tjd + *tj / *tjc;
    *tftt = *tf / *tft + *tf / *tfd + *tf / *tfc;
    *tjtd = *tj / *tjd;
    *tftd = *tf / *tfd;
    *tjtc = *tj / *tjc;
    *tftc = *tf / *tfc;
}

void materia(float *mj, float *mf, float *mjt, float *mft, float *mjd, float *mfd, float *mjc, float *mfc, float *mjtt, float *mftt, float *mjtd, float *mftd, float *mjtc, float *mftc)
{
    //Variables
    *mj = 0.2;
    *mf = 0.5;
    *mjt = 0.7;
    *mft = 0.3;
    *mjd = 1;
    *mfd = 1;
    *mjc = 0.3;
    *mfc = 0.5;
    //Calculos
    *mjtt = *mj / *mjt + *mj / *mjd + *mj / *mjc;
    *mftt = *mf / *mft + *mf / *mfd + *mf / *mfc;
    *mjtd = *mj / *mjd;
    *mftd = *mf / *mfd;
    *mjtc = *mj / *mjc;
    *mftc = *mf / *mfc;
}

void ganancia(float *gj, float *gf, float *gjt, float *gft, float *gjd, float *gfd, float *gjc, float *gfc, float *gjtt, float *gftt, float *gjtd, float *gftd, float *gjtc, float *gftc)
{
    //Variables
    *gj = 30;
    *gf = 60;
    *gjt = 50;
    *gft = 80;
    *gjd = 1;
    *gfd = 1;
    *gjc = 0.3;
    *gfc = 0.5;
    //Calculos
    *gjtt = *gj * 200 + *gjt * 100 - *gjd * 10;
    *gftt = *gf * 100 + *gft * 200 - *gfd * 10;
    *gjtd = *gj * 200;
    *gftd = *gf * 100;
    *gjtc = *gjt * 100;
    *gftc = *gft * 200;
}

void resultado(float tjtt, float tftt, float mjtt, float mftt, float gjtt, float gftt)
{
    cout << "Tiempo total de produccion: " << tjtt + tftt << " horas" << endl;
    cout << "Materia prima necesaria: " << mjtt + mftt << " kg de hilo" << endl;
    cout << "Ganancias esperadas: " << gjtt + gftt << " soles" << endl;
}


/*
Bloque que explica el funcionamiento del programa.


El programa calcula el tiempo, materia prima y ganancias de una empresa que produce dos tipos de productos,
los cuales son:
    -Jersey
    -Falda

El programa calcula el tiempo total de produccion, materia prima necesaria y ganancias esperadas de cada producto
y de la empresa en general.

El programa utiliza punteros para calcular los datos de cada producto y de la empresa en general.


Cada variable representa un dato de cada producto, por ejemplo:
    -tj: tiempo de produccion de un jersey
    -tf: tiempo de produccion de una falda
    -tjt: tiempo de produccion de un jersey en la maquina de tejer
    -tft: tiempo de produccion de una falda en la maquina de tejer
    -tjd: tiempo de produccion de un jersey en la maquina de coser
    -tfd: tiempo de produccion de una falda en la maquina de coser
    -tjc: tiempo de produccion de un jersey en la maquina de cortar
    -tfc: tiempo de produccion de una falda en la maquina de cortar
    
Funciones
    La funcion resultado() muestra los datos calculados por las funciones tiempo(), materia() y ganancia().
    La funcion tiempo() calcula el tiempo total de produccion de cada producto y de la empresa en general.
    La funcion ganancia() calcula las ganancias esperadas de cada producto y de la empresa en general.

*/