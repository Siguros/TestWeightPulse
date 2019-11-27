#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){

    // int a= 102
    int b= 0;
    int a=2;
    string filename;
    char filenamea[10];
    char filenameb[10];
    sprintf(filenamea,"%d",a);
    filename.append(filenamea);
    sprintf(filenamea,"%d",b);
    filename.append(filenamea);
    // filename.append(".csv");
    cout<< filename<<endl;
    ofstream myfileout;
    myfileout.open(filename+".csv");
}