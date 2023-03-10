#include<iostream>
#define size 100

class Queue{

    //data members
    int *arr;
    int front, rear;
    public:

        //constructor
        Queue(){
            arr = new int[size];
            front = -1;
            rear = -1;
        }
        
        //member functions
        void push(int &ele){
            if(rear == size-1)
                printf("Queue is full\n");
            else{
                rear++;
                arr[rear]=ele;
                printf("inserted element\n");
            }
            if(front == -1)
                front++;
        }
        void pop(){
            if(front == -1 || front > rear)
                printf("Queue is empty\n");
            else{
                front++;
                printf("poped element\n");
            }
        }
        void display(){
            printf("Elements are:\n");
            int temp = front-1;
            while(temp<rear){
                temp++;
                printf("%d\t",arr[temp]);
            }
            printf("\n");
        }
};
int main(){
    //initialize empty queue
    Queue queue = Queue();
    int choice,ele;
    while(1){
        printf("\n1.push\n2.pop\n3.display\n4.exit\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice){

            case 1:     //push element at back of queue
                printf("Enter element: ");
                scanf("%d",&ele);
                queue.push(ele);
                break;

            case 2:     //pop element from front of queue
                queue.pop();
                break;

            case 3:     //displays queue
                queue.display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid element\n");
                break;
        }
    }
}