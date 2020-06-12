#include <iostream>
using namespace std;
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "rlutil.h"
using namespace rlutil;
#include "submenues.h"

int main()
{
     int op=-1;
     while(op!=0)

    {
        system("cls");
         cout<<"                     *********                         "<<endl;
        cout<<"                     * AEGIS     *                         "<<endl;
         cout<<"                     *********                         "<<endl;
        cout<<"-->Presione la tecla enter para ingresar al menu de opciones                         "<<endl;
        cin.get();
        system("cls");

        cout<<          "         MENU PRINCIPAL"          <<endl;
        cout<<          "_________________________________"<<endl;
        cout<<          "-1-->VENTAS                     -|"<<endl;
        cout<<          "-2-->ABM                        -|"<<endl;
        cout<<          "-3-->LISTADOS                   -|"<<endl;
        cout<<          "-4-->COMPRAS                    -|"<<endl;
        cout<<          "-5-->CONFIGURACION              -|"<<endl;
        cout<<          "-0-->SALIR                      -|"<<endl;
        cout<<          "_________________________________|"<<endl;
        cout<<          "-------Ingrese una opcion--------"<<endl;
        cin>>op;
        cin.ignore();
        switch(op){

    case 1:
        {
            system("cls");
            cout<<"~~~~~VENTAS~~~~~"<<endl;

            menuventas();
        }break;

    case 2:
        {
  system("cls");
            cout<<"~~~~~ABM~~~~~"<<endl;
        }break;

    case 3:
        {
  system("cls");
            cout<<"~~~~~LISTADOS~~~~~"<<endl;

        }break;

    case 4:
        {
  system("cls");
            cout<<"~~~~~COMPRAS~~~~~"<<endl;
        }break;

    case 5:
        {
  system("cls");
            cout<<"~~~~~CONFIGURACION~~~~~"<<endl;
        }break;
 case 0:
        {
  system("cls");
  cout<<"     SESION FINALIZADA"<<endl;


        }break;

 default:
    {
        system("cls");
        cout<<"OPCION NO VALIDA, POR FAVOR INGRESE UNA OPCION DEL MENU."<<endl;
    }



        }

    }

   return 0;
}

