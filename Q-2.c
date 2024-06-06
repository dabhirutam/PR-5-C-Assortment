#include<stdio.h>

main(){

    int s,r;

    printf("\nEnter the size of an array :- ");
    scanf("%d", &s);

    int array[s]; 

    printf("\nEnter array elements :\n\n");

    for(r=0; r<s; r++){
        printf("Enter array[%d] :- ", r);
        scanf("%d", &array[r]);
        
    }
    
    printf("\nArray in reverse order/n");
    for(r=s-1; r>=0; r--){
    	printf("\nArray [%d] = %d", s-(r+1), array[r]);
	}

}