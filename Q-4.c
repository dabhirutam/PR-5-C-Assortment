#include<stdio.h>

main(){

    int s,r,min,max=0;

    printf("\nEnter the size of array :- ");
    scanf("%d", &s);

    int array[s];

    printf("\nEnter the array elements\n\n");

    for(r=0; r<s; r++){
        printf("Enter the array [%d] :- ", r);
        scanf("%d", &array[r]);

        if(min > array[r]){
            min = array[r];
        }
        if(max < array[r]){
            max = array[r];
        }
    }

    printf("\nMinimum element in array is = %d", min);
    printf("\nMaximum element in array is = %d", max);
}