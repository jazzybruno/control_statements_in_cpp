//
// Created by djb on 10/1/22.
//

#include <iostream>
using namespace std;

int multipleFunction() {
    cout<<"This is a program that returns all multiples of three" <<endl;
    int num = 0;
    while (num <= 20){
        if(num %3 == 0){
            cout<<"A Multiple of three: "<<num <<endl;
        }else{
            cout<<"Not A Multiple of three: "<<num <<endl;
        }
        num++;
    }
}
