#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;


bool buscarNumeros(string cadena){

    bool bandera = true;

    for(int i=0; i<cadena.length() ; i++){
        if(isdigit(cadena[i])==0){
            i = cadena.length();
            bandera = false;
        }
    }

    return bandera;
}

bool cadenaAlfabetica(string cadena){

    bool bandera = true;

    for(int i=0; i<cadena.length() ; i++){
        if(isdigit(cadena[i])==1){
            i = cadena.length();
            bandera = false;
        }
    }

    return bandera;
}


int transaformarCadenaANumero(string cadena){
    return stoi(cadena);
}

void contarCaracteresAlbeticosYNumericos(string cadena){
    int carateresAlfabeticos = 0, caracteresNumericos = 0;
    for(int i=0; i<cadena.length();i++){
        if(isdigit(cadena[i])==1){
            caracteresNumericos++;
        }
        else if (isdigit(cadena[i])==0 && cadena[i]!=' '){
            carateresAlfabeticos++;
        }
    }

    cout<<"Numero de caracteres alfabeticos: "<<carateresAlfabeticos<<"\n";
    cout<<"Numero de caracteres numericos: "<<caracteresNumericos<<"\n";

}

string convertirMayusculas(string cadena) {
	
    
    cadena[0] = toupper(cadena[0]);
    for (int i = 0; i < cadena.length(); i++) {
        if(cadena[i] == ' ')
		    cadena[i+1] = toupper(cadena[i+1]);
	}

	return cadena;
}

int main(){
    char h[10], g[10], j[10];
    string cadena;

    cout<<"INTRODUZCA UNA CADENA: \n";
    getline(cin, cadena);
    cin.sync();

    if(buscarNumeros(cadena)==true){
        cout<<"\nCADENA NUMERICA\n";
        cout<<"Transformacion de cadena a dato numerico: "<<transaformarCadenaANumero(cadena)<<"\n";
    }
    else{
        if(cadenaAlfabetica(cadena)==true){
            cout<<"\nCADENA ALFABETICA\n";
            cout<<"Cadena modificada -> Cambiar para que cada palabra empiece en mayuscula";
            cout<<"\nCadena ingresada: "<<cadena;
            cout<<"\nCadena modificada: "<<convertirMayusculas(cadena);


        }
        else{
            cout<<"\nCADENA ALFABETICA\n";
            contarCaracteresAlbeticosYNumericos(cadena);
        }
        
    }

    return 0;

}




