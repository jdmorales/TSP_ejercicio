#include <iostream>
#include "matrix.h"
#include "matrix.cpp"
 
using namespace std;
 
int main()
{
    // Para no generar los mismos números aleatorios
    srand(time(NULL));
 
    int n_rows;
    int n_cols;
 
    int col_1;
    int col_2;
    int row_1;
    int row_2;
    int scalar;
 
    cout << "Ingresa nro de filas: " << endl;
    cin >> n_rows;
    cout << "Ingresa nro de columnas: " << endl;
    cin >> n_cols;
    cout << endl;
 
    Matrix<int> a(n_rows, n_cols);
    Matrix<int> b(n_rows, n_cols);
 
    // Matriz para almacenar el resultado de las operaciones
    Matrix<int> c(n_rows, n_cols);
 
    a.fill_random();
    b.fill_random();
 
    cout << "********** Operaciones básicas con la Matriz A **********" << endl;
    cout << "Matriz A " << endl;
    a.print_matrix();
 
    
  
 
    cout << "Ingresa el escalar: " << endl;
    cin >> scalar;
    a.multiply_by_scalar(scalar);
    a.print_matrix();

    cout << "Transpuesta de A " << endl;
    a.get_transpose();
 
    cout << "********** Operaciones con matrices **********" << endl;
    cout << "Matriz A " << endl;
    a.print_matrix();
 
    cout << "Matriz B " << endl;
    b.print_matrix();
 
    cout << "Matriz A + B " << endl;
    c = a + b;
    c.print_matrix();
 
    cout << "Matriz A - B " << endl;
    c = a - b;
    c.print_matrix();
 	
	//solo funciona con matrices cuadradas
    cout << "Matriz A * B " << endl;
    c = a * b;
    c.print_matrix();
 
    a.delete_matrix();
    b.delete_matrix();
    c.delete_matrix();
 
    return 0;
}