#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next};

int main(){
struct node *head=NULL;
struct node *temp;
struct node *newnode,*prev;
int i,n,data,position;

printf("enter the no ofnode:");
scanf("%d", &n);

for(i=0;i<n;i++)
{
    newnode=(struct node*)malloc(sizeof(struct node));

    if(!newnode)
    {

        printf("memory allocation failed");
    }


        printf("enter the data :");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
       if(head == NULL){
        head=newnode;
       }

       else{
        temp->next=newnode;
       }
       temp=newnode;

}
//deleting at any specific position

printf("enter the position");
scanf("%d",&position);

if(position<1||position>n+1)
{
printf("invalid position");
}


if(position==1)
{
temp=head;
head=head->next;
printf("deleeted element is %d\n",temp->data);
free(temp);
}
else{
temp=head;
for(i=0;i<position-1;i++){
 prev=temp;
temp=temp->next;
}
prev->next=temp->next;
printf("deleeted element is %d\n",temp->data);
free(temp);
}

temp=head;
if(head ==NULL)
{
    printf("list is empty");
}

else{
    printf("linkedlist is:");
    while(temp!=NULL)
        {printf("%d->",temp->data);
    temp=temp->next;
}
printf("NULL");
}
return 0;
}
