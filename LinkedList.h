#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include "Node.h"
class LinkedList;

class LinkedList{
    Node* head;
    public:

        LinkedList();
        LinkedList(Node* &nodo);
        ~LinkedList();
        void insert(int elem);
        void print();
        Node* getHead();
        
        friend std::ostream &operator << (std::ostream &out, const LinkedList &list);

};

LinkedList::LinkedList(){
    this -> head = nullptr;
}
LinkedList::LinkedList(Node* &nodo){
    this -> head = nodo;
}

void LinkedList::insert(int n){
    Node* new_node = new Node();
    new_node->elem = n;

    Node* aux1 = head;
    Node* aux2 = nullptr;
    
    while((aux1 != nullptr)&&(aux1->elem < n)){
        aux2 = aux1;
        aux1 = aux1->next;
    }
    
    if(head == aux1){
        head = new_node;
    }else{
        aux2->next = new_node;
    }

    new_node -> next = aux1;
}

void LinkedList::print(){
    Node* iterator = new Node();
    iterator = head;

    while (iterator != nullptr){
        std::cout<<"|"<<iterator -> elem<<"|"<<" -> ";
        iterator = iterator -> next;
    }
}

Node* LinkedList::getHead(){
    return head;
}
std::ostream &operator << (std::ostream &out, const LinkedList &list){
    Node* iterator = new Node();
    iterator = list.head;

    while (iterator != nullptr){
        out<<"|"<<iterator -> getElem()<<"|"<<" -> ";
        iterator = iterator->getNext();
    }

    return out;
}

LinkedList::~LinkedList(){}

#endif