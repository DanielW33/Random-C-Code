///////////////////////////////////////////////////
//	Fibonacci Sequence Nth term calculator
//	Created by Daniel Williams
//	Date: 5/2/2020
//
#include <iostream>
using namespace std;
typedef unsigned long long int FNum;

FNum fib(int);
unsigned long long int myarray[1000];

int main() {
    FNum  Vals, fibnum;
    cout << "Please Enter the nth position of the Fibonacci Sequence.";
    cin >>  Vals;
    fibnum = fib(Vals);
    cout << "\nThe Value of the Nth position of the fibonacci sequence is: " << fibnum;
    return 0;
}
FNum fib(int n){
    int i;
    if(n == 1){
        myarray[n] = 1;
        return 1;
    }
    else if(n == 0){
        myarray[n] = 0;
        return 0;
    }
    else{
        myarray[0] = 0;
        myarray[1] = 1;
        for(i = 2; i <= n; i ++) {
            myarray[i] = myarray[i - 1] + myarray[i - 2];
            cout <<"\nI:"<< i << " " <<myarray[i] << " " << myarray[i-1] << " " <<myarray[i - 2];
        }
        return myarray[n];
    }

}

