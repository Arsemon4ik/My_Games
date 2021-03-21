//
//  functions.cpp
//  mygame
//
//  Created by Arsemon4ik on 16.01.2021.
//

#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;



char **create (int n)
{
    char **arr = new char* [n];
    for ( int i = 0 ; i < n; i++)
    {
        arr[i] = new char [n];
    }
    for ( int i = 0 ; i < n; i++)
    {
        for (int k = 0; k<n; k++)
        {
            arr[i][k] =' ';
        }
    }
    return arr;
}

void showmatrix(char **arr,int n)
{
    for ( int i = 0 ; i < n; i++)
    {
        for (int k = 0; k<n; k++)
        {
            cout <<"|"<< arr[i][k]<<"|"<<"\t";
        }
        cout<<endl;
    }
}

void playerround(char **arr, int n)
{
    while (true)
    {
        int n1,m1;
        cout <<"Сделайте Ход(выберите ячейку): ";
        cin >> n1 >> m1;
        
        if (arr[n1][m1]==' ')
        {
            arr[n1][m1] = 'X';
            break;
        }
        else
            cout <<"ячейка занята!" << endl;
    }
}
void enemyround(char **arr,int n)
{
    while (true)
    {
        srand(time(NULL));
        int n2 = rand()%3;
        int m2 = rand()%3;
        
        if (arr[n2][m2]==' ')
        {
            arr[n2][m2]='0';
            break;
        }
    }
    
    
    
}

bool win(char **arr,int n)
{
    bool flag = true;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i][k]!=' ')
        {
            if(arr[i][k]==arr[i][k+1]&&arr[i][k]==arr[i][k+2]) /// гор
            {
                cout<<"Вы победили!" << endl;
                flag = false;
            }
        }
    }
    int l=0;
    for (int k = 0; k < n; k++)
    {
        if(arr[l][k]!=' ')
        {
            if(arr[l][k]==arr[l+1][k]&&arr[l][k]==arr[l+2][k]) /// верт
            {
                cout<<"Вы победили!" << endl;
                flag = false;
            }
        }
    }
    int m=0;
    int j=0;
    if(arr[m][j]!=' ')
    {
        if(arr[m][j]==arr[m+1][j+1]&&arr[m][j]==arr[m+2][j+2]) /// главная диаг
            {
                cout<<"Вы победили!" << endl;
                flag = false;
            }
    }
    int p=0;
    int q=0;
    if(arr[p+2][q]!=' ')
    {
        if(arr[p][q+2]==arr[p+1][q+1]&&arr[p][q+2]==arr[p+2][q]) /// 2ая диаг
            {
                cout<<"Вы победили!" << endl;
                flag = false;
            }
    }
    return flag;
}


