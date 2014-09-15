//
//  main.cpp
//  func_overloading
//
//  Created by susan on 10/06/14.
//  Copyright (c) 2014 nyumbani. All rights reserved.
//

#include <iostream>

using namespace std;

void printNum(int x){
    
    cout << "this is an interger: " << x << endl;
}
void printNum(float x){
    cout << "this is an interger: " << x << endl;
}

//recursion
//remember base case in recurssive functions

int factorial(int x){
    if (x==1) {
        return 1;
    }else{
        return x*factorial(x-1);
    }
}

//pass array to function



int main()
{

    int a =10;
    float b =10.234;
    
    //arrays
    int size = 5;
    int value[size];
    
    for (int i =0; i<size; i++) {
        value[i]=i;
        cout << value[i] <<endl;
    }
    //pass array in to a function
    
    printNum(a);
    printNum(b);
    cout << factorial(5) << endl;
    
}

