#include <stdio.h>
#include <iostream>
using namespace std;
#include "sample_class.h"



int main(void){

    Student Kim;
    Student Teson(10, 23);
    Teson.show();

    Student *p[2];
    p[0] = &Teson;
    p[1] = &Kim;
    for (int i = 0; i < 2; i++){
        (*p[i]).hello();
    };

    Teson.setPass(4126);
    int pass = Teson.getPass();

    Student a(100, 20);
    Student b = a;
    cout << a.num << endl;
    cout << b.num << endl;

    Teson.hello();
    Teson.hello("teson");

    Seitokai Gold;
    Gold.hello();
    Gold.Student::hello();

    Children teson;
    teson.show();

    Point p1(20, 20);
    Point p2(30, 30);
    Point p3(0, 0);
    p3 = p1 + p2;
    cout << p3.x << endl;
    cout << p3.y << endl;


    return 0;
};
