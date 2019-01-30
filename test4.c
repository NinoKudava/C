
#include <stdio.h>

int main(){
    int x;

    printf("Please input an Integer ");
    scanf("%d",&x);

    printf("The square of each even value from 1 to %d : \n",x);

    for(int i=2; i<x; i++){
        if(i%2 ==0){
            printf("%d : %d\n",i,i*i);
        }
    }

    return 0;

}
