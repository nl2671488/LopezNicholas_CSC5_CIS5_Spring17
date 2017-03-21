/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on February 14, 2017, 10:10 PM
 * Purpose:  To calculate a change in salary.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float PrevSal;
    float payInc = .076;
    float NewSal;
    float NewMnth;
    float Mnth = 12;
    
    //Input data
    cout<<"What was your initial yearly salary?"<<endl;
    cin>>PrevSal;

    //Map inputs to outputs or process the data
    NewSal = PrevSal + (PrevSal*payInc);
    NewMnth = NewSal/Mnth;
    //Output the transformed data
    cout<<"If your initial salary was "<<PrevSal<<" Then, "<<endl;
    cout<<"your new Salary would be "<<NewSal<<endl;
    cout<<"Every month you could get a check for roughly "<<NewMnth<<endl;

    //Exit stage right!
    return 0;
}

