#include <iostream>
using namespace std;

class Node
{   public:
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{ public:
    Node* head;
    Node* tail;
    List()
    {
        head = NULL;
        tail = NULL;
    }
    //Push function
    void push_front(int val)
    {
        Node* newNode = new Node(val);
        if(head==NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    //print function
    void print_list()
    {
        Node* ptr = head;
      while(ptr != NULL)
      {
            cout<<ptr->data;
            ptr = ptr->next;
             if(ptr != NULL)  
             {
              cout << "->";
             }
      }     
    }
    //Pop function
    void push_back(int val)
    {
        Node* newNode = new Node(val);
        if(head==NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    //Pop front
    void pop_front()
    {  
        if(head == NULL)
        {
            cout<<"Link list is Empty!"<<endl;
            return;
        }
        Node* ptr = head;
        head = head->next;
        ptr->next = NULL;
        delete ptr;
        
    }
};
int main() {
    List ll;
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);
    ll.push_back(40);
    ll.push_back(50);
    ll.pop_front();
    ll.print_list();
    return 0;
}