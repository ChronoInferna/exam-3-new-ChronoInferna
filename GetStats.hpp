#pragma once
struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    // Write your function here
    LinkedList reverseList() const {
        // implement your function here!
    }
    

private:
    Node* head = nullptr;
};
