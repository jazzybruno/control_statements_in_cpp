//
// Created by djb on 10/1/22.
//
#include <iostream>
using namespace std;

int randomNUmber () {
    int n;
    int temp , sum = 0;
    float average;
    cout<<"Enter the number of positive numbers you want: ";
    cin>>n;
    cout<<"The number you entered is: "<<n<<endl;

    //declining the number less than or equal to zero
    if(n <= 0){
        cout<<"Please enter a number greater than zero: ";
        cin>>n;
        cout<<"The new number you entered is: "<<n<<endl;
    }

    // the prompting
    for (int i = 0; i < n; ++i) {
        cout<<"Enter the number of " <<i << " here :  ";
        cin>>temp;
        if(temp == 1){
            sum += temp;
            break;
        }else{
            sum += temp;
        }
    }

    average = sum / n;
    cout<<"The sum of the numbers you entered is: " <<sum <<endl;
    cout<<"The average of the numbers you entered is: " <<average;
}