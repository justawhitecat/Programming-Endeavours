#include <stdio.h>

int main(){
    int width;
    int height;

    printf("Enter width of square: "); scanf("%d", &width);
    printf("Enter height of square: "); scanf("%d", &height);

    for(int i = 1; i <= height; i++){
        for(int i = 1; i <= width; i++){
            printf("12");
        }
        printf("\n");
    }
}