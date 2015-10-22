#include <iostream>
#include <stdlib.h>
#include "operador.h"
#include "operadorVectores.h"

using namespace std; 

class menu{
    private:
        void imprimirMenuGeneral(){
           cout<<"--------------------> Operaciones <------------------"<<endl;
           cout<<"[+] Operar matrices................................1 "<<endl;
           cout<<"[+] Operar vectores................................2 "<<endl;
           cout<<"[+] Operaraciones aritmeticas......................3 "<<endl;
           cout<<"[-] Salir..........................................0 "<<endl;
        }
        
        void imprimirMenuOpMatrices(){
           cout<<"-------------------> Operar Matrices <---------------"<<endl;
           cout<<"[+] Multiplicar Escalar............................1 "<<endl;
           cout<<"[+] Sumar..........................................2 "<<endl;
           cout<<"[+] Restar.........................................3 "<<endl;
           cout<<"[+] Multiplicar Matrix.............................4 "<<endl;
           cout<<"[-] Salir..........................................0 "<<endl;
        }
        
        
        void escogerOpMatrices(){
            int op=-1;
            while(op!=0){
                imprimirMenuOpMatrices();
                cin>>op;
                //system("CLS");
                if(op==1){
                        
                }
                
                if(op==2){ 
    
                }
                
                if(op==3){ 
                }
            }  
        }
        
        void imprimirMenuOpVectores(){
            cout<<"--------------------> Operar Vectores <--------------"<<endl;
            cout<<"[+] Suma...........................................1 "<<endl;
            cout<<"[+] Resta..........................................2 "<<endl;
            cout<<"[+] Multiplicación.................................3 "<<endl;
            cout<<"[-] Salir..........................................0 "<<endl;
        }
        
        void imprimirMenuOpAritmeticas(){
            cout<<"-------------> Operaraciones aritmeticas <----------"<<endl;
            cout<<"[+] Suma..........................................1 "<<endl;
            cout<<"[+] Resta.........................................2 "<<endl;
            cout<<"[+] Multiplicación................................3 "<<endl;
            cout<<"[-] Salir.........................................0 "<<endl;
        }
        
        public:
            menu(){}
            
            void escogerOpcionGeneral(){
                int op=-1;
                while(op!=0){
                    imprimirMenuGeneral();
                    cin>>op;
                    //system("CLS");
                    if(op==1){
                            
                    }
                    
                    if(op==2){ 

                    }
                    
                    if(op==3){ 
                    }
                }
            }
    
};

int main(int argc, char **argv)
{
    
    //menu m;
   // m.escogerOpcionGeneral();
   // m.imprimirMenu();
	//Operador op;
	
	//op.suma();
	//op.resta();
	//op.multiplicacion();
	
	opVectores op1;
	op1.suma();
	return 0;
}