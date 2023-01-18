/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 3, 2022, 11:20 AM
 * Purpose:  All Projects start by using the CPP Template
 *           It shows where to place/code your projects
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    const int SIZE=10;
    char name[SIZE]="Mark";
    string sname="Mark";
    
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    
    //Display the outputs
    for(int i=0;i<=SIZE;i++){
        cout<<name[i]<<" "<<sname[i]<<endl;
    }

    //Exit the program
    return 0;
}