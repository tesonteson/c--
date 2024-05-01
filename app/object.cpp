#include <stdio.h>
#include <iostream>
using namespace std;
#include "sample_class.h"



int main(void){

    Student Kim;
    Student Teson(10, 23);
    Teson.show();

    Student *p;
    p = &Teson;
    cout << (*p).year << "\n";

    Teson.setPass(4126);
    int pass = Teson.getPass();

    Student a(100, 20);
    Student b = a;
    cout << a.num << endl;
    cout << b.num << endl;

    Seitokai Gold;

    Children teson;
    teson.show();

    return 0;
};
