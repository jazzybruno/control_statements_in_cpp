
#include <iostream>
using namespace std;

int swap (int num1 , int num2) {
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"The new value of the first number is: " << num1 <<endl;
    cout<<"The new value of the second number is: " <<num2;
}

int main () {
    int num1 , num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"The first number is: " <<num1 <<endl;
    cout<<"The second name is: " <<num2 <<endl;
    swap(num1 , num2);
}