#include<stdio.h>

main(){

    int s,r,sum=0;

    printf("\nEnter the size of array :- ");
    scanf("%d", &s);

    int array[s];

    printf("\nEnter the array elements\n\n");

    for(r=0; r<s; r++){
        printf("Enter the array [%d] :- ", r);
        scanf("%d", &array[r]);

        sum = sum + array[r];
    }

    printf("\nsum of all array elements :- %d", sum);

}