#include<iostream>
#define size 100
class Stack{
    int *arr;
    int top;
    public:
        Stack(){
           arr = new int[size];
           top = -1; 
        }
        void push(int ele){
            if(top==size-1)
                printf("Stack is full\n");
            else{
                arr[++top] = ele;
                printf("inserted an element\n");
            }
        }
        void pop(){
            if(top==-1)
                printf("stack is empty\n");
            else
                top--;
        }
        void display(){
            int temp;
            temp = top+1;
            while(temp){
                temp--;
                printf("%d\t",arr[temp]);
            }
            printf("\n");
        }
};
int main(){
    int choice,ele;
    Stack stack = Stack();
    while(1){
        printf("1.push\n2.pop\n3.display\n4.exit\n\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter element: ");
                scanf("%d",&ele);
                stack.push(ele);
                break;
            case 2:
                stack.pop();
                printf("poped an element.\n");
                break;
            case 3:
                printf("Elements are:\n");
                stack.display();
                break;
            case 4:
                return 0;
            default:
                printf("invalid input\n");
                break;
        }
    }
}