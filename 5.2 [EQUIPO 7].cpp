#include<iostream>
using namespace std;

int main(){
short int i, j, n;
cout<<"Introduzca el numero de elementos del arreglo: ";
cin>>n;

float arreglo [n];
float aux;

//LLenado del vector
cout<<"Introduzca los valores del arreglo: "<<endl;
for (i=0;i<n;i++  ){
	cout<<"Dato ["<<i+1<<"]:";
	cin>>arreglo [i];
}
//Metodo del la burbuja
for (j=0;j<n-1;j++)
for (i=0; i<n-1; i++)
	if (arreglo[i]>arreglo[i+1]){ 
		aux=arreglo[i];
		arreglo[i]=arreglo[i+1];
		arreglo[i+1]=aux;
	
	
	cout<<"Los datos ordenados son: "<<endl;
	for (i=0;i<n;i++)
	cout<<arreglo[i]<<endl;	
	system("pause");
	//Aca ya despues de las comparaciones nos dara el resultado
}
//system("pause");
return 0;
}
