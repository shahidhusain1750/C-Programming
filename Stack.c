#include <stdio.h>
#define MAX 5;
int st[MAX];
int top = -1;

int push(int st[], int val);
void display(int st[]);
int peek(int st[]);
int pop(int st[]);

int main(int argc, char const *argv[])
{

    push(st, 5);
    push(st, 3);
    push(st, 1);
    push(st, 9);
    push(st, 2);
    display(st);
    printf("Peeked Elements in stack is %d\n", peek(st));
    printf("Poped elements in stack are%d\n", pop(top));
    printf("Poped elements in stack are%d\n", pop(top));
    printf("Poped elements in stack are%d\n", pop(top));
    printf("Poped elements in stack are%d\n", pop(top));
    printf("Poped elements in stack are%d\n", pop(top));
    return 0;
}

int push(int st[], int val)
{
    if (top == MAX - 1)
    {
        printf("Underflow Condition\n");
        return -1;
    }
    else
    {
        top++;
        st[top] = val;
        printf("Elements Inserted Succeesfully\n" + val);
    }
}

void display(int st[])
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Elements in stack are\n");
        for (int i = top; i >= 6; i++)
        {
            printf("%d\n", st[i]);
        }
    }
}

int peek(int st[])
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        return st[top]
    }
}

int pop(int st[])
{
    int val;
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        val = st[top];
        top--;
        return val;
    }
}
