#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node
{
int data;
struct node*next;
};
struct node*first=NULL;
int main()
{
int choice;
while(1){
printf("\n***SINGLE LINKED LIST OPERATIONS:****\n");
printf("\n        MENU               \n");
printf("______________________\n");
printf("\n1.create     \n");
printf("\n2.display    \n");
printf("\n3.insert at the beginning  \n");
printf("\n4.insert at the end  \n");
printf("\n5.insert at specified position  \n");
printf("\n6.delete from beginning  \n");
printf("\n7.delete from the end   \n");
printf("\n8.delete from specified position  \n");
printf("\n9.exit    \n");
printf("\n---------------------------\n");
printf("enter your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();
break;
case 2:
display();
break;
case 3:
insert_begin();
break;
case 4:
insert_end();
break;
case 5:
insert_pos();
break;
case 6:
delete_begin();
break;
case 7:
delete_end();
break;
case 8:
delete_pos();
break;
case 9:
exit(0);
break;
default:
printf("\n wrong choice:\n");
break;
}//end of switch()
}
return 0;
}
void create()
{
struct node*temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\nout of memory space:\n");
exit(0);
}
printf("\nenter the data value for the node:\t");
scanf("%d",&temp->data);
temp->next=NULL;
if(first==NULL)
{
first=temp;
}
else
{
ptr=first;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
}
}
void display()
{
struct node*ptr;
if(first==NULL)
{
printf("\nlist is empty:\n");
return;
}
else
{
ptr=first;
printf(\n"The list elements are:\n");
while(ptr!=NULL)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}
}
}
void insert_begin()
{
struct node *temp;
temp=(struct node*)malloc9sizeof(struct node));
if(temp==NULL)
{
printf("\nout of memory space:\n");
return;
}
printf("\nEnter the data value for the node:\t");
scanf("%d",&temp->data);
temp->next=NULL;
if(first==NULL)
{
first=temp;
}
else
{
temp->next=first;
first=temp;
}
}
void insert_end()
{
struct node*temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
if (temp==NULL)
{
printf("\nout of memory space:\n");
return;
}
printf("\nEnter the data value for the node:\t");
scanf("%d",&temp->data);
temp->next=NULL;
if(first==NULL)
{
first=temp;
}
else
{
ptr=first;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
}
}
void insert_pos()
{
struct node*ptr,*temp;
inti,pos;
temp=(struct node*)malloc(sizeof(struct node));
if (temp==NULL)
{
printf("\nout of memory space:\n");
return;
}
printf("\nEnter the position for the new node to be inserted:\t");
scanf("%d",&pos);
print("\nEnter the data value of the node:\t");
scanf("%d",&temp->data);
temp->next=NULL;
if(pos==0)
{
temp->next=first;
first=temp;
}
else
{
for(i=0,ptr=first;i<pos-1;i++)
{
ptr=ptr->next;
if(ptr==NULL)
{
printf("\nPosition not found:[handle with care]\n");
return;
}
}
temp->next =ptr->next;
ptr->next=temp;
}
}
void delete_begin()
{
struct node*ptr;
if(ptr==NULL)
{
printf("\nList is empty:\n");
return;
{
else
}
ptr=first;
first=first->next;
printf("\nThe deleted element is:%d\t",ptr->data);
free(ptr);
}
}
void delete_end()
{
struct node*temp,*ptr;
if(first==NULL)
{
printf("\nList is empty:");
exit(0);
}
else if(first->next==NULL)
{
ptr=first;
first=NULL;
printf("\nThe deleted element is:%d\t",ptr->data);
free(ptr);
}
else
{
ptr=first;
while(ptr->next!=NULL)
{
temp=ptr;
ptr=ptr->next;
}
temp->next=NULL;
printf("\nThe deleted element is:%d\t",ptr->data);
free(ptr);
}
}
void delete_pos()
{
inti,pos;
struct node*temp,*ptr;
if(first==NULL)
{
printf("\nThe list is empty:\n");
exit(0);
}
else
{
printf("\nEnter the position of the node to be deleted:\t");
scanf("%d",&pos);
if(pos==0)
{
ptr=first;
first=first->next;
printf("\nThe deleted element is:%d\t",ptr->data);
free(ptr);
}
else
{
ptr=first;
for(i=0;i<pos;i++)
{
temp=ptr;
ptr=ptr->next;
if(ptr==NULL)
{
printf("\nPosition not found:\n");
return;
}
}
temp->next=ptr->next;
printf("\nThe deleted element is:%d\t";ptr->data);
free(ptr);
}
}
}













