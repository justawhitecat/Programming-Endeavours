#include <stdio.h>

int main(){
    char friend[12];
    char animal[16];
    char place[12];
    char thing[8];

    printf("Welcome to CatLibs!\nLet's create a story together.\n\nPlease give me the name of a friend: ");
    scanf("%s", friend);
    printf("Please give me the name of an animal: ");
    scanf("%s", animal);
    printf("Please give me the name of a place: ");
    scanf("%s", place);
    printf("Please give me the name of a thing: ");
    scanf("%s", thing);

    printf("One day, %s and %s went to %s to see a %s \n", friend, animal, place, thing);
}