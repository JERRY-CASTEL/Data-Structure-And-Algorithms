#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

int NthNodefromendofLinkedList(Node * head,int k){
    Node * temp = head;
    Node * first = head;
    Node * second = head;
    for (int i=0 ;i <k ; i++) {
        second = second->next;
    }
    while(second != NULL){
        first = first->next;
        second = second->next;
    }
    return first->data;
}

int main(){
    Node * head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    cout<<endl<<NthNodefromendofLinkedList(head,1);
    return 0;   
}