#include <iostream>
#include "Coordinate.h"
using namespace std;

int main() {
    /*Coordinate *p1 = NULL;
    p1 = new Coordinate;
    Coordinate *p2 = new Coordinate();//堆实例化
    p1->m_iX = 10;
    p1->m_iY = 20;
    (*p2).m_iX = 30;
    (*p2).m_iY = 40;
    cout << p1->m_iX + (*p2).m_iX << endl;
    cout << p1->m_iY + (*p2).m_iY << endl;
    delete p1;
    p1 = NULL;
    delete p2;
    p2 = NULL;*/

    Coordinate p1; //栈实例化

    Coordinate *p2 = &p1;

    p2->m_iX = 10;
    p2->m_iY = 20;

    cout <<  p1.m_iX << endl;
    cout <<  p1.m_iY << endl;
    return 0;
}


