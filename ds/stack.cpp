#include<iostream>
#define size 100
class Stack{

    //data members
    int *arr;
    int top;
    public:

        //constructor
        Stack(){
           arr = new int[size];
           top = -1; 
        }

        //member functions
        void push(int &ele){
            if(top==size-1)
                printf("Stack is full\n");
            else{
                top++;
                arr[top] =  ele;
                printf("inserted an element\n");
            }
        }
        void pop(){
            if(top==-1)
                printf("stack is empty\n");
            else{
                top--;
            }
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
    //initialize empty stack
    Stack stack = Stack();
    while(1){
        printf("1.push\n2.pop\n3.display\n4.exit\n\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice){

            case 1:     //push element on top of stack
                printf("Enter element: ");
                scanf("%d",&ele);
                stack.push(ele);
                break;

            case 2:     //pops element from top of the stack
                stack.pop();
                printf("poped an element.\n");
                break;

            case 3:     //displays the stack
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