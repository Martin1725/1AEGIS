#ifndef SUBMENUES_H_INCLUDED
#define SUBMENUES_H_INCLUDED


void menuventas()
{

    int op;
bool salir=false;
    system("cls");

    while(!salir)
    {
        setColor(YELLOW);
        system("cls");
        cout<<"         VENTAS"          <<endl;
        cout<<"_________________________________"<<endl;
        cout<<"-1-->NUEVA VENTA               -|"<<endl;
        cout<<"-2-->                  -|"<<endl;
        cout<<"-3-->          -|"<<endl;
        cout<<"-4-->     -|"<<endl;
        cout<<"-5-->            -|"<<endl;
        cout<<"-6-->            -|"<<endl;
        cout<<"-0-->VOLVER                     -|"<<endl;
        cout<<"_________________________________|"<<endl;
        cout<<"-------Ingrese una opcion--------"<<endl;
        cin>>op;

        switch(op)
        {
        case 1:
        {

            system("cls");
            cout<<"            ~NUEVA VENTA~        "<<endl;


        }
        break;
        case 2:
        {
            system("cls");
            cout<<"               ~~                "<<endl;

        }
        break;
        case 3:
        {
            system("cls");
            cout<<"                 ~~               "<<endl;


        }
        break;
         case 4:
        {
            system("cls");
            cout<<"                 ~~               "<<endl;
        }
        break;

        case 5:
        {
            system("cls");
            cout<<"                 ~~          "<<endl;

        }
        break;
        case 6:
        {
            system("cls");
            cout<<"                  ~~               "<<endl;

        }
        break;
        case 0:
        {
                   system("cls");
                   cout<<"TOQUE ENTER PARA VOLVER AL MENU PRINCIPAL"<<endl;
             salir=true;

        }
        break;
        default:
        {
            system("cls");
            cout<<"OPCION NO VALIDA, POR FAVOR INGRESE UNA OPCION DEL MENU"<<endl;

        }
        break;

        }
        system("pause");

    }
}


#endif // SUBMENUES_H_INCLUDED
