#include <iostream>
#include <stdio.h>
#include <string.h>
#include<conio.h>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

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

void MayorT(int nivel,int & maynvT,char nombre [],string & maynomT){
  if(nivel>=maynvT){
    maynvT=nivel;
    maynomT=nombre;
  } 

};
void MayorF(int nivel,int & maynvF,char nombre [],string & maynomF){
  if(nivel>=maynvF){
    maynvF=nivel;
    maynomF=nombre;
  }

};
void MayorE(int nivel,int & maynvE,char nombre [],string & maynomE){
  if(nivel>=maynvE){
    maynvE=nivel;
    maynomE=nombre;
  }
};

void MenorA(int nivel, int & mennvA,char nombre[],string & mennomA){  
if (nivel <= mennvA){
 	mennvA = nivel;
 	mennomA = nombre;
 }
};

void MenorT(int nivel,int & mennvT, char nombre[],string & mennomT){
  if (nivel <= mennvT){
 	mennvT = nivel;
 	mennomT = nombre;
 }
};


void MenorF(int nivel,int & mennvF,char nombre[],string & mennomF){ 
 if (nivel <= mennvF){
 	mennvF = nivel;
 	mennomF = nombre;
 }
};

void MenorE(int nivel,int & mennvE,char nombre[],string & mennomE){  
 if (nivel <= mennvE){
 	mennvE = nivel;
 	mennomE = nombre;
 }
 }
