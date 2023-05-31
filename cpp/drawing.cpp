#include <iostream>
using namespace std;

void drawSquare(int width, int height, char symbol){

    for(int x = 1; x <= width; x++){
        cout << "# ";
    }

    for (int y = 1; y <= height - 2; y++){
        cout << "\n# ";
        for (int z = 1; z <= width - 2; z++){
            cout << symbol << ' ';
        }
        cout << "#";
    }

    cout << endl;

    for(int x = 1; x <= width; x++){
        cout << "# ";
    }
}

void line(int width, int steps, int axis){
    int angle = width / steps;
    int vnum = 0;
    bool change = false;

    for(int w = 1; w <= width / angle; w++){
        for(int x = 1; x <= angle; x++){
            if (axis == 0){
                cout << "# ";
            } else{
                if (change == true){
                    for(int i = 1; i <= vnum; i++){
                        cout << ' ';
                    }
                    
                }
                cout << "#\n";
            }
            
        }
        if (axis == 0){
            cout << '\v';
        } else{
            vnum+=1;
            change = true;
        }
    }

}

void triangle(int rows){
    for(int i = 1; i <= rows; i++){
        for(int x = 1; x <= i; x++){
            cout << "x ";
        }
        cout << endl;
    }
}

int main(){
    triangle(10);
}