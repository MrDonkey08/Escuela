// fecha.h - Declaraci�n de la clase CFecha
class CFecha
{
// Atributos
private:
    int dia, mes, anyo;
    // M�todos
protected:
    bool anyoBisiesto(int aaaa);
    bool fechaValida(int dd, int mm, int aaaa);
public:
    bool asignarFecha(int dd, int mm, int aaaa);
    void obtenerFecha(int& dd, int& mm, int& aaaa);
    bool asignarFecha(); //usar para la fecha del sistema
};

//agregar asignarfecha
