#include <stdio.h>
#include <iostream>
using namespace std;
#include "sample_class.h"



int main(void){

    Student Teson;
    Teson.year = 23;
    Teson.num = 10;
    Teson.show();

    Student *p;
    p = &Teson;
    cout << (*p).year << "\n";

    Teson.setPass(4126);
    int pass = Teson.getPass();
    cout << pass << endl;

    return 0;
};
