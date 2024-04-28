#include <stdio.h>
#include <iostream>
using namespace std;



// 構造体
struct Fruits{
    char name[128];
    int price;
    int zaiko;
};


struct Student{
    int year;
    char name[64];
    double weight;
    double height;
}Tarou, Hanako;


typedef struct{
    int year;
    int month;
    int day;
}Datetime;


void print_structure(struct Student person){
    printf("年齢:%d\n", person.year);
    printf("名前:%s\n", person.name);
    printf("体重:%f\n", person.weight);
    printf("身長:%f\n", person.height);
    return;
};


void replace(int *x){
    *x = 100;
};


void keisan(int x, int y, int *tasizan, int *hikizan){
    *tasizan = x + y;
    *hikizan = x - y;
};


int main(void){
    // 参照元渡し
    int apple = 10;
    replace(&apple);
    cout << apple << "\n";

    // 無理くり関数から複数の値を受け取る
    int num1 = 30;
    int num2 = 10;
    int tasizan = 0;
    int hikizan = 0;
    keisan(num1, num2, &tasizan, &hikizan);
    printf("足し算の結果：%d\n", tasizan);
    printf("足し算の結果：%d\n", hikizan);

    // 構造体の呼び出し
    struct Fruits store = {"apple", 150, 50};
    struct Fruits *p;
    p = &store;
    printf("名前:%s\n", (*p).name);
    printf("金額:%d\n", p->price);
    printf("在庫:%d\n", (*p).zaiko);

    Tarou.year = 10;
    Hanako.year = 12;
    struct Student Teson = {23, "teson", 73.0, 180.0};
    printf("%d\n", Tarou.year);
    printf("%d\n", Hanako.year);
    print_structure(Teson);

    struct Student students[3] = {
        {23, "teson", 73.0, 180.0},
        {23, "teson", 73.0, 180.0},
        {23, "teson", 73.0, 180.0}
    };

    // typedefで簡略化
    typedef unsigned int seisu;
    seisu num = 10;
    Datetime today = {2024, 4, 26};

    return 0;
};
