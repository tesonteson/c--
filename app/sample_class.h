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
        Student();
        Student(int x, int y);
        Student(const Student &obj);
        ~Student();
};

Student::Student(){
    cout << "値無しのオブジェクトを作成しました" << endl;
};

Student::Student(int x, int y){
    cout << "値入りのオブジェクトを作成しました" << endl;
    num = x;
    year = y;
    cout << "numに" << num << "を代入しました" << endl;
    cout << "yearに" << year << "を代入しました" << endl;
};

Student::Student(const Student &obj){
    cout << "コピーコンストラクタ発動です" << endl;
    num = obj.num;
};

Student::~Student(){
    cout << "デストラクタです" << endl;
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
