#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
    Node
             (int x){
    
     * Reversealinkedlistiterative(Node * head ){
    Node*  temp = head;
    Node*  prev = NULL;
    Node*  next = NULL;
    while(temp != NULL){
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    head = prev;
    return head;
}

int main(){
    Node * head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    Node * temp = Reversealinkedlistiterative(head);
    for(;temp!= NULL;temp = temp->next){
        cout<<temp->data<<" ";
    }
    return 0;
}
