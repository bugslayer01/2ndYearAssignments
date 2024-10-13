#include <iostream>
using namespace std;
class Node
{


public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        next = nullptr;
    }
};
class LinkedList {
   private:
    Node* head;   // Pointer to the first node of the list

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    void addhead(int val){
        Node* nn=new Node(val);

        if(head==nullptr)
        {
            head =nn;
        }
        Node *temp;

        nn->next=head;
        head=nn;

    }
    void addTail(){}
    void addafter(){}
    void delhead(){}
    void delTail(){}
    void delafter(){}
    void display(){
        if(head==nullptr){
            cout<<"list is empty"<<endl;
            return;
        }
        Node* temp=head;
        while(temp->next!=nullptr)
        {
            cout<<temp->val<<"->"<<endl;
            temp=temp->next;
        }
            cout<<"Null"<<endl;

    }
};