// fecha.cpp - Definici�n de los m�todos de la clase CFecha
#include <iostream>
#include "fecha.h"

using namespace std;

bool CFecha::anyoBisiesto(int aaaa)
{
    return ((aaaa % 4 == 0) && (aaaa % 100 != 0) || (aaaa % 400 == 0));
}
bool CFecha::asignarFecha(int dd, int mm, int aaaa)
{
    if (!fechaValida(dd, mm, anyo))
    {
        cout << "Fecha incorrecta. Se asigna 01/01/2001.\n";
        dia = 1; mes = 1; anyo = 2001;
        return false;
    }
    dia = dd; mes = mm;
    return true;
}

void CFecha::obtenerFecha(int& dd, int& mm, int& aaaa)
{
    dd = dia; mm = mes; aaaa = anyo;
}

bool CFecha::fechaValida(int dd, int mm, int aaaa)
{
    bool diaCorrecto, mesCorrecto, anyoCorrecto;
    anyoCorrecto = (aaaa >= 1582); // �a�o correcto?
    mesCorrecto = (mm >= 1) && (mm <= 12); // �mes correcto?
    switch (mm)
    // �d�a correcto?
    {
    case 2:
        if (anyoBisiesto(aaaa))
            diaCorrecto = (dd >= 1 && dd <= 29);
        else
            diaCorrecto = (dd >= 1 && dd <= 28);
        break;
    case 4: case 6: case 9: case 11:
            diaCorrecto = (dd >= 1 && dd <= 30);
        break;
        default:
        diaCorrecto = (dd >= 1 && dd <= 31);
    }
    return diaCorrecto && mesCorrecto && anyoCorrecto;
}





/*bool CFecha::asignarFecha()
{
    // Por omisi�n, asignar la fecha actual.
    struct tm* fh;
    time_t segundos;
    time(&segundos);
    fh = localtime(&segundos);
    dia = fh->tm_mday; // d�a de 1 a 31
    mes = fh->tm_mon + 1; // tm_mon: mes de 0 a 11; enero = 0
    anyo = fh->tm_year + 1900; // tm_year: a�o - 1900
    return true;
}
bool CFecha::asignarFecha(int dd)
{
    asignarFecha();
    if (!fechaValida(dd, mes, anyo))
    {
        cout << "Fecha incorrecta. Se asigna 01/01/2001.\n";
        dia = 1; mes = 1; anyo = 2001;
        return false;
    }
    dia = dd;
    return true;
}
bool CFecha::asignarFecha(int dd, int mm)
{
    asignarFecha();
    if (!fechaValida(dd, mm, anyo))
    {
        cout << "Fecha incorrecta. Se asigna 01/01/2001.\n";
        dia = 1; mes = 1; anyo = 2001;
        return false;
    }
    dia = dd; mes = mm;
    return true;
}
bool CFecha::asignarFecha(int dd, int mm, int aaaa)
{
    if (!fechaValida(dd, mm, aaaa))
    {
        cout << "Fecha incorrecta. Se asigna 01/01/2001.\n";
        dia = 1; mes = 1; anyo = 2001;
        return false;
    }
    dia = dd; mes = mm; anyo = aaaa;
    return true;
}*/

