#include<stdio.h>

main(){

    int rc,r,c,s=0;

    printf("Enter the number of row and column:- ");
    scanf("%d", &rc);

    int matrix[rc][rc];

    printf("\nEnter the elements an Matrix\n\n");
    for(r=0; r<rc; r++){
        for(c=0; c<rc; c++){
            printf("Enter Matrix[%d][%d] :- ", r, c);
            scanf("%d", &matrix[r][c]);

            if(r==c){
                s += matrix[r][r];
            }
        }
    }
    printf("\nElements of a Matrix\n");
    for(r=0; r<rc; r++){
        for(c=0; c<rc; c++){
            printf("%d ", matrix[r][c]);
        }
        printf("\n");
    }

    printf("\nsum of diagonal elements of a matrix is = %d", s);
}