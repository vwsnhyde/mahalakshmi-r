#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node*prev;
int n;
struct node*next;
}
*h,*temp,*temp1,*temp2,*temp3;
void insert1();
void insert2();
void insert3();
void traversebeg();
void delete();
int count=0;
void main()
{
int ch;
h=NULL;
temp3=temp1=NULL;
do
{
printf("\n1-insert at beginning");
printf("\n2-insert at end");
printf("\n3-insert at position i");
printf("\n4-delete from a position");
printf("\n5-display from beginning");
printf("n6-exit");
printf("\nenter choice:");
scanf("%d",&ch);
switch(ch)
{
case1:
insert1();
break;
case2:
insert2();
break;
case3:
insert3();
break;
case4:
delete();
break;
case5:
traversebeg();
break;
case6:
break;
default:
printf("\n wrong choice menu");
}
}
while(ch!=6);
}
void create()
{
int data;
temp=(struct node*)malloc(1* sizeof(struct node));
temp->prev=NULL;
temp->next=NULL;
printf("\n enter value to node:");
scanf("%d",&data);
temp->n=data;
count++;
}
void insert1()
{
if(h==NULL)
{
create();
h=temp;
temp1=h;
}
else
{
create();
temp->next=h;
h->prev=temp;
h=temp;
}
}
void insert2()
{
if(h==NULL)
{
create();
h=temp;
temp1=h;
}
else
{
create();
temp1->next=temp;
temp->prev=temp1;
temp1=temp;
void insert3()
{
int pos,i=2;
printf("\n enter position to be inserted:");
scanf("%d",&pos);
temp2=h;
if((pos<1)||(pos>=count+1))
{
printf("\n empty list cannot insert other than 1st position");
return;
}
if((h==NULL)&&(pos!=1))
{
create();
h=temp;
temp1=h;
return;
}
else
{
while(i<pos)
{
temp2=temp2->next;
i++;
}
create();
temp->prev=temp2;
temp->next=temp2->next;
temp2->next->prev=temp;
temp2->next=temp;
}
}
void delete()
{
int i=1,pos;
printf("\n enter position to be deleted :");
scanf("%d",&pos);
temp2=h;
if((pos<1)||(pos>=count+1))
{
printf("\n error:empty list no elements to delete");
return;
}
if(h==NULL)
{
printf("\n error:empty list no elements to delete");
return;
}
else
{
while(i<pos)
{
temp2=temp2->next;
i++;
}
if(i==1)
{
if(temp2->next==NULL)
{
printf("node delete from list");
free(temp2);
temp2=h=NULL;
return;
}
}
if(temp2->next==NULL)
{
temp2->prev->next=NULL;
free(temp2);
printf("node deleted from list");
return;
}
temp2->next->prev=temp2->prev;
if(i==1)
h=temp2->next;
printf("\n node deleted");
free(temp2);
}
count--;
}
void traversebeg()
{
temp2=h;
if(temp2==NULL)
{
printf("list empty to display \n");
return;
}
printf("\n linked list elements from beginning :");
while(temp2->next!=NULL)
{
printf("%d",temp2->n);
temp2=temp2->next;
}
printf("%d",temp2->n);
}
