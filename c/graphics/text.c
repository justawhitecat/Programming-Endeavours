#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

void refresh(){
    system("clear");
}

void drawCharacter(int space_amount, int newline_amount, int times, int xdir, int ydir, bool willSleep){
    for(int i = 0; i <= times; i++){   
        if(newline_amount <= 0){newline_amount=0;}
        if(space_amount <= 0){space_amount=0;}   
        
        refresh();
        char space = ' ';
        char hash = '#';

        for(int i = 0; i <= newline_amount; i++){
            printf("\n");
            for(int i = 0; i <= space_amount; i++){
                printf("%c", space);
            }
        }

        printf("%c\n", hash);

        if(xdir > 0) { space_amount+=1; } else if(xdir < 0){ space_amount-=1; } else{
            if(ydir > 0) { newline_amount-=1; } else if(ydir < 0) { newline_amount+=1; }
        }
        if(willSleep == true){ sleep(1); }
    }
}

void waitForKey(char key){
    scanf("%c", &key);
}

void ifKey(char key){
    char input;

    scanf("\n%c", &input);

    if(input == key){ } else { printf("Key %c not pressed, instead, key %c pressed\n", key, input); }
}

void movement(){
    char input;
    int x = 0;
    int y = 0;
    int temp = 1;

    do{
    if(x <= 0){x=0;}
    if(y <= 0){y=0;}
    scanf("\n%c", &input);

    switch(input){
        case 'w':
            drawCharacter(x, y, 1, 0, -1, false);
            y-=1;
            break;
        case 'a':
            drawCharacter(x, y, 1, -1, 0, false);
            x-=1;
            break;
        case 's':
            drawCharacter(x, y, 1, 0, 1, false);
            y+=1;
            break;
        case 'd':
            drawCharacter(x, y, 1, 1, 0, false);
            x+=1;
            break;
    }
    }while(temp == 1);
}

int main(){
    refresh();
    int choice;

    printf("Would you like to be able to move (0 for no, 1 for yes): ");
    scanf("%d", &choice);

    switch(choice){
        case 0:
            drawCharacter(0, 0, 4, 1, 0, true);
            drawCharacter(4, 0, 4, 0, -1, true);
            drawCharacter(4, 4, 4, -1, 0, true);
            drawCharacter(0, 4, 4, 0, 1, true);
            break;
        case 1:
            movement();
            break;
        default:
            printf("Invalid");
    }

}