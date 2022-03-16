#include <iostream>
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;
void menu(){


    cout<<"-------------MENU CADENAS-------------"<<endl;
    cout<<"1-strLen                             -"<<endl;
    cout<<"2-strCpy                             -"<<endl;
    cout<<"3-strCat                             -"<<endl;
    cout<<"4-strCmp                             -"<<endl;
    cout<<"5-strFind                            -"<<endl;
    cout<<"6-strCnt                             -"<<endl;
    cout<<"7-strInv                             -"<<endl;
    cout<<"8-strRep                             -"<<endl;
    cout<<"9-strTruc                            -"<<endl;
    cout<<"10-strSub NOT READY                  -"<<endl;
    cout<<"11-strUpp                            -"<<endl;
    cout<<"12-strLow                            -"<<endl;
    cout<<"13-strInt NOT READY                  -"<<endl;
    cout<<"14-strString I SAID IM NOT READY     -"<<endl;
    cout<<"--------------------------------------"<<endl;

}
int strLen(char*cadena){
    int cont=0;
    while (cadena[cont]!='\0')
    {
        cont++;

    }
    return cont;
}
void strCpy(char*cadena_1, char*cadena_2){
    int cont=0;
    while (cadena_1[cont]!='\0')
    {
        cadena_2[cont]=cadena_1[cont];
        cont++;
    }
}
void strCat(char*cadena_1, char*cadena_2){
    int largo_t=strLen(cadena_1)+strLen(cadena_2)+1;
    char concat[largo_t];
    strCpy(cadena_1,concat);
    int cont_concat=strLen(cadena_1),i=0;
    while (cadena_2[i]!='\0')
    {
        concat[cont_concat]=cadena_2[i];
        i++;
        cont_concat++;
    }
    cout<<concat;
}
bool strCmp(char*cadena_1, char*cadena_2){
    bool iguales=1;
    int i=0;
    while(cadena_1[i]!='\0')
    {
        if (cadena_1[i]!=cadena_2[i])
        {

            iguales=0;

        }
        i++;
    }
    return iguales;

}
int strFind(char a,char*cadena){
    int i=0,ocurrencia=-1;
    while(cadena[i]!='\0'&&ocurrencia==-1)
    {
        if (cadena[i]==a)
        {
            ocurrencia=i;

        }
        i++;

    }
    return ocurrencia;
}
int strCnt(char caracter,char*cadena){
    int i=0,contador_caracter=0;
    while(cadena[i]!='\0')
    {

        if (cadena[i]==caracter)
        {
            contador_caracter++;

        }
        i++;

    }
    return contador_caracter;
}
void strInv(char*cadena_1,char*cadena_final){

    int inicio=0,fin=strLen(cadena_1)-1;
    while (fin>=0)
    {

        cadena_final[inicio]=cadena_1[fin];
        inicio++;
        fin--;


    }
    cadena_final[inicio]='\0';

}
void strRep(char*cadena, char inicial,char reemplazo){
    int i=0;
    while (cadena[i]!='\0')
    {

        if (cadena[i]==inicial)
        {
            cadena[i]=reemplazo;
        }
        i++;
    }


}
void strTruc(char*cadena,int truncar){

    int i=0;
    while (cadena[i]!='\0')
    {

        if (i==truncar)
        {
            cadena[i]='\0';
        }
        i++;
    }
}
void strUpp(char*cadena){
    int i=0;
    while (cadena[i]!='\0')
    {
        if (cadena[i]==' '){

        }else{
        cadena[i]= cadena[i]-32;
        }

        i++;
    }
}
void strLow(char*cadena){
    int i=0;
    while (cadena[i]!='\0')
    {
        if (cadena[i]==' '){

        }else{
        cadena[i]= cadena[i]+32;
        }

        i++;
    }
}

#endif // FUNCIONES_H_INCLUDED
