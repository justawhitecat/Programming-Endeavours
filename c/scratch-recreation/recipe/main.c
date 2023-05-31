#include <stdio.h>

int main(){
    int length;
    int choice;
    int current;
    char *recipes[4];

    recipes[0] = "apple";
    recipes[1] = "banana";
    recipes[2] = "donut";
    recipes[3] = "orange";

    printf("How many items will you use? (4 maximum) ");
    scanf("%d", &length);
    if(length > 4) { printf("That is too much!"); }
    int choiceList[length];

    printf("Welcome! Select your ingredients, then click my anxious dinosaur colleague when you're done to see what your recipe name is!\n");

    for(int i = 1; i <= length; i++){
        printf("\nChoices: \n1. Apple\n2. Banana\n3. Donut\n4. Orange\n\nYour choice: ");
        scanf("%d", &choice);
        
        choiceList[i] = choice;
    }

    printf("Your whimsical dish is ");
    for(int p = 1; p <= length; p++){
        current = choiceList[p-1];

        printf("%s", recipes[current]);
    }
    
}