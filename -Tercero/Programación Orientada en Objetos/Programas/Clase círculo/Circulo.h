#if !defined (_CIRCULO_H_)
#define _CIRCULO_H_

#include <iostream>

using namespace std;

// circulo.h - Declaraci�n de la clase C�rculo
//
class Circulo
{
    // miembros privados
    private:
        double x, y; // coordenadas del centro
        double radio; // radio del c�rculo
    // miembros protegidos
    protected:
    void msgEsNegativo();
    // miembros p�blicos
    public:
        Circulo(); // constructor sin par�metros
        Circulo(double cx, double cy, double r); // constructor
        double longCircunferencia();
        double areaCirculo();
        void asignarRadio(double r);

        double obtenerX();
        double obtenerY();
        double obtenerRadio();

};

#endif
