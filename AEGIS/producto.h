#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

class Producto{
private:
    char [10] Codigoproducto;
    char [10] Codigoproveedor;
    char [30] NombreItem;
    float CostodeCompra;
    float PorcentajeRentabilidad;
    float PreciodeVenta;
    int stockmin;
    int stockactual;
    bool Estado;
public:
    //metodos;
    void cargar();
    void mostrar();
        const char * getCodigoproducto(){return Codigoproducto;}
        const char * getCodigoproveedor(){return Codigoproveedor;}
        const char * getNombreItem(){return NombreItem;}
        float getCostodeCompra(){return CostodeCompra}
        float getPorcentajeRentabilidad(){return PorcentajeRentabilidad}
        float getPrecioVenta(){return PreciodeVenta}
        int getstockmin(){return stockmin}
        int getstockactual(){return stockactual}
        void setCodigoproducto(char *cod){strcpy(Codigoproducto,cod);}
        void setCodigoproveedor(char *cpro){strcpy(CodigoProveedor,cpro);}
        void setNombreItem(char *item){strcpy(NombreItem,item);}
        void setCostoCompra(float costo){CostodeCompra=costo;}
        void setPorcentajeRentabilidad(float porcetaje){PorcentajeRentabilidad=porcentaje;}
        void setPrecioVenta(float venta){PreciodeVenta=venta;}
        void setstockmin(int stockm){stockmin=stockm;}
        void setstockactual(int stocka){stockactual=stocka;}

};



#endif // PRODUCTO_H_INCLUDED
