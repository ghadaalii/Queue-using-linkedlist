#include <iostream>
using namespace std;
#include <bits/stdc++.h>

class Node{
public:
    int data;
    Node *next ;
    Node(){
        int data=0 ;
        next = NULL;
    }
};

class Queue{
public:
    Node *front = new Node();
    Node *rear = new Node();

    Queue(){
        front = rear = NULL;
    }

    bool isEmpty(){
        return (front == NULL);
    }

    void display(){
        Node *temp = front;
        while(temp != NULL){
            cout << temp -> data <<" ";
            temp = temp -> next;
        }
        cout << endl;
    }

    void Enqueue(int item){
        Node *newnode = new Node();
        newnode -> data = item ;
        if(isEmpty())
            front = rear = newnode;
        else{
            rear -> next = newnode;
            rear = newnode;
        }
    }

    int dequeue(){
        int value = -1;
        if(isEmpty())
            cout << "Queue if empty ;(\n";
        else if(front == rear){
            delete front;
            front = rear = NULL;
        }else{
            
        }
    }

};


int main() {
    Queue que;
    int numOfItems;
    cout << "Enter the numbers of item to enqueue \n";
    cin >> numOfItems;
    for(int i = 0 ; i < numOfItems ; i++){
        int item;
        cout << "Enter items to enqueue\n";
        cin >> item;
        que.Enqueue(item);
    }
    cout << "Items in queue \n";
    que.display();
}
