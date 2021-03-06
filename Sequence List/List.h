//
// Created by 张国梁 on 2018/8/5.
//

#ifndef SHUNXUBIAO_LIST_H
#define SHUNXUBIAO_LIST_H

#include "Coordinate.h"

class List {

public:
    List(int size);
    ~List();
    void ClearList();
    bool ListEmpty();
    bool GetElem(int i, Coordinate *e);
    int LocateElem(Coordinate *e);
    int ListLength();
    bool PriorElem(Coordinate *currentElem, Coordinate *preElem);
    bool NextElem(Coordinate *currentElem, Coordinate *nextElem);
    void ListTraverse();
    bool ListInsert(int i, Coordinate *e);
    bool ListDelete(int i, Coordinate *e);

private:
    Coordinate *m_pList;
    int m_iSize;
    int m_iLength;
};


#endif //SHUNXUBIAO_LIST_H
