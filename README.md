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

 struct Pokemon {
	
	char tipo;
	int nivel;
	char nombre [10];
	
}; 
int main() {
	int cant;


Pokemon reg;
	FILE* dat = fopen("PokemonGo.dat","wb+");
	printf("**********Creando el archivo**********\n");
	cout << "\nIngrese cantidad de pokemones a registrar:\n" << endl;
	cin >> cant;
	
	for(int i=1;i<=cant;i++){
		
		cout << "\nIngrese nombre del Pokemon:\n" << endl;
		cin>>reg.nombre;
		
		while (strlen (reg.nombre) > 10) {
				cout << "\nNombre incorrecto. Ingrese nuevamente:\n" <<endl;
				cin>>reg.nombre;	
		}
		cout << "\nIngrese tipo de Pokemon: \n Si es de agua ingrese: a \n Si es de fuego ingrese: f \n Si es de Tierra ingrese: t \n Si es electrico ingrese: e \n" << endl;
		cin >> reg.tipo;
		
		while ( (reg.tipo)!= 'a'&& (reg.tipo)!='e'&&(reg.tipo)!='f'&& (reg.tipo)!='t')
		{
			cout << "\nIngrese correctamente el tipo de pokemon:\n"<<endl;
			cin>>reg.tipo;
		}
		
		cout << "\nIngrese nivel del Pokemon:\n" << endl;
		cin >> reg.nivel;
			while (reg.nivel > 1000 or reg.nivel <=0) {
				cout << "\nNivel incorrecto.Ingrese nuevamente:\n" <<endl;
				cin>>reg.nivel;	
		}		
		fwrite(&reg,sizeof(reg),1,dat);

}
fclose (dat);
