// Algoritmo que ordena de manera ascendente y descendente el siguiente arreglo usando inserccion.

// EDUARDO JESUS PERREZ FLORES

#include<iostream>
using namespace std;

int main(){
	int numeros[] = {4,8,10,2,7,9,3,6,5,1}; 	//Areglo de numeros desordenados
	int i,pos,aux; 				//Variables (iterador,variable donde almaceno la posicion y variable auxiliar)
	
	
	/////////////Algoritmo del ordenamiento por insercion////////////////////
	
	for(i=0;i<10;i++){    			//Bucle que va a recorrer el arreglo.
		pos = i; 					//pos va aser igual a las posiciones que tendra el arreglo.
		aux = numeros[i];			//En que numero vamos del arreglo
		
		while((pos>0) && (numeros[pos-1] > aux)){	//Bucle en en que comparamos siempre y cuando posicion sea mayor a 0 y numero a su izquierda es mayor al numero actual entonces hay un cambio.
			numeros[pos] = numeros[pos-1];		//intercambio de dichos numeros.
			pos--;							
		}
		numeros[pos] = aux;		//Para que se actualice en cada iteracion del bucle en que numero vamos.
	}

	
	///////////////Imprimir los numeros de forma ascendente y descendente///////////////
	
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
