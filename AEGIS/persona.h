#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class Persona{
protected:
    char nombre[20];
    char apellido[20];
    int dia, mes , anio;
    char documento[10];
    char mail[50];
    bool Estado;
public:
            void Cargar();
            void Mostrar();
            const char * getNdoc(){return ndoc;}
            const char * getNombre(){return nombre;}
            const char * getApellido(){return apellido;}
            int getDia(){return dia;}
            int getMes(){return mes;}
            int getAnio(){return anio;}
            const char *getDomicilio(){return domicilio;}
            const char * getTelefono(){return telefono;}
            const char *getEmail(){return email;}
            void setNdoc(char *n){strcpy(ndoc,n);}
            void setNombre(char *n){strcpy(nombre,n);}
            void setApellido(char *a){strcpy(apellido,a);}
            void setDia(int d){dia=d;}
            void setMes(int m){mes=m;}
            void setAnio(int a){anio=a;}
            void setDomicilio(cahr * d){strcpy(domicilio,d);}
            void setTelefono(char *tel){strcpy(telefono,tel);}
            void setEmail(char *e){strcpy(email,e);}
            void setEstado(bool nuevoestado ){estado=nuevoestado};}

};




#endif // PERSONA_H_INCLUDED
