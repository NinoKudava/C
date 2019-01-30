
#include <stdio.h>
#define N 10
int abs_func(int y);

int main(){

    int  x, result;
    printf("\nPlease enter a negative value: \n");
    scanf("%d", &x);
    result = abs_func(x);
    printf("\nThe absolute value is : %d \n", result);
    return 0;

}

int abs_func(int y){
    if(y<0){
        return (y*-1);
    }
    else return (y);
}
