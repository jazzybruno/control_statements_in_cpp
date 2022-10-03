//
// Created by djb on 10/1/22.
//

#include <iostream>
using namespace std;

int starsFunction(){
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < i; ++j) {
            cout<<"*";
        }
        cout<<"\n";
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = i; j > 0; --j) {
            cout<<"#";
        }
        cout<<"\n";
    }
}
