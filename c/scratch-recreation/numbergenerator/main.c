#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num_array[6];

    for(int x = 0; x <= 5; x++){
        for(int i = 0; i <= 5; i++){
            srand(time(NULL));
            num_array[i] = rand() % 54;
        }
        printf("%d ", num_array[x]);
    }
    
}