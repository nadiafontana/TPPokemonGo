
#include <iostream>
#include<conio.h>
#include<string>
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
    string nombre;
    char x;
    string mennom;
    string maynom;
    int cant;
    int mennv=0;
    int maynv=0;
    int nivel;
    int cnmay500=0;
    int cnmen500=0;
    int cnig500=0;

    cout<<"ingrese cantidad de pokemones a comparar"<<endl;
    cin>>cant;

    for(int i=0;i<cant;i++){
    cout<<"ingrese nombre del pokemon"<<endl;
    cin>>nombre;
    cout<<"ingrese el nivel del pokemon"<<endl;
    cin>>nivel;
    if(nivel<=1000){

   cout<<"ingrese tipo de pokemon\nT para tierra\nE para electrico\nA para agua\nF para fuego"<<endl;
   cin>>x;
   switch(x){
       case('a'):
       cout<<"agua"<<endl;
    menor(nivel,mennv,nombre, mennom);
    mayor(nivel,maynv,nombre,maynom);
    cnivel(nivel,cnmay500,cnmen500,cnig500 );
       break;
       case('e'):
       cout<<"electrico"<<endl;
    menor(nivel,mennv,nombre, mennom);
    mayor(nivel,maynv,nombre,maynom);
    cnivel(nivel,cnmay500,cnmen500,cnig500 );
       break;
       case('f'):
       cout<<"fuego"<<endl;
    menor(nivel,mennv,nombre, mennom);
    mayor(nivel,maynv,nombre,maynom);
    cnivel(nivel,cnmay500,cnmen500,cnig500 );
       break;
       case('t'):
       cout<<"tierra"<<endl;
    menor(nivel,mennv,nombre, mennom);
    mayor(nivel,maynv,nombre,maynom);
    cnivel(nivel,cnmay500,cnmen500,cnig500 );
       break;
       default:
       cout<<"codigo incorrecto"<<endl;
   }

    }
    else{
        cout<<"nivel equivocado"<<endl;
    }
    }
    cout<<"el mayor nivel es: "<< maynv<<endl;
    cout<<"el pokemon mas fuerte es: "<<maynom<<endl;
    cout<<"el menor nivel es: "<<mennv<<endl;
    cout<<"el pokemon mas debil es: "<<mennom<<endl;
    cout<<"pokemones con un nivel mayor a 500: "<<cnmay500<<endl;
    cout<<"pokemones con un nivel menor a 500: "<<cnmen500<<endl;
    cout<<"pokemones con un nivel igual a 500: "<<cnig500<<endl;



getch();

return 0;
}
