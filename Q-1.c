#include<stdio.h>

main(){

    int s,r,n=0;

    printf("\nEnter the size of an array :- ");
    scanf("%d", &s);

    int array[s]; 

    printf("\nEnter array elements :\n\n");

    for(r=0; r<s; r++){
        printf("Enter array[%d] :- ", r);
        scanf("%d", &array[r]);
        
        if(array[r]<0){
        	n++;
		    }
    }

     printf("\nNagative elements in an array :- %d\n", n);
     for(r=0; r<s; r++){
     	  if(array[r]<0){
     		  printf("\nArray [%d] = %d", r, array[r]);
		    }
	    }
}