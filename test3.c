
#include <stdio.h>

int main(){
    int numbers[3];
    int total = 0;

    printf("\nInput the first number: ");
    scanf("%d",&numbers[0]);
    printf("\nInput the second number: ");
    scanf("%d", &numbers[1]);
    printf("\n Input the third number:");
    scanf("%d",&numbers[2]);

    for(int j = 0; j<3; j++){
        if ((numbers[j]%2) !=0){
            total += numbers[j];
        }
    }

    printf("\n SUM of all odd values: %d",total);

    return 0;
}
