#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <stdlib.h>
using namespace std;

void teststrLen(){
    cin.ignore();
    char cad [50];
    cout<<"ingrese el texto que quiere saber la longitud"<<endl;
    cin.getline(cad,50);
    cout<<"La longitud es: "<<strLen(cad)<<endl;
    cin.ignore();
}
void teststrCpy(){
    cin.ignore();
    char cad_fuente [50],cad_destino [50]="allboy";
    cout<<"ingrese el texto fuente"<<endl;
    cin.getline(cad_fuente,50);
    strCpy(cad_fuente,cad_destino);
    cout<<cad_destino<<endl;
    cin.ignore();


}
void teststrCat(){
     cin.ignore();
    char cad_1 [50],cad_2 [50];
    cout<<"ingrese las dos cadenas que desea concatenar"<<endl;
    cout<<"cadena 1: "<<endl;
    cin.getline(cad_1,50);
    cout<<"cadena 2: "<<endl;
    cin.getline(cad_2,50);
    strCat(cad_1,cad_2);
    cin.ignore();


}
void teststrCmp(){
     cin.ignore();
    char cad_1 [50],cad_2 [50];
    cout<<"ingrese las dos cadenas que desea comparar"<<endl;
    cout<<"cadena 1: "<<endl;
    cin.getline(cad_1,50);
    cout<<"cadena 2: "<<endl;
    cin.getline(cad_2,50);
    if (strCmp(cad_1,cad_2)==0){
        cout<<"No son iguales"<<endl;
    }
    else{
        cout<<"Son iguales!!"<<endl;
    }
    cin.ignore();

}
void teststrFind(){
     cin.ignore();
    char cad_1 [50],buscado;
    cout<<"ingrese la cadena donde desea buscar el caracter"<<endl;
    cout<<"cadena 1: "<<endl;
    cin.getline(cad_1,50);
    cout<<"ingrese el caracter que desea buscar"<<endl;
    cout<<"caracter: ";
    cin>>buscado;
    cout<<"la primera posicion en la que se encuentra el caracter "<<buscado<<" es " <<strFind(buscado,cad_1);
    cin.ignore(2);

}
void teststrCnt(){
     cin.ignore();
    char cad_1 [50],buscado;
    cout<<"ingrese la cadena donde desea buscar el caracter"<<endl;
    cout<<"cadena 1: "<<endl;
    cin.getline(cad_1,50);
    cout<<"ingrese el caracter que desea buscar"<<endl;
    cout<<"caracter: ";
    cin>>buscado;
    cout<<"La cantidad de veces que aparece el caracter '"<<buscado<<"'  es " <<strCnt(buscado,cad_1);
    cin.ignore(2);

}
void teststrInv(){
    cin.ignore();
    char cad [50];
    cout<<"ingrese el texto que desea invertir "<<endl;
    cin.getline(cad,50);
    cout<<"El texto invertido seria "<<endl;
    char cadena_final[strLen(cad)];
    strInv(cad,cadena_final);
    cout<<cadena_final;
    cin.ignore();

}
void teststrRep(){
    cin.ignore();
    char inicial,reemplazo;
    char cad [50];
    cout<<"ingrese el texto en el cual desea reemplazar caracteres:  "<<endl;
    cin.getline(cad,50);
    cout<<"ingrese el caracter que desea reemplazar"<<endl;
    cout<<"caracter: ";
    cin>>inicial;
    cout<<"ingrese el caracter de reemplazo"<<endl;
    cout<<"caracter: ";
    cin>>reemplazo;
    cin.ignore();
    strRep(cad,inicial,reemplazo);
    cout<<cad<<endl;
    cin.ignore();

}
void teststrTruc(){

cin.ignore();
    int pos;
    char cad [50];
    cout<<"ingrese el texto que desea truncar:  "<<endl;
    cin.getline(cad,50);
    cout<<"ingrese la posicion donde desea truncarlo :"<<endl;
    cout<<"posicion: ";
    cin>>pos;
    cin.ignore();
    strTruc(cad,pos);
    cout<<"el texto final seria: "<<endl<<cad<<endl;
    cin.ignore();


}
void teststrUpp(){
    cin.ignore();
    char cad [50];
    cout<<"ingrese el texto que desea pasar de minuscular a mayusculas:  "<<endl;
    cin.getline(cad,50);
    strUpp(cad);
    cout<<"el texto final seria: "<<endl<<cad<<endl;
    cin.ignore();

}
void teststrLow(){
    cin.ignore();
    char cad [50];
    cout<<"ingrese el texto que desea pasar de mayusculas a minusculas:  "<<endl;
    cin.getline(cad,50);
    strLow(cad);
    cout<<"el texto final seria: "<<endl<<cad<<endl;
    cin.ignore();

}


#endif // TEST_H_INCLUDED
