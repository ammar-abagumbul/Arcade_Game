#include <iostream>
#include <stdlib.h>
#include "../include/invalid_input_screen.h"

// Library effective with Windows
#include <windows.h>

// Library effective with Linux
#include <unistd.h>

void printInvalidInput(){
    using namespace std;

    system("cls");
    
    cout<<"                                                                              "<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                             ---------------------------------------------------------------"<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                                             Invalid Input! Please try again!              "<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                             ---------------------------------------------------------------"<<endl;
    
    sleep(1.5);
}