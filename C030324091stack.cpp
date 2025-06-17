#include <iostream>
#define MAXSTACK 10
using namespace std;

typedef int ItemType;

typedef struct{
    ItemType Item[MAXSTACK];
    int Count;

}Stack;
    void InitializeStack(Stack* S);
    int Full(Stack* S);
    int Empty(Stack* S);
    void Pop(Stack* S, ItemType *x);
    void Push(ItemType x, Stack *S);

int main(){
    Stack Stack1;
    Stack* S = &Stack1;

    ItemType resultpop;

    InitializeStack(S);
    Push(13, S);
    Push(70, S);
    Push(80, S);
    Push(100, S);
    Pop(S, &resultpop);
    for(int i = (S -> Count) - 1; i >= 0; --i){
        cout << S -> Item[i] << endl;
    }

    return 0;
}