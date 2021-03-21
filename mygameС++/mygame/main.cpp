//
//  main.cpp
//  mygame
//
//  Created by Arsemon4ik on 16.01.2021.
//

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include "Header.h"
using namespace std;

int main()
{
    int n; /// размерность матрицы
    int counter = 0; // счетчик для ничьи
    char **matrix;
    cout << "Крестики/нолики\n";
    cout <<"Введите размерность: ";
    cin >> n;
    matrix = create(n);
    //showmatrix(matrix,n);
    cout <<endl<< "Отлично!\n";
    
    while (true)
    {
        playerround(matrix, n);
        enemyround(matrix, n);
        showmatrix(matrix, n);
        bool check = win(matrix,n);
        if (check==false)
        {
            break;
        }
        counter++ ;
        if (counter==4)
        {
            cout << "Ничья!\n";
        }
    }
}

