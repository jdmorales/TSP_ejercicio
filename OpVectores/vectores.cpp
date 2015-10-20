#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <unistd.h>
#include<math.h>

using namespace std;
//Std::cin;
int main()
{
	int vector_a[20], vector_b[20], vector_suma[20], vector_resta[20], vector_punto[20], vector_escalar_a[20], vector_escalar_b[20];
	int opcion, i, n, e;

	cout<<"Numero de elementos para los dos vectores"<<endl;
	cin>>n;

	//cout<<"Por favor digite los tres escalares: "<<endl;
	//cin>>e;

	cout<<"Digite los numeros que contendra el vector A: "<<endl;
		for(i=0; i<n; i++)
		{
			cout<<"Vector A: "<<endl;
			cin>> vector_a[i];
		}

	cout<<"Digite los numeros que contendra el vector B: "<<endl;
		for(i=0; i<n; i++)
		{
			cout<<"Vector B: "<<endl;
			cin>> vector_b[i];
		}

do
{
cout<<"Que operacion desea realizar: \n 1. Suma de los dos vectores A+B \n 2. Resta de los dos vectores A-B \n 3. Multiplicacion de los dos vectores A*B \n 4. Salir"<<endl;
cin>> opcion;
switch(opcion)
{
	case 1:
		for (i = 0; i < n; i++)
		{
			vector_suma[i]=vector_a[i]+vector_b[i];
			cout<<"Vector suma A+B= "<<vector_suma[i]<<endl;

		}
	break;

	case 2:
		for (i = 0; i < n; i++)
		{
			vector_resta[i]=vector_a[i]-vector_b[i];
			cout<<"Vector resta A-B= "<<vector_resta[i]<<endl;
		}
	break;

	case 3:
		for (i = 0; i < n; i++)
		{
			vector_punto[i]= vector_a[i]*vector_b[i];
			cout<<"Vector multiplicacion A*B= "<<vector_punto[i]<<endl;
		}
	break;

	case 4:
		cout<<"Ya se encuentra fuera del menu"<<endl;
	break;

	default:
		cout<<"Opcion no valida"<<endl;
	break;
}
}

while(opcion != 4);
	
system("pause");
return 0;
}
