#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int main(){
    string temp = "";

    //If statement for 3 choices
    if ((temp == "1") || (temp == "1.")) {

    }
    else if ((temp == "2") || (temp == "2.")) {

    }
    else if ((temp == "3") || (temp == "3.")) {

    }
    else {
        cout << "\n" << "Choose from the choices given please. (i.e. 1) \n" << endl;
        usleep(1000000);
    }
    
    //If statement for Y or N
    if ((temp == "Y") || (temp == "y")) {

    }
    else if ((temp == "N") || (temp == "n")) {

    }
    else {
        cout << "\n" << "Choose from the choices given please. (i.e. Y) \n" << endl;
        usleep(1000000);
    }
}