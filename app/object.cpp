#include <stdio.h>
#include <iostream>
using namespace std;
#include "sample_class.h"



int main(void){

    Student Kim;
    Student Teson(10, 23);
    Teson.year = 23;
    Teson.show();

    Student *p;
    p = &Teson;
    cout << (*p).year << "\n";

    Teson.setPass(4126);
    int pass = Teson.getPass();
    cout << pass << endl;

    Student a(100, 20);
    cout << a.num << endl;
    Student b = a;
    cout << a.num << endl;
    cout << b.num << endl;

    return 0;
};
