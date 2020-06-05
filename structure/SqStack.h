#define MaxSize 50

typedef int Elemtype;

// 顺序栈定义
typedef struct{
    Elemtype data[MaxSize];
    int top;
} SqStack;

// 初始化
void InitStack(SqStack &S){
    S.top = -1;
}

// 判栈空
bool StackEmpyt(SqStack S){
    if(S.top == -1)
        return true;
    else
        return false;
}

// 进栈
bool Push(SqStack &S, Elemtype x){
    if(S.top == MaxSize-1)
        return false;
    S.data[++S.top] = x;
    return true;
}

// 出栈
bool Pop(SqStack &S, Elemtype &x){
    if(S.top == -1)
        return false;
    x = S.data[S.top--];
    return true;
}

// 读取栈顶元素
bool GetTop(SqStack S, Elemtype &x){
    if(S.top == -1)
        return false;
    x = S.data[S.top];
    return true;
}