/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on May 4, 2017, 2:07 PM
 * Purpose:  Converts Weight or length
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>   //random number generator
#include <cmath>     //math library
#include <iomanip>   //Format ouput
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVLBKG = 2.2046f;   //Amount of pounds in kilogram
const float CNVGMKG = 1000;       //Amount of grams in kilogram
const float CNVOZLB = 16;        //Amount of ounces in a pound
const float CNVMTFT = 0.3048f;   //Amount of meters in foot
const float CNVCTMT = 100;       //Amount of centimeters in meter
const float CNVINFT = 12;        //Amount of inches in a foot


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float lbs;     //feet
    float oz;     //inches
    float kilo;     //meters
    float gm;    //centimeters
    float ft;     //feet
    float in;     //inches
    float mt;     //meters
    float cnt;    //centimeters
    char restart; //End choice
    int choice;   //Beginning choice
    
    cout<<"--------------------------------"<<endl;
    cout<<"*  Press 1 to convert weight   *"<<endl;
    cout<<"*  Press 2 to convert length   *"<<endl;
    cout<<"--------------------------------"<<endl;
    cin>>choice;
    cout<<endl<<endl;
    
    if(choice==1){
        do{cout<<"---------------------------------------------------------------"<<endl;
    cout<<"*  Press 1 to convert from pounds/ounces to kilograms/grams   *"<<endl;
    cout<<"*  Press 2 to convert from kilograms/grams to pounds/ounces   *"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cin>>choice;
    cout<<endl<<endl;
    
    if(choice==1){
        do{
    //Input or initialize values Here
    cout<<"---------------------"<<endl<<endl;
    cout<<"How many pounds? ";
    cin>>lbs;
    cout<<endl<<endl<<"How many ounces? ";
    cin>>oz;
    cout<<endl;
    
    //Process/Calculations Here
    kilo=(lbs*CNVLBKG)+((oz/CNVOZLB)*CNVLBKG);
    gm=((lbs*CNVLBKG)+((oz/CNVOZLB)*CNVLBKG))*CNVGMKG;
    
    //Output Located Here
    cout<<lbs<<" pounds and "<<oz<<" ounces converts to "<<kilo<<" kilograms or "<<gm<<" grams"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
    //Exit
    return 0;
    }
    
    else if(choice==2){
    do{
    //Input or initialize values Here
    cout<<"---------------------"<<endl<<endl;
    cout<<"How many kilograms? ";
    cin>>kilo;
    cout<<endl<<endl<<"How many grams? ";
    cin>>gm;
    cout<<endl;
    
    //Process/Calculations Here
    lbs=(kilo/CNVLBKG)+((gm/CNVGMKG)/CNVLBKG);
    oz=((kilo/CNVLBKG)+((gm/CNVGMKG)/CNVLBKG))*CNVOZLB;
    
    //Output Located Here
    cout<<kilo<<" kilograms and "<<gm<<" grams converts to "<<lbs<<" pounds or "<<oz<<" ounces"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
    
    //Exit
    return 0;}
    
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
    //Exit
    return 0;
    }
    
    else if(choice==2){
    do{cout<<"---------------------------------------------------------------"<<endl;
    cout<<"*  Press 1 to convert from feet/inches to meters/centimeters  *"<<endl;
    cout<<"*  Press 2 to convert from meters/centimeters to feet/inches  *"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cin>>choice;
    cout<<endl<<endl;
    
    if(choice==1){
        do{
    //Input or initialize values Here
    cout<<"---------------------"<<endl<<endl;
    cout<<"How many feet? ";
    cin>>ft;
    cout<<endl<<endl<<"How many inches? ";
    cin>>in;
    cout<<endl;
    
    //Process/Calculations Here
    mt=(ft*CNVMTFT)+((in/CNVINFT)*CNVMTFT);
    cnt=((ft*CNVMTFT)+((in/CNVINFT)*CNVMTFT))*CNVCTMT;
    
    //Output Located Here
    cout<<ft<<" feet and "<<in<<" inches converts to "<<mt<<" meters or "<<cnt<<" centimeters"<<endl;
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
    //Exit
    return 0;
    }
    
    else if(choice==2){
    do{
    //Input or initialize values Here
    cout<<"---------------------"<<endl<<endl;
    cout<<"How many meters? ";
    cin>>mt;
    cout<<endl<<endl<<"How many centimeters? ";
    cin>>cnt;
    cout<<endl;
    
    //Process/Calculations Here
    ft=(mt/CNVMTFT)+((cnt/CNVCTMT)/CNVMTFT);
    in=((mt/CNVMTFT)+((cnt/CNVCTMT)/CNVMTFT))*CNVINFT;
    
    //Output Located Here
    cout<<mt<<" meters and "<<cnt<<" centimeters converts to "<<ft<<" feet or "<<in<<" inches"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
    
    //Exit
    return 0;}
    
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
    //Exit
    return 0;}
    
    else{
        cout<<"Not a valid input"<<endl;    }
}