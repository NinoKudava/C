
#include <stdio.h>
#define CONST 6

int main(){

    int array1[CONST], temp;

    printf("Please enter the 6 integers for the array: \n");

    for(int i = 0; i < CONST; i++){
        scanf("%d", &array1[i]);
    }

    for(int i = 0; i < CONST/2; i++){
        temp = array1[i];
        array1[i] = array1[CONST-(i+1)];
        array1[CONST-(i+1)] = temp;
    }

    for(int i = 0; i<CONST; i++){

        printf("%d  ",array1[i] );
    }

    printf("\n");

    return 0;
}
