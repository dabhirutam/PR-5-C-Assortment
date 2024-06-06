#include<stdio.h>

main(){

    int row,col,r,c;

    printf("Enter the number of row :- ");
    scanf("%d", &row);
    printf("Enter the number of column :- ");
    scanf("%d", &col);

    int matrix[row][col], matrix2[row][col];

    printf("\nEnter the elements an Matrix = 1\n\n");
    for(r=0; r<row; r++){
        for(c=0; c<col; c++){
            printf("Enter Matrix[%d][%d] :- ", r, c);
            scanf("%d", &matrix[r][c]);
        }
    }

    printf("\nEnter the elements an Matrix = 2\n\n");
    for(r=0; r<row; r++){
        for(c=0; c<col; c++){
            printf("Enter Matrix2[%d][%d] :- ", r, c);
            scanf("%d", &matrix2[r][c]);
        }
    }

    printf("\nAddition of Matrix-1 and Matrix-2\n");
    for(r=0; r<row; r++){
        for(c=0; c<col; c++){
            printf("\nAddition of Matrix [%d][%d] :- %d", r, c, matrix[r][c] + matrix2[r][c]);
        }
    }
}