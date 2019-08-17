#include <iostream>
#include<conio.h>
#include<string.h>
#include <stdlib.h>

using namespace std;
void cnivel(int nivel,int & cnmay500,int & cnmen500,int & cnig500 ){
 if(nivel>500){
    cnmay500++;
 }
 else{
    if(nivel<500){
        cnmen500++;
    }
    else{
        cnig500++;
    }
 }

}
void mayor(int nivel,int & maynv,string nombre,string & maynom){
  if(nivel>=maynv){
    maynv=nivel;
    maynom=nombre;
  }

}
void menor(int nivel,int & mennv,string nombre,string & mennom){  // arreglar el menor
  if(nivel<=mennv){
    mennv=nivel;
    mennom=nombre;
  }
}
int main(){
    char nombre[10];
    int cant;
    cout<<"cuantos pokemones va a ingresar"<<endl;
    cin>>cant;
    for (int i=0; i<cant; i++){
    cout<<"ingrese el nombre"<<endl;
    cin>>nombre;
    if(strlen(nombre)<=10){
        cout<<"su nombre es: "<<nombre<<endl;
    }
    else{
       cout<<"nombre incorrecto"<<endl;
    }
    }











return 0;
}


