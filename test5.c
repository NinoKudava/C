
#include <stdio.h>

int main(){
    int x;
    printf("\nEnter an integer: ");
    scanf("%d", &x);

    printf("\nThe divisors of %d are the following: ", x);
    for(int i=1; i<=x; i++){
        if((x%i) == 0){
            printf("\n%d", i);
            printf("\n");
        }
    }

    return 0;
}
