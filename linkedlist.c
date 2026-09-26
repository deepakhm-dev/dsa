#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node *head=NULL;
    struct Node *newnode;
    struct Node *temp=NULL;
    int n,value;
    printf("enter the number of nodes you want: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the value : \n");
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
        
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }

    
    temp=head;

    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}