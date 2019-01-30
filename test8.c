
#include <stdio.h>

int main(){
    int num, fin, newnum = 0;
    printf("Please enter the number to reverse: \n");
    scanf("%d",&num);

    while (num>0){
        fin = num%10;
        newnum = newnum*10 + fin;
        num = num/10;
    }

    printf("\nThe reverse of the number is: %d\n ",newnum );

    return 0;

}
