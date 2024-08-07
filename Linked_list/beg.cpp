#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* next;
};


node * create(vector<int>c){
    node * head=new node();
    head->data=c[0];
    head->next=NULL;
    node * ptr=head;
    for(int i=1;i<c.size();i++){
        node * temp=new node();
        temp->data=c[i];
        temp->next=NULL;
        ptr->next=temp;
        ptr=ptr->next;
    }
    return head;
}
//add a node after a given node
void insert(int val, int n, node * head){
    node * temp=new node();
    temp->data=val;
    temp->next=NULL;
    node * ptr=head;
    while(ptr->data=n){
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;
}

void delete_beg(int n,node * head){
    node * temp=head;
    //temp=head;
    head=head->next;
    free(temp);
}


void delete_mid(node * head){
    node * ptr=head;
    node * ptr2=head;
    while(ptr->next==NULL){
               
        ptr2=ptr2->next->next;
         ptr=ptr->next;
    }
    node * ptr3=ptr->next;
    ptr->data=ptr->next->data;
    ptr->next=ptr->next->next;
    free(ptr3);
}


void rev(node * head){
    node * ptr=head;
    node * nxt=NULL;
    node * prev=NULL;
    while(ptr!=NULL){
        nxt=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=nxt;
    }
}

int main()
{
    int n;
    vector<int>c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    node * first=create(c);
    insert(4,2,first);
    delete_beg(0,first);
    delete_mid(first);   
    rev(first);

}