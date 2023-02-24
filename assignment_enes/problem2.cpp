#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data=0)
    {
        this->data=data;
        next=NULL;
    }
};

class Queue
{
private:
    Node *front_;
    Node *rear_;
public:
    Queue()
    {
        front_=NULL;
        rear_=NULL;
    }
    bool empty()
    {
        return front_ == NULL;
    }
    void push(int data)
    {
        if(empty())
        {
            front_=new Node(data);
            rear_=front_;
        }
        else
        {
            rear_->next=new Node(data);
            rear_=rear_->next;
        }
    }
    void pop()
    {
        int front;
        front_ = front_->next;
    }

    int front()
    {
        return this->front_->data;
    }

    int rear()
    {
        return this->rear_->data;
    }

    void print()
    {
        Node *temp=front_;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};


Queue q;

void add_to_queue(int num) {
    Queue tempQueue;
    bool added = false;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (!added && current > num) {
            tempQueue.push(num);
            added = true;
        }

        tempQueue.push(current);
    }
    if (!added) {
        tempQueue.push(num);
    }
    q = tempQueue;
}



int main()
{
    q.push(4);
    q.push(7);
    q.push(20);
    q.push(40);
    q.print();cout<<endl;

    add_to_queue(6);
    q.print();
    return 0;
}
