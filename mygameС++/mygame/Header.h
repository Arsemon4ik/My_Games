//
//  Header.h
//  mygame
//
//  Created by Arsemon4ik on 16.01.2021.
//

#ifndef Header_h
#define Header_h


char **create (int n);
void showmatrix(char **arr,int n);


void playerround(char **arr, int n);
void enemyround(char **arr,int n);

bool win(char **arr,int n);




#endif /* Header_h */
