#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

//Choice 1: IB Adventure
void choice1(string name) {
    
}

//Provide choices of story, jump to story after choice.
void start(string name, string temp) {
    bool flag = true;
    string choice = temp;
    cout << "Welcome, " + name << endl;
    usleep(1000000);
    while (flag) {
        cout << "Choose which adventure you will go on from the following list: \n";
        cout << "1. " + name + "'s IB adventure \n" << "2. UNAVAILABLE \n" << "3. UNAVAILABLE \n";
        cin >> choice;
        if ((choice == "1") || (choice == "1.")) {
            flag = false;
            choice1(name);
        }
        else if ((choice == "2") || (choice == "2.")) {
            cout << "\n" << "Unavailable currently, please choose another adventure. \n" << endl;
            usleep(1000000);
        }
        else if ((choice == "3") || (choice == "3.")) {
            cout << "\n" << "Unavailable currently, please choose another adventure. \n" << endl;
            usleep(1000000);
        }
        else {
            cout << "\n" << "Choose from the choices dumbass \n" << endl;
            usleep(1000000);
        }
    }
}

//Starts the program, records character name.
int main() {
    string temp;
    string cname;
    cout << "Hello, welcome to the game. How's your day? \n";
    cin >> temp;
    cout << "Don't care, didn't ask. \n";
    usleep(1000000);
    cout << "Please enter your character's name: ";
    cin >> cname;
    start(cname, temp);
}