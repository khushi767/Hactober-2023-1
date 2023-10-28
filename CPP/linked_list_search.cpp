#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Add a new node to the end of the linked list
    void append(int value) {
        Node* new_node = new Node(value);
        if (head == nullptr) {
            head = new_node;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new_node;
        }
    }

    // Display the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Perform binary search in the linked list
    Node* binarySearch(int target) {
        Node* left = head;
        Node* right = nullptr;

        while (left != right) {
            Node* mid = left;
            int count = 0;
            while (mid != right) {
                mid = mid->next;
                count++;
            }

            for (int i = 0; i < count / 2; i++) {
                mid = mid->next;
            }

            if (mid->data == target) {
                return mid;
            } else if (mid->data < target) {
                left = mid->next;
            } else {
                right = mid;
            }
        }

        return nullptr;
    }
};

int main() {
    LinkedList list;
    list.append(1);
    list.append(
