// Fig. 6.19: fig06_19.cpp
// Comparaci�n entre paso por valor y paso por referencia mediante referencias.
#include <iostream>
using std::cout;
using std::endl;

int cuadradoPorValor( int ); // prototipo de funci�n (paso por valor)
void cuadradoPorReferencia( int & ); // prototipo de funci�n (paso por referencia)

int main()
{
    int x = 2; // valor para cuadrado usando cuadradoPorValor
    int z = 4; // valor para cuadrado usando cuadradoPorReferencia

    // demuestra cuadradoPorValor
    cout << "x = " << x << " antes de cuadradoPorValor\n";
    cout << "Valor devuelto por cuadradoPorValor: "
        << cuadradoPorValor( x ) << endl;
    cout << "x = " << x << " despues de cuadradoPorValor\n" << endl;

// demuestra cuadradoPorReferencia
    cout << "z = " << z << " antes de cuadradoPorReferencia" << endl;
    cuadradoPorReferencia( z );
    cout << "z = " << z << " despues de cuadradoPorReferencia" << endl;
    return 0; // indica que termin� correctamente
} // fin de main

// cuadradoPorValor multiplica el n�mero por s� mismo, almacena el
// resultado en el n�mero y devuelve el nuevo valor del n�mero
int cuadradoPorValor( int numero )
{
    return numero *= numero; // no se modific� el argumento de la funci�n que hizo la llamada
} // fin de la funci�n cuadradoPorValor

// cuadradoPorReferencia multiplica a refNumero por s� solo y almacena el resultado
// en la variable a la que refNumero hace referencia en la funci�n main
void cuadradoPorReferencia( int &refNumero )
{
    refNumero *= refNumero; // se modific� el argumento de la funci�n que hizo la llamada
} // fin de la funci�n cuadradoPorReferencia
