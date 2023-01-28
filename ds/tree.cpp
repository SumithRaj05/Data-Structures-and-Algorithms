#include<iostream>
class node{
    public:
        int data;
        node *left;
        node *right;
        node(int value){
            data = value;
            left = NULL;
            right = NULL;
        }
};

void insert(node* &root,int value){
    if(root==NULL){
        root = new node(value);
        printf("Element inserted\n");
        return;
    }else{
        if(value>=(root->data)){
            insert(root->right,value);
        }
        if(value<=(root->data)){
            insert(root->left,value);
        }
    }
}
int search(node* &root,int item,int level){
    if(item==(root->data)){
        printf("Element found at level %d\n",level);
        return 1;
    }else if(root->right==NULL || root->left==NULL){
        printf("element not found :(\n");
        return 0;
    }else{
        if(item>(root->data)){
            search(root->right,item,level+1);
        }
        if(item<(root->data)){
            search(root->left,item,level+1);
        }
    }   
}

void display(node* &root,int level){
    if(root==NULL)
        return;
    display(root->right,level+1);
    printf("level %d: %d\n",level,root->data);
    display(root->left,level+1);
}
int main(){
    int choice,ele;
    node *root = NULL;
    while(1){
        printf("\n1.insert\n2.delete\n3.search\n4.display\n5.exit\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter element: ");
                scanf("%d",&ele);
                insert(root,ele);
                break;
            case 2:
                printf("enter element to delete: ");
                scanf("%d",&ele);
                break;
            case 3:
                printf("enter element to search: ");
                scanf("%d",&ele);
                search(root,ele,0);
                break;
            case 4:
                display(root,0);
                break;
            case 5:
                return 0;
            default:
                printf("invalid element\n");
                break;
        }
    }
}