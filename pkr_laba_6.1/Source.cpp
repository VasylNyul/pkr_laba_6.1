#include <iostream>

struct Elem
{
    Elem* link1;
    Elem* link2;
    int info;
};
int main()
{

    Elem* p = new Elem;//1
    p->info = 1; // 2
    p->link1 = new Elem; // 3
    p->link1->info = 2; // 4
    p->link1->link1 = p; // 5
    p->link1->link2 = new Elem; // 6
    p->link1->link2->info = 3; // 7
    p->link1->link1->link2 = p; // 8
    p->link1->link1->link1 = p->link1; // 9
    p->link2 = new Elem; // 10
    p->link2->info = 4; // 11
    p->link2->link1 = p; // 12
    p->link2->link2 = p->link1->link1; // 13

    delete p->link2; // �������� �����
    delete p->link1->link2;
    delete p->link1;
    delete p;

    return 0;
}