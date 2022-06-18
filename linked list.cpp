
#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head;
    struct node *one;
    struct node *two;
    struct node *three;
    struct node *four;
    one =(struct node*)malloc(sizeof(struct node));
    two =(struct node*)malloc(sizeof(struct node));
    three =(struct node*)malloc(sizeof(struct node));
    four =(struct node*)malloc(sizeof(struct node));
    one->data=1;
    two->data=2;
    three->data=3;
    four->data=4;
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=NULL;
    head=one;
    struct node*tra;
    tra=head;
    while(tra!=NULL)
    {
        if(tra==NULL)
        {
            cout<<"Linkedlist is empty"<<endl;
        }
        else
        {
            cout<<tra->data<<endl;
            tra=tra->next;
        }
    }
    return 0;
}
