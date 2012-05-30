/**
 * author Alysson Ajackson
 * date Tue May 29 23:25:34 BRT 2012
 * */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i, j = 0;

    int matrix(int mat[3][3]){

        int i, j = 0;

        for(i = 0; i < 3; i++)
            for(j = 0; j < 3; j++)
                printf("%d ", mat[i][j]);
                //printf("%d ", *(mat + i * 3 + j));
    }
    
    int mtrx[3][3];

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            mtrx[i][j] = 2;

    matrix(mtrx);


}
