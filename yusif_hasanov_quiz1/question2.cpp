#include <iostream>

using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node(int data)
        {
            this->val = data;
            this->next = NULL;
        }
};

float averageOfValues(Node* head)
{
    float sum=0;
    int count=0;
    while(head){
        sum+=head->val;
        head=head->next;
        count++;
    }
    return sum/count;
}

int main(){
    Node *head=new Node(1);
    Node *temp=head;
    for(int i=2;i<=5;i++){
        temp->next=new Node(i);
        temp=temp->next;
    }
    cout<<averageOfValues(head)<<endl;
    
    while(head){
        temp=head->next;
        delete head;
        head=temp;
    }

    return 0;
}