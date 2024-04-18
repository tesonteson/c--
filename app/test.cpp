//import streams
#include <iostream>
using namespace std;
#include <stdio.h>
#include <iomanip>
#include <string>


//call functions defined below main function
int nibai(int x);
int add_num(int x, int y);


//main function
int main() {
    //print
    printf("hello world!\n");

    //type
    int value = 100;
    double pi = 3.14;
    string name = "teson";

    //インクリメント、ディクリメント
    int x_increment = 10;
    int y_decrement = 10;
    x_increment ++;
    y_decrement --;

    //immutable variable
    const int const_value = 10;

    //input values from keyboard
    int input_value;
    cin >> input_value;

    //if
    int age = 23;
    if (age >= 0 && age < 20) {
        cout << "あなたは子供です。" << "\n";
    }
    else if (age >= 20 && age < 60) {
        cout << "あなたは大人です。" << "\n";
    }
    else if (age >= 60) {
        cout << "あなたは高齢者です。" << "\n";
    }
    else {
        cout << "あなたは何者ですか！？" << "\n";
    }

    //switch
    switch (age) {
        case 20:
            cout << "二十歳おめでとうございます！" << "\n";
            break;
        case 1000:
            cout << "千歳ですか？！" << "\n";
            break;
        default:
            cout << "あなたの歳は" << age << "です。" << "\n";
    }

    //for
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            cout << setw(3) << i*j;
        }
        cout << "\n";
    }

    //while
    int num = 1;
    int count = 0;
    while (num < 1000) {
        num *= 2;
        count++;
        cout << num << "\n";
    }

    //do while
    num = 0;
    do {
        cout << num << "\n";
        num += 1;
    } while (num < 5);

    //call functions
    int nibai_value = nibai(10);
    cout << nibai_value << "\n";

    int added_value = add_num(100,100);
    cout << added_value << "\n";

    //array
    int list[5] = {10,20,30,40,50};
    int index;
    for(index=0; index<5; index ++){
        cout << list[index] << "\n";
    }

    cout << "done!" << endl;

    return 0;
}


//other functions
int nibai(int x) {
    x *= 2;
    return x;
}


int add_num(int x, int y) {
    return x + y;
}

