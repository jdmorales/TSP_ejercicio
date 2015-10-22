#include <iostream>
#include <cmath>

using namespace std;
//Std::cin;

class opVectores{
	private:
	int vector_a[20];
	int vector_b[20];
	int vector_result[20];
	int n_max; //maximo numero de posiciones en los vectores

	public:
	    opVectores();
	    void llenarVectores();
	    void suma();
	    void resta();
	    void multiplicacion();
};

opVectores:: opVectores(){
	
}

void opVectores::llenarVectores()
{
    cout<<"Numero de elementos para los dos vectores:"<<endl;
	cin>>n_max;
    cout<<"Digite los numeros que contendra el vector A: "<<endl;
		for(int i=0; i<n_max; i++)
		{
			cout<<"Vector A["<<i<<"]";
			cin>> vector_a[i];
			cout<<endl;
		}

	cout<<"Digite los numeros que contendra el vector B: "<<endl;
		for(int i=0; i<n_max; i++)
		{
			cout<<"Vector B["<<i<<"]";
			cin>> vector_b[i];
		}
}


void opVectores::suma()
{
	llenarVectores();
	for (int i=0; i<n_max; i++){
		vector_result[i]=vector_a[i]+vector_b[i];
		cout<<"Vector suma A+B= "<<vector_result[i]<<endl;
	}
}

void opVectores::resta()
{
	llenarVectores();
	for (int i=0; i<n_max; i++){
		vector_result[i]=vector_a[i]-vector_b[i];
		cout<<"Vector resta A-B= "<<vector_result[i]<<endl;
	}
}

void opVectores::multiplicacion()
{
	llenarVectores();
	for (int i=0; i<n_max; i++){
		vector_result[i]=vector_a[i]*vector_b[i];
		cout<<"Vector multiplicacion A.*B= "<<vector_result[i]<<endl;
	}
}