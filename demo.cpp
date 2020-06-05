#include <iostream>
#include "structure/SqList.h"

using namespace std;

int main(){
    SqList L;
    InitList(L);

    ListInsert(L, 1, 1);
    cout << L.data[0] << endl;
    cout << L.length << endl;

    int e;
    ListDelete(L, 1, e);
    // cout << L.data[0] << endl;
    cout << L.length << endl;
    cout << e;
}



