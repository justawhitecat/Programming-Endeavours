#include <stdio.h>
#include <math.h>

/*
    Format specifiers:
        %c = char variable
        %d = int variable
        %f = float variable
        %lf = double variable
        %s = string variable

        %.(number) = How many decimals to display
        %(number) = Field width
        %- = Left aligned
        
*/

void circumference(){
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle (cm): ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("The circumference is %lfcm\n", circumference);
    printf("The area is %lfcm\n\n", area);
}

void calculator(){
    double num1;
    double num2;
    double result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nThe answer is %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nThe answer is %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nThe answer is %lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\nThe answer is %lf", result);
            break;
        default:
            printf("\n%c is not a valid operator.", operator);
    }
}

void conversion(){
    // all conversions
    double meters;
    double feet;
    double celsius;
    double fahrenheit;
    double distance;
    double time;
    double speed;
    double kilograms;
    double pounds;
    double miles;
    double kilometer;

    // conversion tool
    int choice;

    printf("What are you converting from\n===============================\n0 = Feet\t 1 = Meters\n2 = Celsius\t 3 = Fahrenheit\n4 = Time\t 5 = Distance\t 6 = Speed\n7 = Pounds\t 8 = Kilograms\n9 = Miles\t 10 = Kilometers\n");
    scanf("%d", &choice);

        switch(choice){
            case 0: 
                printf("How many feet? "); scanf("%lf", &feet);
                meters = feet / 3.28084;
                printf("%lfm", meters);
                break;
            case 1:
                printf("How many meters? "); scanf("%lf", &meters);
                feet = meters * 3.28084;
                printf("%lfft", feet);
                break;
            case 2:
                printf("Enter the celsius: "); scanf("%lf", &celsius);
                fahrenheit = (celsius * 1.8) + 32;
                printf("%lf°F", fahrenheit);
                break;
            case 3:
                printf("Enter the farenheit: "); scanf("%lf", &fahrenheit);
                celsius = (fahrenheit - 32) / 1.8;
                printf("%lf°C", celsius);
                break;
            case 4:
                printf("Enter the distance: "); scanf("%lf", &distance);
                printf("Enter the speed: "); scanf("%lf", &speed);
                time = distance / speed;
                printf("%lfs", time);
                break;
            case 5:
                printf("Enter the time: "); scanf("%lf", &time);
                printf("Enter the speed: "); scanf("%lf", &speed);
                distance = speed * time;
                printf("%lfm", distance);
                break;
            case 6:
                printf("Enter the distance: "); scanf("%lf", &distance);
                printf("Enter the time: "); scanf("%lf", &time);
                speed = distance / time;
                printf("%lfm/s", speed);
                break;
            case 7:
                printf("Enter pounds: "); scanf("%lf", &pounds);
                kilograms = pounds / 2.2;
                printf("%lfkg", kilograms);
                break;
            case 8:
                printf("Enter kilograms: "); scanf("%lf", &kilograms);
                pounds = kilograms * 2.2;
                printf("%lflb", pounds);
                break;
            case 9:
                printf("How many miles: "); scanf("%lf", &miles);
                kilometer = miles * 1.609344;
                printf("%lfkm", kilometer);
                break;
            case 10:
                printf("How many kilometer: "); scanf("%lf", &kilometer);
                miles = kilometer / 1.609344;
                printf("%lf miles", miles);
                break;
            default:
                printf("Invalid choice");
        }
        printf("\n");
}

void hypotenuse(){
    double sideA;
    double sideB;
    double sideC;

    printf("Side A: "); scanf("%lf", &sideA);
    printf("Side B: "); scanf("%lf", &sideB);

    sideC = sqrt(sideA*sideA + sideB*sideB);

    printf("Side C: %lf", sideC);
}


void leap(){
   int year;
   printf("Enter the current year: ");
   scanf("%d", &year);

   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   } else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   } else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   } else {
      printf("%d is not a leap year.", year);
   }
}

void drawSquare(){
    int width;
    int height;

    printf("Enter width of square: "); scanf("%d", &width);
    printf("Enter height of square: "); scanf("%d", &height);

    for(int i = 1; i <= height; i++){
        for(int i = 1; i <= width; i++){
            printf("x ");
        }
        printf("\n");
    }
}

void drawTriangle(){
    int rows;

    printf("Enter number of rows: "); scanf("%d", &rows);

    for(int i = 1; i <= rows; i++){
        for(int x = 1; x <= i; x++){
            printf("x ");
        }
        printf("\n");
    }
}

void percentage(){
    double percentage;
    double number;
    double result;

    printf("Enter the number you wish to find the percentage of: ");
    scanf("%lf", &number);
    printf("Enter the percentage of the number you want: ");
    scanf("%lf", &percentage);
    
    result = percentage / 100 * number;

    printf("%.2lf%% of %.2lf is %lf", percentage, number, result);
}

void squared(){
    double num;
    double result;

    printf("Enter the number you wish to square: ");
    scanf("%lf", &num);

    result = num * num;

    printf("%lf", result);
}

void squareRoot(){
    double num;
    double result;

    printf("Enter the number you wish to find the square root of: ");
    scanf("%lf", &num);

    result = sqrt(num);

    printf("\n%lf\n", result);
}

int main(){
    int choice;
    int inf = 0;
    char key;

    do
    {
    printf("\n===============================\nEnter the tool you wish to use:\n===============================\n0. Exit\n1. Simple Calculator\n2. Circle circumference calculator\n3. Conversion Tool\n4. Is it a leap year?\n5. Draw a square\n6. Draw a right angle triange\n7. Percentage Calculator\n8. Square a number\n9. Find the square root\n10. Hypotenuse Calculation\n===============================\n> Choice: ");
    scanf("%d", &choice);
    printf("===============================\n");
        
    switch(choice){
        case 0:
            printf("Goodbye World.");
            inf = 1;
            break;
        case 1:
            calculator();
            break;
        case 2:
            circumference();
            break;
        case 3:
            conversion();
            break;
        case 4:
            leap();
            break;
        case 5:
            drawSquare();
            break;
        case 6:
            drawTriangle();
            break;
        case 7:
            percentage();
            break;
        case 8:
            squared();
            break;
        case 9:
            squareRoot();
            break;
        case 10:
            hypotenuse();
            break;
        default:
            printf("> Invalid\n===============================");
    }
    } while (inf != 1);  
    return 0;
}