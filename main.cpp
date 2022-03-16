#include <iostream>
#include <stdlib.h>
#include "funciones.h"
#include "test.h"

using namespace std;

int main()
{
    bool corte=0;
    int nro_ejercicio;
    char cad[50];
    while (corte==0)
    {
        system("cls");
        menu();
        cout<<"seleccione una funcion"<<endl;
        cin>>nro_ejercicio;
        system("cls");
        switch(nro_ejercicio)
        {
        case 1:
            teststrLen();
            break;
        case 2:
            teststrCpy();
            break;
        case 3:
            teststrCat();
            break;
        case 4:
            teststrCmp();
            break;
        case 5:
            teststrFind();
            break;
        case 6:
            teststrCnt();
            break;
        case 7:
            teststrInv();
            break;
        case 8:
            teststrRep();
            break;
        case 9:
            teststrTruc();
            break;
        case 10:
            teststrRep();
            break;
        case 11:
            teststrUpp();
            break;
        case 12:
            teststrLow();
            break;
        default:
            corte=1;
            break;
        }
    }
}
