#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

//Print stats function
void printstats(string name, int k, int c) {
    string knowledge = "Knowledge: " + to_string(k) + "/100 \n";
    string charisma = "Charisma: " + to_string(c) + "/100 \n";
    cout << name + "'s stats: \n";
    cout << knowledge;
    cout << charisma;
    cout << "\n";
    usleep(5000000);
}

//Mock exams & endings
void mock(string name, string p1, string p2, string p3, int k, int c) {
    //p1 = he
    //p2 = himself
    //p3 = his

    string temp;

    printstats(name, k, c);

    int result;

    if (k >= 90) {
        result = 44;
    }
    else if (k >= 80) {
        result = 42;
    }
    else if (k >= 50) {
        result = 36;
    }
    else if (k >= 30) {
        result = 30;
    }
    else if ((k <= 30) && (c >= 80)) {
        //4 routes
        //Charisma ending
        if ((p1 == "he") || (p1 == "they")) {
            cout << name + " got a 21 on " + p3 + " mock exams. It didn't bother " + name + " too much. \n";
            usleep(3000000);
            cout << name + " got together with Jenny. \n";
            usleep(3000000);
            cout << name + " and Jenny started having sex 4 times every month and eventually got married. \n";
            usleep(3000000);
            cout << name + " and Jenny had a baby. It was a boy. " + name + " and Jenny named him \"Alex\". They lived happily ever after. \n";
            usleep(5000000);
            cout << "Charisma ending achieved. \n" << endl;
            usleep(3000000);
            cout << "Type any letter to close the app. \n";
            cin >> temp;
        } 
        else if (p1 == "she") {
            cout << name + " got a 21 on " + p3 + " mock exams. It didn't bother " + name + " too much. \n";
            usleep(3000000);
            cout << name + " got together with Steven. \n";
            usleep(3000000);
            cout << name + " and Steven started having sex 4 times every month and eventually got married. \n";
            usleep(3000000);
            cout << name + " and Steven had a baby. It was a boy. " + name + " and Steven named him \"Alex\". They lived happily ever after. \n" << endl;
            usleep(5000000);
            cout << "Charisma ending achieved. \n" << endl;
            usleep(3000000);
            cout << "Type any letter to close the app. \n";
            cin >> temp;
        }
    }
    else if ((k >= 40) && (c >= 80)) {
        //I don't think this is possible but fuck it.
        //Nevermind. It is possible.
        //Possible but improbable, only one route to this ending. Rarest ending.
        //1 route
        //Chrisma and good ending
        if ((p1 == "he") || (p1 == "they")) {
            cout << name + " got a 34 on " + p3 + " mock exams. It didn't bother " + name + " too much. \n";
            usleep(3000000);
            cout << name + " worked a little bit and managed to get a 36 on " + p3 + " final IB exam.";
            usleep(5000000);
            cout << "One year later... \n" << endl;
            usleep(3000000);
            cout << name + " went to Canada to study Computer Engineering with " + p3 + " new boyfriend, Steven. \n";
            usleep(3000000);
            cout << "3 years later... \n" << endl;
            usleep(3000000);
            cout << name + " eventually graduated and started working at Google as a Computing Specialist. \n";
            usleep(3000000);
            cout << name + " and Steven got married and had a baby. The baby was a boy and they named him \"Alex\". \n";
            usleep(3000000);
            cout << name + " and Steven continued to live a very happy life. \n" << endl;
            usleep(5000000);
            cout << "Best ending achieved! Congratulations! \n" << endl;
            usleep(3000000);
            cout << "Type any letter to close the app. \n";
            cin >> temp;
        }
    }
    else {
        result = 20;
    }

    switch (result) {
        case 44:
            //1 route
            cout << name + " got a " + to_string(result) + " on " + p3 + " mocks! \n";
            usleep(2000000);
            cout << "This result pushed " + name + " to work harder and " + name + " achieved a 45 on " + p3 + " final IB Exams. \n" << endl;
            usleep(5000000);
            cout << "One year later... \n" << endl;
            usleep(3000000);
            cout << name + " is having a great time studying Computer Engineering at MIT. \n";
            usleep(2000000);
            cout << "However, " + name + " literally gets 0 bitches because " + p1 + " has no Charisma. \n" << endl;
            usleep(5000000);
            cout << "5 years later... \n" << endl;
            usleep(3000000);
            cout << name + " has graduated with a masters degree in Computer Engineering. \n";
            usleep(3000000);
            cout << name + " falls into deep depression because " + p1 + " is very lonely. \n";
            usleep(3000000);
            cout << name + " commits suicide. \n" << endl;
            usleep(5000000);
            cout << "Game over. \n" << endl;
            usleep(3000000);
            cout << "Type any letter to close the app. \n";
            cin >> temp;
            break;
        case 42:
            //1 route
            cout << name + " got a " + to_string(result) + " on " + p3 + " mocks! \n";
            usleep(2000000);
            cout << "This result pushed " + name + " to work harder and " + name + " achieved a 40 on " + p3 + " final IB Exams. \n" << endl;
            usleep(5000000);
            cout << "One year later... \n" << endl;
            usleep(3000000);
            cout << name + " is having a great time studying Computer Engineering in Canada. \n" << endl;
            usleep(5000000);
            cout << "5 years later... \n" << endl;
            usleep(3000000);
            cout << name + " graduated with a masters degree in Computer Engineering. \n";
            usleep(3000000);
            cout << name + " is alone for the rest of " + p3 + " life but is very successful in Computer Engineering and makes a lot of money. \n" << endl;
            usleep(5000000);
            cout << "Good ending achieved. \n" << endl;
            usleep(3000000);
            cout << "Type any letter to close the app. \n";
            cin >> temp;
            break;
        case 36:
            //3 Routes
            //Mid ending func
            cout << name + " got a " + to_string(result) + " on " + p3 + " mocks. \n";
            usleep(2000000);
            cout << name + " didn't study too hard before the final exams and " + name + " achieved a 34 on " + p3 + " final IB Exams. \n" << endl;
            usleep(5000000);
            cout << "One year later... \n" << endl;
            usleep(3000000);
            cout << name + " is studying Computer Engineering in Australia. \n" << endl;
            usleep(5000000);
            cout << "5 years later... \n" << endl;
            usleep(3000000);
            cout << name + " graduated with a Bachelors Degree in Computer Engineering. \n";
            usleep(3000000);
            cout << name + " works at a small tech company in Australia and makes enough money to sustain " + p3 + " life. \n";
            usleep(3000000);
            cout << name + " also found a girlfriend at the company " + p1 + " is working at. " + name + " is pretty happy with " + p3 + " life. \n" << endl;
            usleep(5000000);
            cout << "Mid ending achieved. \n" << endl;
            usleep(3000000);
            cout << "Type any letter to close the app. \n";
            cin >> temp;
            break;
        case 30:
            //1 route
            //Bad ending func
            cout << name + " got a " + to_string(result) + " on " + p3 + " mocks. \n";
            usleep(2000000);
            cout << name + " barely studied for " + p3 + " final exams and got a 29 on " + p3 + " final IB exams. \n" << endl;
            usleep(5000000);
            cout << "One year later... \n" << endl;
            usleep(3000000);
            cout << name + " is studying Computer Engineering in a University in India. It was the only University gave " + p3 + " an offer. \n" << endl;
            usleep(5000000);
            cout << "5 years later... \n" << endl;
            usleep(3000000);
            cout << name + " failed to graduate from the Univeristy because of low grades. \n";
            usleep(3000000);
            cout << name + " now works in a tiny company as a scammer. \n";
            usleep(3000000);
            cout << name + " often goes to the strip club and found a stripper to be " + p3 + " lover. \n" << endl;
            usleep(5000000);
            cout << "Bad ending achieved \n" << endl;
            usleep(3000000);
            cout << "Type any letter to close the app. \n";
            cin >> temp;
            break;
        case 20:
            //3 routes
            //Worst ending func
            cout << name + " got a " + to_string(result) + " on " + p3 + " mocks. \n";
            usleep(2000000);
            cout << name + " completely failed " + p3 + " final IB exam and got a 15. \n" << endl;
            usleep(5000000);
            cout << "One year later... \n" << endl;
            usleep(3000000);
            cout << name + " couldn't find a University to go to. So " + name + " became a hooker to make money. \n" << endl;
            usleep(5000000);
            cout << "2 year later... \n" << endl;
            usleep(3000000);
            cout << name + " got a hooker to be " + p3 + " lover. The two wanted to get married. \n" << endl;
            usleep(5000000);
            cout << "1 year later... \n" << endl;
            usleep(3000000);
            cout << name + " and " + p3 + " lover want to get married. \n";
            usleep(2000000);
            cout << "However, the day before their marriage, " + name + " gets diagnosed with HIV and " + name + "'s lover dumps " + name + "\n";
            usleep(4000000);
            cout << name + " gets depression and lives the rest of " + p3 + " life depressed. \n" << endl;
            usleep(5000000);
            cout << "Worst ending achieved \n" << endl;
            usleep(3000000);
            cout << "Type any letter to close the app. \n";
            cin >> temp;
            break;
    }
}

//Meet boy/girl
void side_rizzler(string name, string p1, string p2, string p3, int k, int c) {
    //p1 = he
    //p2 = himself
    //p3 = his
    string temp;
    string girlname = "Jenny";
    string boyname = "Steven";
    bool flag = true;
    printstats(name, k, c);
    
    //Boy / Other scenario
    if ((p1 == "he") || (p1 == "they")) {
        cout << "While in school, " + name + " sees a girl that " + p1 + " finds very attractive. \n" << endl;
        usleep(3000000);
        while (flag) {
            if (c <= 10) {
                flag = false;
                cout << "THE GIRL REFUSES TO EVEN LOOK AT YOU BECAUSE YOUR CHARISMA IS TOO LOW. \n";
                usleep(6000000);
                cout << "Knowledge +0. Charisma -10. \n" << endl;
                c = c - 10;
                if (c < 0) {
                    c = 0;
                }
                mock(name, p1, p2, p3, k, c);
                break;
            }
            cout << "What does " + name + " do? \n";
            cout << 
            "1. Approach the girl and ask her what her name is. \n" << 
            "2. Leave without talking to her. \n" << 
            "3. Stand there and STARE at her. \n";
            cin >> temp;
            if ((temp == "1") || (temp == "1.")) {
                flag = false;
                cout << "\n";
                bool flag2 = true;
                cout << name + " approaches the girl. \n";
                usleep(2000000);
                cout << name + ": Hey, how are you doing? \n";
                usleep(2000000);
                cout << "Girl: Good, thanks. Who are you? \n";
                usleep(2000000);
                cout << name + ": My name is " + name + ", nice to meet you. What's your name? \n";
                usleep(2000000);
                cout << "Girl: " + girlname + ". \n";
                usleep(2000000);
                cout << name + ": \n";
                cout << 
                "1. Hi " + girlname + ", I was over there and your beauty caught my eyes. Do you have a boyfriend? \n" <<
                "2. You look very cute today, " + girlname + ". \n" <<
                "3. I want to fuck you. \n";
                cin >> temp;
                while (flag2) {
                    if ((temp == "1") || (temp == "1.")) {
                        flag2 = false;
                        cout << "\n";
                        cout << girlname + ": Aww, thank you! I don't have a boyfriend. \n";
                        usleep(2000000);
                        cout << name + ": Could I get your WeChat then? \n";
                        usleep(2000000);
                        cout << girlname + ": No problem. Here! \n" << endl;
                        usleep(2000000);

                        cout << "You successfully got the girl's WeChat. \n";
                        usleep(2000000);
                        cout << "Charisma +30. \n" << endl;
                        usleep(2000000);
                        c = c + 30;
                        if (c > 100) {
                            c = 100;
                        }
                        mock(name, p1, p2, p3, k, c);
                    }
                    else if ((temp == "2") || (temp == "2.")) {
                        flag2 = false;
                        cout << "\n";
                        cout << girlname + ": I don't really like it when people call me cute, but thanks. \n";
                        usleep(2000000);
                        cout << name + ": Could I get your WeChat? \n";
                        usleep(2000000);
                        cout << girlname + ": No, sorry, I have a boyfriend. \n" << endl;
                        usleep(2000000);

                        cout << "You did not get the girl's WeChat. \n";
                        usleep(2000000);
                        cout << "Charisma +10. \n" << endl;
                        usleep(2000000);
                        c = c + 10;
                        mock(name, p1, p2, p3, k, c);
                    }
                    else if ((temp == "3") || (temp == "3.")) {
                        flag2 = false;
                        cout << "\n";
                        cout << girlname + ": What the fuck? Are you fucking stupid? Fuck no, get away from me! \n" << endl;
                        usleep(2000000);

                        cout << "Charisma -100000000000. \n" << endl;
                        usleep(2000000);
                        c = c - 100;
                        if (c < 0) {
                            c = 0;
                        }
                        mock(name, p1, p2, p3, k, c);
                    }
                    else {
                        cout << "\n" << "Choose from the choices given please. (i.e. 1) \n" << endl;
                        usleep(2000000);
                    }
                }
            }
            else if ((temp == "2") || (temp == "2.")) {
                flag = false;
                cout << "\n";
                cout << "Charisma: +0. \n" << endl;
                usleep(2000000);
                mock(name, p1, p2, p3, k, c);
            }
            else if ((temp == "3") || (temp == "3.")) {
                flag = false;
                cout << "\n";
                cout << "The girl looks at you, walks over to you, and tells you to fuck off. \n";
                usleep(2000000);
                cout << "Charisma -100000000000. \n" << endl;
                usleep(2000000);
                c = c - 100;
                if (c < 0) {
                    c = 0;
                }
                mock(name, p1, p2, p3, k, c);
            }
            else {
                cout << "\n" << "Choose from the choices given please. (i.e. 1) \n" << endl;
                usleep(2000000);
            }
        }
    }
    //Girl scenario
    else if (p1 == "she") {
        cout << "While in school, " + name + " sees a boy that " + p1 + " finds very attractive. \n" << endl;
        usleep(3000000);
        while (flag) {
            if (c <= 10) {
                flag = false;
                cout << "THE GIRL REFUSES TO EVEN LOOK AT YOU BECAUSE YOUR CHARISMA IS TOO LOW. \n";
                usleep(6000000);
                cout << "Knowledge +0. Charisma -10. \n" << endl;
                c = c - 10;
                if (c < 0) {
                    c = 0;
                }
                mock(name, p1, p2, p3, k, c);
                break;
            }
            cout << "What does " + name + " do? \n";
            cout << 
            "1. Approach the boy and ask him what his name is. \n" << 
            "2. Leave without talking to him. \n" <<
            "3. Stand there and STARE at him. \n";
            cin >> temp;
            if ((temp == "1") || (temp == "1.")) {
                flag = false;
                cout << "\n";
                bool flag2 = true;
                cout << name + " approaches the boy. \n";
                usleep(2000000);
                cout << name + ": Hey, how are you doing? \n";
                usleep(2000000);
                cout << "Boy: Good, thanks. Who are you? \n";
                usleep(2000000);
                cout << name + ": My name is " + name + ", nice to meet you. What's your name? \n";
                usleep(2000000);
                cout << "Boy: " + boyname + ". \n";
                usleep(2000000);
                cout << name + ": \n";
                cout << 
                "1. Hi " + boyname + ", I was over there and your handsomeness caught my eyes. Do you have a girlfriend? \n" <<
                "2. You look very beautiful today, " + boyname + ". \n" <<
                "3. I want to fuck you. \n";
                cin >> temp;
                while (flag2) {
                    if ((temp == "1") || (temp == "1.")) {
                        flag2 = false;
                        cout << "\n";
                        cout << boyname + ": Aww, thank you! I don't have a girlfriend. \n";
                        usleep(2000000);
                        cout << name + ": Could I get your WeChat then? \n";
                        usleep(2000000);
                        cout << boyname + ": No problem. Here! \n" << endl;
                        usleep(2000000);

                        cout << "You successfully got the boy's WeChat. \n";
                        usleep(2000000);
                        cout << "Charisma +30. \n" << endl;
                        usleep(2000000);
                        c = c + 30;
                        if (c > 100) {
                            c = 100;
                        }
                        mock(name, p1, p2, p3, k, c);
                    }
                    else if ((temp == "2") || (temp == "2.")) {
                        flag2 = false;
                        cout << "\n";
                        cout << boyname + ": I don't really like it when people call me beautiful, but thanks. \n";
                        usleep(2000000);
                        cout << name + ": Could I get your WeChat? \n";
                        usleep(2000000);
                        cout << boyname + ": No, sorry, I have a girlfriend. \n" << endl;
                        usleep(2000000);

                        cout << "You did not get the boy's WeChat. \n";
                        usleep(2000000);
                        cout << "Charisma +10. \n" << endl;
                        usleep(2000000);
                        c = c + 10;
                        mock(name, p1, p2, p3, k, c);
                    }
                    else if ((temp == "3") || (temp == "3.")) {
                        flag2 = false;
                        cout << "\n";
                        cout << boyname + ": What the fuck? Are you fucking stupid? Fuck no, get away from me! \n" << endl;
                        usleep(2000000);

                        cout << "Charisma -100000000000. \n" << endl;
                        usleep(2000000);
                        c = c - 100;
                        if (c < 0) {
                            c = 0;
                        }
                        mock(name, p1, p2, p3, k, c);
                    }
                    else {
                        cout << "\n" << "Choose from the choices given please. (i.e. 1) \n" << endl;
                        usleep(2000000);
                    }
                }
            }
            else if ((temp == "2") || (temp == "2.")) {
                flag = false;
                cout << "\n";
                cout << "Charisma: +0. \n" << endl;
                usleep(2000000);
                mock(name, p1, p2, p3, k, c);
            }
            else if ((temp == "3") || (temp == "3.")) {
                flag = false;
                cout << "\n";
                cout << "The boy looks at you, walks over to you, and tells you to fuck off. \n";
                usleep(2000000);
                cout << "Charisma -100000000000. \n" << endl;
                usleep(2000000);
                c = c - 100;
                if (c < 0) {
                    c = 0;
                }
                mock(name, p1, p2, p3, k, c);
            }
            else {
                cout << "\n" << "Choose from the choices given please. (i.e. 1) \n" << endl;
                usleep(2000000);
            }
        }
    }
}

//Story 1-1
void choice1_1(string name, string p1, string p2, string p3, int k, int c) {
    //p1 = he
    //p2 = himself
    //p3 = his
    int temp;
    bool flag = true;

    //Print stats
    printstats(name, k, c);

    while (flag) {
        cout << "On a scale of 1 - 10, how hard does " + name + " study for " + p3 + " mocks? \n";
        cin >> temp;
        if (temp == 10) {
            flag = false;
            cout << "\n";
            cout << "Due to sleeping too little, " + name + " died of a heart failure while looking at Physics Past Papers. \n" << endl;
            usleep(2000000);
            cout << "Game over. \n";
            usleep(2000000);
            cout << "Type any letter to exit app. \n";
            cin >> temp;
        }
        else if (7 <= temp <= 9) {
            flag = false;
            cout << "\n";
            cout << name + " studied very hard and improved " + p3 + " knowledge a lot. \n" << endl;
            usleep(2000000);
            cout << "Knowledge: +40. Charisma: -40. \n" << endl;
            usleep(2000000);
            k = k + 40;
            c = c - 40;
            side_rizzler(name, p1, p2, p3, k, c);
        }
        else if (4 <= temp <= 6) {
            flag = false;
            cout << "\n";
            cout << name + " studied decently for " + p3 + " exam and improved " + p3 + " knowledge a normal amount. \n" << endl;
            usleep(200000);
            cout << "Knowledge: +30. Charisma: -20";
            usleep(2000000);
            k = k + 30;
            c = c - 20;
            side_rizzler(name, p1, p2, p3, k, c);
        }
        else if (2 <= temp <= 3) {
            flag = false;
            cout << "\n";
            cout << name + " studied a small amount for " + p3 + " exam. Only a small amount of knowledge is improved. \n" << endl;
            usleep(200000);
            cout << "Knowledge: +10. Charisma: -10";
            usleep(2000000);
            k = k + 10;
            c = c - 10;
            side_rizzler(name, p1, p2, p3, k, c);
        }
        //Only route to best ending only if +30 in rizzler mission
        else if (temp == 1) {
            cout << "\n";
            cout << name + " studied too little. Knowledge did not improve. \n" << endl;
            usleep(200000);
            cout << "Knowledge: +0. Charisma: +0";
            usleep(2000000);
            side_rizzler(name, p1, p2, p3, k, c);
        }
        else {
            cout << "Please choose a number between 1 and 10. \n";
            usleep(1000000);
        }
    }
}

//Story 1-2
void choice1_2(string name, string p1, string p2, string p3, int k, int c) {
    //p1 = he
    //p2 = himself
    //p3 = his
    string temp;
    bool flag = true;

    //Print stats
    printstats(name, k, c);

    cout << name + " plays videogames all two weeks. \n";
    usleep(2000000);
    cout << "It is now the last day before the exams and " + name + " feels a lot of pressure. \n";
    usleep(2000000);
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
            cout << "Knowledge: +20. Charisma: +0. \n";
            usleep(2000000);
            k = k + 20;
            side_rizzler(name, p1, p2, p3, k, c);
        }
        else if ((temp == "2") || (temp == "2.")) {
            flag = false;
            cout << "\n";
            cout << "Knowledge: +0. Charisma: +10. \n";
            usleep(2000000);
            c = c + 10;
            side_rizzler(name, p1, p2, p3, k, c);
        }
        else if ((temp == "3") || (temp == "3.")) {
            flag = false;
            cout << "\n";
            cout << name + " chooses to end " + p2 + ". \n" << endl;
            usleep(2000000);
            cout << "Game over. \n" << endl;
            usleep(3000000);
            cout << "Type any letter to exit app. \n";
            cin >> temp;
        }
        else {
            cout << "\n" << "Choose from the choices given please. (i.e. 1) \n" << endl;
            usleep(1000000);
        }
    }
}

//Choice 1: IB Adventure
void choice1(string name, string p1, string p2, string p3) {
    //p1 = he
    //p2 = himself
    //p3 = his
    int knowledgenum = 50;
    int charismanum = 50;
    string temp;
    bool flag = true;
    
    cout << name + " is a Year 13 IB Student at an International School in Shanghai. \n";
    usleep(2000000);
    cout << name + " takes Physics, Math AA, Computer Science (HL). English A, Chinese B, Economics (SL). \n";
    usleep(2000000);
    cout << name + " isn't the best student in their class, but " + name + " tries " + p3 + " best. \n" << endl;
    usleep(2000000);

    //Print stats
    printstats(name, knowledgenum, charismanum);

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
            choice1_1(name, p1, p2, p3, knowledgenum, charismanum);
        }
        else if ((temp == "2") || (temp == "2.")) {
            flag = false;
            cout << "\n";
            cout << "Knowledge: -50. Charisma: +20 \n" << endl;
            usleep(2000000);
            knowledgenum = knowledgenum - 50;
            charismanum = charismanum + 20;
            choice1_2(name, p1, p2, p3, knowledgenum, charismanum);
        }
        else if ((temp == "3") || (temp == "3.")) {
            flag = false;
            bool flag2 = true;
            cout << "\n" << endl;
            while (flag2) {
                cout << "The next week arrives. Does " + name + " actually start studying? \n";
                cout << "Y (Yes) or N (No) \n";
                cin >> temp;
                if ((temp == "Y") || (temp == "y")) {
                    flag2 = false;
                    cout << "\n" << endl;
                    cout << "Knowledge: +20. Charisma: -20 \n" << endl;
                    usleep(2000000);
                    knowledgenum = knowledgenum + 20;
                    charismanum = charismanum - 20;
                    side_rizzler(name, p1, p2, p3, knowledgenum, charismanum);
                }
                else if ((temp == "N") || (temp == "n")) {
                    flag2 = false;
                    bool flag3 = true;
                    cout << "Knowledge: -30. Charisma: +10; \n" << endl;
                    usleep(2000000);
                    knowledgenum = knowledgenum - 30;
                    charismanum = charismanum + 10;
                    cout << "It is the last day before the mock exams, does " + name + " study a little bit? \n";
                    cout << "Y (Yes) or N (No) \n";
                    cin >> temp;
                    while (flag3) {
                        if ((temp == "Y") || (temp == "y")) {
                            flag3 = false;
                            cout << "\n";
                            cout << "Knowledge: +10. Charisma: +0 \n" << endl;
                            usleep(2000000);
                            knowledgenum = knowledgenum + 10;
                            side_rizzler(name, p1, p2, p3, knowledgenum, charismanum);
                        }
                        else if ((temp == "N") || (temp == "n")) {
                            flag3 = false;
                            cout << "Knowledge: -10. Charisma: +10; \n" << endl;
                            usleep(2000000);
                            knowledgenum = knowledgenum - 10;
                            charismanum = charismanum + 10;
                            side_rizzler(name, p1, p2, p3, knowledgenum, charismanum);
                        }
                        else {
                            cout << "\n" << "Choose from the choices given please. (i.e. Y) \n" << endl;
                            usleep(1000000);
                        }
                    }
                }
                else {
                    cout << "\n" << "Choose from the choices given please. (i.e. Y) \n" << endl;
                    usleep(1000000);
                }
            }
        }
        else {
            cout << "\n" << "Choose from the choices given please. (i.e. 1) \n" << endl;
            usleep(1000000);
        }
    }
}

//Provide choices of story, jump to story after choice.
void start(string name, string temp, string p1, string p2, string p3) {
    bool flag = true;
    string choice = temp;

    cout << "Welcome, " + name + "\n" << endl;
    usleep(1000000);

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
            usleep(1000000);
        }
        else if ((choice == "3") || (choice == "3.")) {
            cout << "\n" << "Unavailable currently, please choose another adventure. \n" << endl;
            usleep(1000000);
        }
        else {
            cout << "\n" << "Choose from the choices given please. (i.e. 1) \n" << endl;
            usleep(1000000);
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
    usleep(1000000);
    cout << "\n";
    cout << "Please enter your character's name: ";
    cin >> cname;
    cout << "\n";
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
            cout << "Please type a letter from the above selection. (i.e. 'm' for male) \n";
        }
    }
    cout << "\n";
    start(cname, temp, pronoun, pronoun2, pronoun3);
}