#include <iostream>
#include <stdio.h>
#include <string.h>
#include<conio.h>
#include<string>
#include <stdlib.h>
using namespace std;

struct Pokemon {

	char tipo;
	int nivel;
	char nombre [10];

};
void cnivel(int nivel,int & cnmay500,int & cnmen500,int & cnig500 ) {
 if(nivel>500){
    cnmay500++;
 }
    else if(nivel<500){
        cnmen500++;
    }
    else{
        cnig500++;
    }
 };

void MayorA(int nivel,int & maynvA,char nombre [],string & maynomA){
  if(nivel>=maynvA){
    maynvA=nivel;
    maynomA=nombre;
  }

};
void MenorA(int nivel, int & mennvA,char nombre[],string & mennomA,bool & bandera3){
if(bandera3|| nivel <= mennvA){
 	mennvA = nivel;
 	mennomA = nombre;
 	bandera3= false;
 }

}

void MayorT(int nivel,int & maynvT,char nombre [],string & maynomT){
  if(nivel>=maynvT){
    maynvT=nivel;
    maynomT=nombre;
  }

};
void MenorT(int nivel,int & mennvT, char nombre[],string & mennomT,bool &bandera){  
  if (bandera|| nivel <= mennvT){
 	mennvT = nivel;
 	mennomT = nombre;
 	bandera=false;
 }
};
