#include <iostream>
#include <cmath>
#include "matrix.h"
#include "matrix.cpp"


using namespace std;

class opMatriz{
    public:
    void llenarMatrix(int typeOp);
    void escalar();
    void suma();
    void resta();
    void multiplicacion();
    
    private:
    int n_rows;
    int n_cols;
    int scalar;
    Matrix<int> a;
    Matrix<int> b;
    Matrix<int> c;
};


void opMatriz::llenarMatrix(int typeOp){
    cout << "Ingresa nro de filas: " << endl;
    cin >> n_rows;
    cout << "Ingresa nro de columnas: " << endl;
    cin >> n_cols;
    cout << endl;
    
    a= Matrix<int>(n_rows, n_cols);
    a.fill_random();
    
    if(typeOp==1){ //  Operación entre dos  Matrices
        b= Matrix<int>(n_rows, n_cols);
        b.fill_random();
    }
}


void opMatriz::escalar(){
    llenarMatrix(0);
    cout << "Ingresa el escalar: " << endl;
    cin >> scalar;
    a.multiply_by_scalar(scalar);
    a.print_matrix();
}

void opMatriz::suma(){
    llenarMatrix(1);
    cout << "Matriz A + B " << endl;
    c = a + b;
    c.print_matrix();
}

void opMatriz::resta(){
    llenarMatrix(1);
    cout << "Matriz A - B " << endl;
    c = a - b;
    c.print_matrix();
}


void opMatriz::multiplicacion(){
    llenarMatrix(1);
    cout << "Matriz A * B " << endl;
    c = a * b;
    c.print_matrix();   
}

    