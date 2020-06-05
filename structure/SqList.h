#define MaxSize 50

typedef int ElemType;

// 顺序表结构定义
typedef struct{
    ElemType data[MaxSize];
    int length;
} SqList;


// 顺序表基本操作

// 初始化顺序表
void InitList(SqList &L){
    L.length = 0;
}

// 插入操作
bool ListInsert(SqList &L, int i, ElemType e){
    if(i<1||i>L.length+1)
        return false;
    if (L.length>=MaxSize)
        return false;
    for(int j=L.length;j>=i;j--)
        L.data[j] = L.data[j-1];
    L.data[i-1] = e;
    L.length++;
    return true;
}

// 删除操作
bool ListDelete(SqList &L,int i, ElemType &e){
    if(i<1||i>L.length)
        return false;
    e = L.data[i-1];
    for(int j=i;j<L.length;j++)
        L.data[j-1]=L.data[j];
    L.length--;
    return true;
}

// 按值查找
int LocaleElem(SqList L, ElemType e){
    int i;
    for(i=0;i<L.length;i++)
        if(L.data[i]==e)
            return i+1; // 返回位序
    return 0;
}