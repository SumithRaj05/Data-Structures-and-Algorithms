#include<iostream>
class node{
    public:
        int data;
        node *next;
        node(int ele){
            data = ele;
            next = NULL;
        }
};
void InsertAtHead(node *&head,int ele){
    node *newnode = new node(ele);
    if(newnode==NULL)
        printf("memory is full\n");
    else{
        newnode->next=(head);
        (head) = newnode;
        printf("inserted element at head");
    }
}
void InsertAtPos(node **head,int ele,int pos){
    node *newnode = new node(ele);
    node *temp = *head;
    int current = 0;
    if(newnode == NULL){
        printf("memory is full\n");
    }else{
        while(current!=pos){
            temp=temp->next;
            if(temp->next==NULL){
                printf("cannot be inserted\n");
                return;
            }
            current++;
        }
        newnode->next=temp;

    }
}
void display(node* &head){
    printf("Elements are:\n");
    node *temp = head;
    while(temp->next!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
int main(){
    int choice,ele,pos;
    node *head=NULL;
    while(1){
        printf("\n1.insert at head\n2.insert at pos\n3.delete at tail\n4.delete by ele\n5.display\n6.exit\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter element: ");
                scanf("%d",&ele);
                InsertAtHead(head,ele);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                display(head);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid operator\n");
                break;
        }
    }
}