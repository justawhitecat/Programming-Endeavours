#include <stdio.h>

int main(){
    int rows;

    printf("Enter number of rows: "); scanf("%d", &rows);

    for(int i = 1; i <= rows; i++){
        for(int x = 1; x <= i; x++){
            printf("x ");
        }
        printf("\n");
    }
}