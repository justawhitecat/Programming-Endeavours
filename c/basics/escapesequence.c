#include <stdio.h>

int main(){
    /*
        This comment will explain all of the escape sequences (eg. "\n")

        \a - Beep sound
        \b - Backspace, deletes the character to the left of it.
        \e - Escape character, deletes the character to the right of it.
        \n - Makes a new line
        \r - Carriage return, strange new line??
        \t - Makes a tab space:    <- This far!
        \v - Vertical tab space, same as above but vertically.
        \\ - Writes a single backslash.
        \' - Writes an apostrophe. Similar to the qutation marks.
        \" - Writes a quotation mark (eg. printf("\"Hello World!\" - A computer"))
        \? - Question mark
        
    */

    printf("\"Hello World!\"\n\t - A computer\n");

    return 0;
}