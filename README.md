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

void MayorF(int nivel,int & maynvF,char nombre [],string & maynomF){
  if(nivel>=maynvF){
    maynvF=nivel;
    maynomF=nombre;
  }

};
void MenorF(int nivel,int & mennvF,char nombre[],string & mennomF,bool & bandera1){
 if (bandera1 || nivel <= mennvF){
 	mennvF = nivel;
 	mennomF = nombre;
 	bandera1= false;
 }
};
void MayorE(int nivel,int & maynvE,char nombre [],string & maynomE){
  if(nivel>=maynvE){
    maynvE=nivel;
    maynomE=nombre;
  }
};
void MenorE(int nivel,int & mennvE,char nombre[],string & mennomE,bool & bandera2){
 if (bandera2||nivel <= mennvE){
 	mennvE = nivel;
 	mennomE = nombre;
 	bandera2=false;
 }
 }

int main() {
	int cant;
Pokemon reg;
	FILE* dat = fopen("PokemonGo.dat","wb+");
	printf("                             **********Creando el archivo**********\n\n");

cout<<"      -###########----########----###---####----#########----###-----###----########----###----- ##-------- "<<endl;
cout<<"     --###-----###----##----##----###--###------###----------##-#---#-##----##----##----##-#---- ##------"<<endl;
cout<<"    ---###-----###----##----##----###-###-------###----------##--#-#--##----##----##----##--#--- ##-----"<<endl;
cout<<"   ----###########----##----##----#####---------#########----##---#---##----##----##----##---#-- ##----"<<endl;
cout<<"  -----###------------##----##----###-###-------###----------##-------##----##----##----##----#- ##---"<<endl;
cout<<" ------###------------##----##----###--###------###----------##-------##----##----##----##------###--"<<endl;
cout<<"-------###------------########----###   ####----#########----##-------##----########----##------ ##-"<<endl;
cout<<""<<endl;
cout<<"                                         ###########      ########  ##                               "<<endl;
cout<<"                                         ###              ##    ##  ##                               "<<endl;
cout<<"                                         ###              ##    ##  ##                               "<<endl;
cout<<"                                         ###   #####      ##    ##  ##                               "<<endl;
cout<<"                                         ###   #####      ##    ##  ##                               "<<endl;
cout<<"                                         ###      ##      ##    ##                                   "<<endl;
cout<<"                                         ###########      ########  ##                               "<<endl;




	system("pause");
	system("cls");
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

    bool bandera=true; bool bandera1=true; bool bandera2=true; bool bandera3=true;
    int maynvA=0; int maynvF=0; int maynvE=0; int maynvT=0; int cnmay500=0; int cnmen500=0; int cnig500=0;
    int mennvA=0; int mennvF=0; int mennvT=0; int mennvE=0;
    float totalA=0; float sumaA=0; float totalT=0; float sumaT=0; float totalF=0; float sumaF=0;float totalE=0; float sumaE=0;
    double prom= sumaA/totalA; double prom1= sumaE/totalE; double prom2=sumaF/totalF; double prom3=sumaT/totalT;
    string mennomA; string maynomA; string mennomF; string maynomF; string mennomE; string maynomE; string mennomT; string maynomT;

	dat = fopen ("PokemonGo.dat", "rb");
	fread(&reg,sizeof(reg),1,dat);

	while(!feof(dat)){


 switch(reg.tipo){


	   case('a'):

       	    totalA ++;
			sumaA += reg.nivel;
            MayorA (reg.nivel,maynvA,reg.nombre,maynomA);
			MenorA (reg.nivel,mennvA,reg.nombre, mennomA,bandera3);
			break;

       case('f'):

            totalF ++;
			sumaF = sumaF + reg.nivel;
            MenorF(reg.nivel,mennvF,reg.nombre, mennomF,bandera1);
            MayorF(reg.nivel,maynvF,reg.nombre,maynomF);
            break;

       case('t'):

            totalT ++;
			sumaT = sumaT + reg.nivel;
		    MenorT(reg.nivel,mennvT,reg.nombre, mennomT,bandera);
            MayorT(reg.nivel,maynvT,reg.nombre,maynomT);
			break;

        case('e'):

			totalE ++;
			sumaE = sumaE + reg.nivel;
			MenorE(reg.nivel,mennvE,reg.nombre, mennomE,bandera2);
            MayorE(reg.nivel,maynvE,reg.nombre,maynomE);
	        break;
   };

    cnivel (reg.nivel, cnmay500,cnmen500, cnig500 );
    fread(&reg,sizeof(reg),1,dat);

};
getch();
fclose (dat);

    if(sumaA!=0){
     //sumaA=1;
     prom= sumaA/totalA;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
        cout <<"\nEl total de pokemon tipo agua es: " <<totalA<< "\nEl promedio es: " <<prom<<endl;
    cout<<"El pokemon tipo agua mas fuerte es: "<<maynomA<< "\nNivel: " << maynvA << endl;
    cout<<"El pokemon tipo agua mas debil es: "<<mennomA<< "\nNivel: "<< mennvA<< endl;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;

 }
 else{
    sumaA=1;
     prom= totalA/sumaA;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
     cout <<"\nEl total de pokemon tipo agua es: " <<totalA<< "\nEl promedio es: " <<prom<<endl;
    cout<<"El pokemon tipo agua mas fuerte es: "<<maynomA<< "\nNivel: " << maynvA << endl;
    cout<<"El pokemon tipo agua mas debil es: "<<mennomA<< "\nNivel: "<< mennvA<< endl;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
 }
 if(sumaF!=0){
            //sumaF=1;
            prom2= sumaF/totalF;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
            cout <<"\nEl total de pokemon tipo fuego es: " <<totalF<< "\nEl promedio es: " <<prom2<<endl;
    cout<<"El pokemon tipo fuego mas fuerte es: "<<maynomF<< "\nNivel: " << maynvF << endl;
    cout<<"El pokemon tipo fuego mas debil es: "<<mennomF<< "\nnivel: "<< mennvF<< endl;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
     }
     else{
            sumaF=1;
            prom2= totalF/sumaF;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
      cout <<"\nEl total de pokemon tipo fuego es: " <<totalF<< "\nEl promedio es: " <<prom2<<endl;
    cout<<"El pokemon tipo fuego mas fuerte es: "<<maynomF<< "\nNivel: " << maynvF << endl;
    cout<<"El pokemon tipo fuego mas debil es: "<<mennomF<< "\nnivel: "<< mennvF<< endl;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;

     }
      if(sumaT!=0){
        //sumaA=1;
     prom3= sumaT/totalT;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
      cout <<"\nEl total de pokemon tipo tierra es: " <<totalT<< "\nEl promedio es: " <<prom3<<endl;
    cout<<"El pokemon tipo tierra mas fuerte es: "<<maynomT<< "\nNivel: " << maynvT << endl;
    cout<<"El pokemon tipo tierra mas debil es: "<<mennomT<< "\nNivel: "<< mennvT<< endl;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    }
    else{
            sumaT=1;
     prom3= totalT/sumaT;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    cout <<"\nEl total de pokemon tipo tierra es: " <<totalT<< "\nEl promedio es: " <<prom3<<endl;
    cout<<"El pokemon tipo tierra mas fuerte es: "<<maynomT<< "\nNivel: " << maynvT << endl;
    cout<<"El pokemon tipo tierra mas debil es: "<<mennomT<< "\nNivel: "<< mennvT<< endl;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;

    }

      if(sumaE!=0){
        //sumaE=1;
        prom1= sumaE/totalE;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
        cout <<"\nEl total de pokemon tipo electrico es: " <<totalE<< "\nEl promedio es: " <<prom1 <<endl;
    cout<<"El pokemon tipo electrico mas fuerte es: "<<maynomE<< "\nNivel: " << maynvE << endl;
    cout<<"el pokemon tipo electrico mas debil es: "<<mennomE<< "\nNivel: "<< mennvE<< endl;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
     }
     else{
            sumaE=1;
        prom1= totalE/sumaE;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
      cout <<"\nEl total de pokemon tipo electrico es: " <<totalE<< "\nEl promedio es: " <<prom1 <<endl;
    cout<<"El pokemon tipo electrico mas fuerte es: "<<maynomE<< "\nNivel: " << maynvE << endl;
    cout<<"el pokemon tipo electrico mas debil es: "<<mennomE<< "\nNivel: "<< mennvE<< endl;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;

     }
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\nPokemones con un nivel mayor a 500: "<<cnmay500<<endl;
    cout<<"Pokemones con un nivel menor a 500: "<<cnmen500<<endl;
    cout<<"Pokemones con un nivel igual a 500: "<<cnig500<<endl;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;

return 0;
};




















