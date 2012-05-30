/*
 * author Alysson Ajackson
 * date Tue May 29 22:48:41 BRT 2012
 * */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int matrix(int *x){
        *x += 10;
    }

    int x = 10;

    printf("\n\n %d \n\n", x);

    matrix(&x);
    
    printf("\n\n %d \n\n", x);

}
