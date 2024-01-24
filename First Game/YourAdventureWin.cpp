#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//Story 1-1
void choice1_1(string name, string p1, string p2, string p3) {
    cout << "";
}

//Story 1-2
void choice1_2(string name, string p1, string p2, string p3) {
    //p1 = he
    //p2 = himself
    //p3 = his
    string temp;
    bool flag = true;
    
    cout << name + " plays videogames all two weeks. \n";
    Sleep(2000);
    cout << "It is now the last day before the exams and " + name + " feels a lot of pressure. \n";
    Sleep(2000);
    while (flag) {
        cout << "What does " + name + " do? \n";
        cout << 
        "1. Starts studying as hard as " + p1 + " can. \n" << 
        "2. Doesn't care. Continues playing videogames. \n" << 
        "3. Ends " + p2 + " because of the pressure. \n";
        cin >> temp;
        if ((temp == "1") || (temp == "1.")) {
            flag = false;
            cout << "\n";
        }
        else if ((temp == "2") || (temp == "2.")) {
            flag = false;
            cout << "\n";
        }
        else if ((temp == "3") || (temp == "3.")) {
            flag = false;
            cout << "\n";
            cout << name + " chooses to end " + p2 + ". \n";
            Sleep(2000);
            cout << "Game over. \n";
            Sleep(2000);
            cout << "Type any letter to exit app.";
            cin >> temp;
        }
        else {
            cout << "\n" << "Choose from the choices given please. (i.e. 1) \n" << endl;
            Sleep(1000);
        }
    }
}

//Story 1-3
void choice1_3(string name, string p1, string p2, string p3) {
    cout << "";
}

//Choice 1: IB Adventure
void choice1(string name, string p1, string p2, string p3) {
    //p1 = he
    //p2 = himself
    //p3 = his

    string temp;
    bool flag = true;
    
    cout << name + " is a Year 13 IB Student at an International School in Shanghai. \n";
    Sleep(2000);
    cout << name + " takes Physics, Math AA, Computer Science (HL). English A, Chinese B, Economics (SL). \n";
    Sleep(2000);
    cout << name + " isn't the best student in their class, but " + name + " tries " + p3 + " best. \n" << endl;
    Sleep(2000);
    while (flag) {
        cout << "The mock exams are starting in a week from now. What does " + name + " do? \n";
        cout << 
        "1. Start studying for the mocks immediately \n" << 
        "2. Not study at all and play videogames until the last day before the exams \n" << 
        "3. " + name + " assures " + p2 + " that " + p1 + " will study starting next week \n";
        cin >> temp;
        if ((temp == "1") || (temp == "1.")) {
            flag = false;
            cout << "\n";
            choice1_1(name, p1, p2, p3);
        }
        else if ((temp == "2") || (temp == "2.")) {
            flag = false;
            cout << "\n";
            choice1_2(name, p1, p2, p3);
        }
        else if ((temp == "3") || (temp == "3.")) {
            flag = false;
            cout << "\n";
            choice1_3(name, p1, p2, p3);
        }
        else {
            cout << "\n" << "Choose from the choices given please. (i.e. 1) \n" << endl;
            Sleep(1000);
        }
    }
}

//Provide choices of story, jump to story after choice.
void start(string name, string temp, string p1, string p2, string p3) {
    bool flag = true;
    string choice = temp;

    cout << "Welcome, " + name << endl;
    Sleep(1000);

    while (flag) {
        cout << "Choose which adventure you will go on from the following list: \n";
        cout << "1. " + name + "'s IB adventure \n" << "2. UNAVAILABLE \n" << "3. UNAVAILABLE \n";
        cin >> choice;
        if ((choice == "1") || (choice == "1.")) {
            flag = false;
            cout << "\n";
            choice1(name, p1, p2, p3);
        }
        else if ((choice == "2") || (choice == "2.")) {
            cout << "\n" << "Unavailable currently, please choose another adventure. \n" << endl;
            Sleep(1000);
        }
        else if ((choice == "3") || (choice == "3.")) {
            cout << "\n" << "Unavailable currently, please choose another adventure. \n" << endl;
            Sleep(1000);
        }
        else {
            cout << "\n" << "Choose from the choices given please. (i.e. 1) \n" << endl;
            Sleep(1000);
        }
    }
}

//Starts the program, records character name.
int main() {
    string temp;
    string temp2;
    string cname;
    string pronoun, pronoun2, pronoun3;
    bool flag = true;

    cout << "Hello, welcome to the game. How's your day? \n";
    cin >> temp;
    cout << "Don't care, didn't ask. \n";
    Sleep(1000);
    cout << "Please enter your character's name: ";
    cin >> cname;
    cout << "What is your character's gender? \n" << "M (Male), F (Female), O (Other) \n";
    cin >> temp2;

    while (flag) {
        if ((temp2 == "m") || (temp2 == "M")) {
            pronoun = "he";
            pronoun2 = "himself";
            pronoun3 = "his";
            flag = false;
        }
        else if ((temp2 == "f") || (temp2 == "F")) {
            pronoun = "she";
            pronoun2 = "herself";
            pronoun3 = "her";
            flag = false;
        }
        else if ((temp2 == "o") || (temp2 == "O")) {
            pronoun = "they";
            pronoun2 = "themself";
            pronoun3 = "their";
            flag = false;
        }
        else {
            cout << "Please type a letter from the above selection. (i.e. 'm' for male)";
        }
    }
    start(cname, temp, pronoun, pronoun2, pronoun3);
}