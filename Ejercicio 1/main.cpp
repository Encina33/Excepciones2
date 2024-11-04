#include <iostream>
#include <string>
#include <fstream>
#include "main.h"
using namespace std;


bool errorFlag = false;
int divide(int a, int b){
    if(b == 0) {
        // Si ocurre un error, se activa el flag
        errorFlag = true;
        return 0;

    }else {
        return a / b;
    }
}

int main()
{
    int result = divide(5, 0);
    if(errorFlag) {
        cout << "Error: Division por cero" << endl;

    }

return 0;
}
