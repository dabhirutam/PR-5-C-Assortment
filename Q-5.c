#include<stdio.h>

main(){

    int row,col,r,c,l=0;

    printf("Enter the number of row :- ");
    scanf("%d", &row);
    printf("Enter the number of column :- ");
    scanf("%d", &col);

    int array [row][col];

    printf("\n");
    for(r=0; r<row; r++){
        for(c=0; c<col; c++){
            printf("Enter array[%d][%d] :- ", r, c);
            scanf("%d", &array[r][c]);

            if(l < array[r][c]){
                l = array[r][c];
            }
        }
    }
    
    printf("\nLargest number in array is = %d", l);
}