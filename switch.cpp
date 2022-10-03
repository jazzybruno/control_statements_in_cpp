//
// Created by djb on 10/1/22.
//

#include <iostream>
using namespace std;

int switcher() {
    int score;
    cout<<"Enter your score out of 20: ";
    cin>>score;
    cout<<"Score Entered: " <<score << "/20" <<endl;
    switch (score) {
        case 19:
            cout<<"You have passed";
            break;
        case 18:
            cout<<"You have passed";
            break;
        case 17:
            cout<<"You have passed";
            break;
        case 16:
            cout<<"You have passed";
            break;
        case 15:
            cout<<"You have passed";
            break;
        default:
            cout<<"You have Failed";
            break;
    }
}
