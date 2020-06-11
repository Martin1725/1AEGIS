#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

class Cliente:public Persona{
protected:
    int idCliente;
    int TipodePago;
    int PrefFactura;
    float deuda;

public:
    //metodos;
     void cargar();
     void mostrar():
};

#endif // CLIENTE_H_INCLUDED
