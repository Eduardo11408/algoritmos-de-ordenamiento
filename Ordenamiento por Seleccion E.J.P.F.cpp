//Algoritmo que ordena de manera ascendente y descendente el siguiente arreglo usando seleccion.

//EDUARDO JESUS PEREZ FLORES

#include<iostream>
using namespace std;

int main(){
	int numeros[] = {3,4,5,2,1,6,8,10,7,9};			//Arreglo desordenado.
	int i,k,aux,min;							//iteradores , auxiliar y una variable para almacenar el numero minimo.
	
///////////////////Algoritmo del Ordenamiento por Selección///////////////////////////////////
	
	for(i=0;i<10;i++){			//Bucle que recorrera todo el arreglo desde que i sea gial a 0 hasta que i sea menor a 10.
		min = i;				//Encontar el numero minimo
		for(k=i+1;k<10;k++){	//Recorremos el arreglo mas afondo con otro bucle (1+ porque suponemos que la primera posicion es el menor "3" entonces que recorra al siguiente numero "4".
			if(numeros[k] < numeros[min]){	//condicional que verifica cual es el menor numero del arreglo.
				min = k;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
//////////////Imprimir en pantalla los numeros de forma ascendente y descendente/////////////////////	
	cout<<"Orden Ascendente: ";
	for(i=0;i<10;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(i=9;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	
	return 0;
}
