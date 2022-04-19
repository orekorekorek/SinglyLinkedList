#pragma once
#include <iostream>
#include "Display.h"

using namespace std;

struct Node {
    Display d;
    Node* next;

    explicit Node(Display d) : d(d), next(nullptr) {}
};

class SinglyLinkedList {
private:
    Node* first;
    Node* last;  
public:
    SinglyLinkedList() : first(nullptr), last(nullptr) {}

    void clear();
    
    bool isEmpty();
    
    void append(Display d);
    
    void remove(Display d);
    
    void print();
    
    Node* operator[] (int32_t index);
};