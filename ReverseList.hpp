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
    
    LinkedList reverseList() const {
        LinkedList output;
        if (head == nullptr) return output;
        Node* prev = nullptr;
        Node* cur = head;
        Node* after = head->next;

        while (after != nullptr) {
            cur->next = prev;
            prev = cur;
            cur = after;
            after = after->next;
        }
        cur->next = prev;
    }

    Node* head = nullptr;
};
