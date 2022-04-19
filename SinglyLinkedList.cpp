#include "SinglyLinkedList.h"

bool SinglyLinkedList::isEmpty() {
    return first == nullptr;
}
    
void SinglyLinkedList::append(Display d) {
    Node* p = new Node(d);
    if (isEmpty()) {
        first = p;
        last = p;
        return;
    }
    last->next = p;
    last = p;
}
    
void SinglyLinkedList::remove(Display d) {
    if (isEmpty()) return;
    if (first->d == d) {
        Node* p = first;
        first = p->next;
        delete p;
        return;
    }
    else if (last->d == d) {
        Node* p = first;
        while(p->next != last) p = p->next;
        p->next = nullptr;
        delete last;
        last = p;
        return;
    }
    Node* slow = first;
    Node* fast = first->next;
    while(fast && fast->d != d) {
        fast = fast->next;
        slow = slow->next;
    }
    if (!fast) {
        cout << "This element doesn't exist" << endl;
        return;
    }
    slow->next = fast->next;
    delete fast;
}
    
void SinglyLinkedList::print() {
    if (isEmpty()) return;
    size_t i = 1;
    Node* p = first;
    while (p != nullptr) {
        cout << i << ". " << p->d << endl;
        i++;
        p = p->next;
    }
    cout << endl;
}
    
Node* SinglyLinkedList::operator[] (int32_t index) {
    if (isEmpty()) return nullptr;
    Node* p = first;
    for (int i = 0; i < index; i++) {
        p = p->next;
        if (!p) {
            cout << "This element doesn't exist" << endl;
            return nullptr;
        }
    }
    return p;
}

void SinglyLinkedList::clear() {
    this->first = nullptr;
    this->last = nullptr;
}
