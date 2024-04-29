#include <iostream>
using namespace std;



class Student{
    private:
        int pass;
    public:
        int num;
        int year;
        void show();
        void setPass(int x);
        int getPass();
};

void Student::setPass(int x){
    pass = x;
};

int Student::getPass(){
    return pass;
};

void Student::show(){
    cout << "番号:" << num << "\n";
    cout << "年齢:" << year << "\n";
};
