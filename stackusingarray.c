#include<stdio.h>
#define size 2
void push(int);
void pop();
void display(); 
int stack[size],top=-1;
int main()
{
    int ch,data;
while(1)
  {
    printf("\n Menu 1.Push 2. Pop 3.Traverse");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1: printf("\n Enter data to be insert in stack");
                scanf("%d",&data);
                push(data);
                break;
        case 2: pop();
                break;
        case 3: display();
                break;
        default: printf("Wrong input");
    }
  } 
    return 0;
}
void push(int data)
{
    if(top==size-1)
    {
        printf("Stack is Full!!!!!");
    }
    else
    {
        top++;
        stack[top]=data;
        printf("\n Data inserted Successfully");
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\n stack is empty");
    }
    else
    {

    for(i=top;i>=0;i--)
    {
        printf("\t %d",stack[i]);
    }
    }
    
}

void pop()
{
    if(top==-1)
    {
        printf("\n Stack is empty!!!!!!");
    }
    else
    {
        printf("\n data deleted Succesfully:%d",stack[top]);
        top--;
    }
}