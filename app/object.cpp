#include <stdio.h>
#include <iostream>
using namespace std;
#include "sample_class.h"



int main(void){

    Student Teson = {10, 23};
    Teson.show();

    Student *p;
    p = &Teson;
    cout << (*p).year << "\n";

    Student students[3] = {
        {10, 30},
        {10, 40},
        {10, 50}
    };
    int i;
    for (i=0; i < 3; i++){
        students[i].show();
    };

    return 0;
};
