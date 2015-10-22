#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "operador.h"
#include "operadorVectores.h"
#include "operadorMatrices.h"

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
                system("clear");
                opMatriz op1;
                imprimirMenuOpMatrices();
                cin>>op;
                
                //system("CLS");
                if(op==1){
                   op1.escalar();
                }
                
                if(op==2){ 
                    op1.suma();
                }
                
                if(op==3){ 
                    op1.resta();
                }
                
                if(op==4){
                   op1.multiplicacion(); 
                }
                
                getchar ();
                getchar ();
            }
            
        }
        
        void imprimirMenuOpVectores(){
            cout<<"--------------------> Operar Vectores <--------------"<<endl;
            cout<<"[+] Suma...........................................1 "<<endl;
            cout<<"[+] Resta..........................................2 "<<endl;
            cout<<"[+] Multiplicación.................................3 "<<endl;
            cout<<"[-] Salir..........................................0 "<<endl;
        }
        
        void escogerOpVectores(){
            int op=-1;
            while(op!=0){
                system("clear");
                imprimirMenuOpVectores();
                opVectores op1;
        	    
                cin>>op;
                //system("CLS");
                if(op==1){
                    op1.suma();    
                }
                
                if(op==2){ 
                    op1.resta(); 
                }
                
                if(op==3){
                    op1.multiplicacion();
                }
                getchar ();
                getchar ();
            }
        }
        
        void imprimirMenuOpAritmeticas(){
            cout<<"-------------> Operaraciones aritmeticas <----------"<<endl;
            cout<<"[+] Suma..........................................1 "<<endl;
            cout<<"[+] Resta.........................................2 "<<endl;
            cout<<"[+] Multiplicación................................3 "<<endl;
            cout<<"[-] Salir.........................................0 "<<endl;
        }
        
        void escogerOpAritmeticas(){
            int op=-1;
            while(op!=0){
                system("clear");
                imprimirMenuOpAritmeticas();
                cin>>op;
                Operador op3;
                //system("CLS");
                if(op==1){
                    op3.suma();  
                }
                
                if(op==2){ 
                    op3.resta();
                }
                
                if(op==3){
                   op3.multiplicacion();
                }
                getchar ();
                getchar ();
            }  
        }
        
        public:
            menu(){}
            
            void escogerOpcionGeneral(){
                int op=-1;
                while(op!=0){
                    system("clear");
                    imprimirMenuGeneral();
                    cin>>op;
                    //system("CLS");
                    if(op==1){
                        escogerOpMatrices();    
                    }
                    
                    if(op==2){ 
                        escogerOpVectores();
                    }
                    
                    if(op==3){
                        escogerOpAritmeticas();
                    }
                    getchar ();
                    getchar ();
                }
            }
    
};

int main(int argc, char **argv)
{
    
    menu m;
    m.escogerOpcionGeneral();
   // m.imprimirMenu();
	//Operador op;
	
	//op.suma();
	//op.resta();
	//op.multiplicacion();
	
	
	return 0;
}