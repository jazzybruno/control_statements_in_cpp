//
// Created by djb on 10/1/22.
//

#include <iostream>
using namespace std;

int multiple() {
    int number;
    cout<<"Enter a random number :  ";
    cin>>number;

    if(number % 3 == 0 && number % 5 == 0){
        cout<<"This is a multiple of three and five";
    }else if(number % 3 == 0 ){
        cout<<"This number is a multiple of three";
    }else if(number % 5 == 0){
        cout<<"This number is a multiple of five";
    }else{
        cout<<"This is neither a multiple of three or five";
    }
}
