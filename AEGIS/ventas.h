#ifndef VENTAS_H_INCLUDED
#define VENTAS_H_INCLUDED


class Venta
{
private:
      int numeroventa;
      Fecha fechaVenta;
      int TipoPago;
      int TipoFactura;
      Producto item;
      int legajoVendedor;
      int idCliente;
      char[10] CodigoProducto;
      int cant;
      int TipodeEntrega;
      int PorcentajeDesc;
      float ImporteTotal;
      float ImporteUnidad;
public:
    //metodos;
     void cargar();
     void mostrar():

};



#endif // VENTAS_H_INCLUDED
