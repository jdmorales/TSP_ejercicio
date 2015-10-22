#include <iostream>
#include <cmath>

class Operador{
      private:
              int numero;
              double numero1;
              double numero2;              
              double resultado;
              void insertar();//para los demas
              void imprimir();//para mandar a llmar el resultado
      
      public:
              Operador();
              void suma();
              void resta();
              void multiplicacion();
};


Operador::Operador()
{
    numero1 = 0.0;
    numero2 = 0.0;
    resultado = 0.0;
}


void Operador::suma()
{
     insertar();
     resultado = numero1 + numero2;
     imprimir();
}

void Operador::resta()
{
     insertar();
     resultado = numero1 - numero2;
     imprimir();
}

void Operador::multiplicacion()
{
     insertar();
     resultado = numero1 * numero2;
     imprimir();
}

void Operador::insertar()
{
    std::cout<<"Ingresa el primer valor: ";
    std::cin>>numero1;
    std::cout<<"Ingresa el segundo valor: ";
    std::cin>>numero2;
}

void Operador::imprimir()
{
    std::cout<<"\nEl resultado es: "<<resultado<<std::endl;
}