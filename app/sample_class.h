#include <iostream>
using namespace std;

class Student {
public:
    int num;
    int year;
    static int grade;
    void show();
    void setPass(int x);
    int getPass();
    Student();
    Student(int x, int y);
    Student(const Student &obj);
    ~Student();
private:
    int pass;
protected:
    bool right;
};

int Student::grade = 5;

Student::Student() : num(0), year(0), pass(0), right(false) {
    cout << "値無しのオブジェクトを作成しました" << endl;
}

Student::Student(int x, int y) : num(x), year(y), pass(0), right(false) {
    cout << "値入りのオブジェクトを作成しました" << endl;
}

Student::Student(const Student &obj) : num(obj.num), year(obj.year), pass(obj.pass), right(obj.right) {
    cout << "コピーコンストラクタ発動です" << endl;
}

Student::~Student() {
    cout << "デストラクタ発動です" << endl;
}

void Student::setPass(int x) {
    pass = x;
}

int Student::getPass() {
    cout << "パスワード：" << pass << endl;
    return pass;
}

void Student::show() {
    cout << "番号:" << num << "\n";
    cout << "年齢:" << year << "\n";
}

class Seitokai : public Student {
public:
    Seitokai();
    Seitokai(int x, int y);
};

Seitokai::Seitokai() : Student() {
    cout << "値なしの生徒会のコンストラクタ\n";
}

Seitokai::Seitokai(int x, int y) : Student(x, y) {
    cout << "値ありの生徒会のコンストラクタ\n";
}



// 多重継承（あまり使わない）
class Human{
    public:
        void show();
};

void Human::show(){
    cout << "Human class" << endl;
};

class Mother : public virtual Human {};
class Father : public virtual Human {};

class Children : public Mother, public Father{};
