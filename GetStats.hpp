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

    int* getStats() const{
        Node* it = head;
        int* output = new int[3];
        output[0] = 0;
        output[1] = 0;
        output[2] = 0;
        if (it == nullptr)
            return output;

        int sum = 0;
        int count = 0;
        while (it != nullptr) {
            sum += it->data;
            count++;
            if (it->data > output[1]) output[1] = it->data;
            it = it->next;
        }
        it = head;
        output[0] = output[1];
        while (it != nullptr) {
            if (it->data < output[0]) output[0] = it->data;
            it = it->next;
        }

        output[2] = sum / count;

        return output;
    }
    

private:
    Node* head = nullptr;
};
