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

    bool bandera=true; bool bandera1=true; bool bandera2=true; bool bandera3=true;
    int maynvA=0; int maynvF=0; int maynvE=0; int maynvT=0; int cnmay500=0; int cnmen500=0; int cnig500=0;
	int mennvA=0; int mennvF=0; int mennvT=0; int mennvE=0;
    float totalA=0; float sumaA=0; float totalT=0; float sumaT=0; float totalF=0; float sumaF=0;float totalE=0; float sumaE=0;
    double prom= sumaA/totalA; double prom1= sumaE/totalE; double prom2=sumaF/totalF; double prom3=sumaT/totalT;
    string mennomA; string maynomA; string mennomF; string maynomF; string mennomE; string maynomE; string mennomT; string maynomT;

	dat = fopen ("PokemonGo.dat", "rb");
	fread(&reg,sizeof(reg),1,dat);

	while(!feof(dat)){























