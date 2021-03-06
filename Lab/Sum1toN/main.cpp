/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on March 23, 2017, 11:45 AM
 * Purpose:  Sum of 1 to N
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    //Make sure 0<=n<=100
    int n = 100, sum = 0;
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    for (int i = 1; i < n;i ++ ){
        sum +=i;
    }
    //Output Located Here
    cout<<"The computed sum of 1 to "<<n<<" = "<<sum<<endl;
    cout<<"and "<<n<<"*("<<n<<"+1)/2 ="<<n*(n+1)/2<<endl;

    //Exit
    return 0;
}

