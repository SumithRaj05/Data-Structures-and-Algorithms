#include<iostream>

//class to create a node which further creates another node

class node{
    public:
        //data members
        int data;
        node *next;
        //constructor
        node(int ele){
            data = ele;
            next = NULL;
        }
};

void InsertAtHead(node *&head,int &ele){
    node *newnode = new node(ele);
    if(newnode==NULL)
        printf("memory is full\n");
    else{
        newnode->next=(head);
        (head) = newnode;
        printf("inserted element at head\n\n");
    }
}

void InsertAtPos(node *&head,int &ele,int &pos){
    node *newnode = new node(ele);
    node *temp = head;
    int current = 1;
    if(newnode == NULL){
        printf("memory is full\n");
    }else{
        while(current!=(pos-1) && pos>0){
            temp=temp->next;
            if(temp->next==NULL){
                printf("cannot be inserted\n\n");
                return;
            }
            current++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        printf("Inserted element at pos\n\n");
    }
}

void InsertAtTail(node *&head, int &ele){
    node* newnode = new node(ele);
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    newnode->next = NULL;
    temp->next = newnode;
    printf("Inserted element at tail\n\n");
}

void DeleteAtHead(node *&head){
    if(head==NULL){
        printf("no elements\n\n");
        return;
    }
    node *temp = head;
    head = head->next;
    delete(temp);
    printf("deleted element at head\n\n");
}

void DeleteByElement(node *&head, int &ele){
    if(head==NULL){
        printf("no elements\n\n");
        return;
    }
    node *temp = head;
    while(temp->next->data!=ele){
        if(temp->next==NULL){
            printf("no element found\n\n");
            return;
        }
        temp = temp->next;
    }
    node *del = temp->next;
    temp->next = temp->next->next;
    delete(del);
    printf("deleted node of element\n\n");
}

void display(node* &head){
    printf("Elements are:\n\n");
    node *temp = head;
    while(temp->next!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}

int main(){
    int choice,ele,pos;

    //initializing empty node
    
    node *head=NULL;

    while(1){
        printf("\n\n1.insert at head\n2.insert at pos\n3.insert at tail\n4.delete at head\n5.delete by ele\n6.display\n7.exit\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice){

            case 1:     //insert element at head
                printf("Enter element: ");
                scanf("%d",&ele);
                InsertAtHead(head,ele);
                break;

            case 2:     //insert element at specified position
                printf("Enter element: ");
                scanf("%d",&ele);
                printf("Enter position: ");
                scanf("%d",&pos);
                InsertAtPos(head,ele,pos);
                break;

            case 3:     //insert element at tail
                printf("Enter element: ");
                scanf("%d",&ele);
                InsertAtTail(head,ele);
                break;

            case 4:     //delete element at head
                DeleteAtHead(head);
                break;

            case 5:     //delete the specified element
                printf("Enter element: ");
                scanf("%d",&ele);
                DeleteByElement(head,ele);
                break;

            case 6:     //diplays the list
                display(head);
                break;

            case 7:
                return 0;

            default:
                printf("Invalid operator\n");
                break;
        }
    }
}