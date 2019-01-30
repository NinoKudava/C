
#include <stdio.h>
int main(){
    int len, val, position;

    printf("\nInput the length of the array: ");
    scanf("%d", &len);

    int array1[len];
    printf("\nPlease input the integers for the array: \n");
    for(int i = 0; i < len; i++){
        scanf("%d", &array1[i]);
    }

    val = array1[0];
    position = 0;
    for(int i = 0; i < len; i++){
        if(val>array1[i]){
            val = array1[i];
            position = i;
        }
    }

    printf("The smallest integer in the array: %d. The position of the element is: %d.\n", val, position);
    return 0;

}
