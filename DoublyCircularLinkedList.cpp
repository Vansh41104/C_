#include <iostream>
using namespace std;

template<class T>
class Node{
    public:
    T val;
    Node<T> *prev=nullptr, *next=nullptr;

    Node(){

    }

    Node(T x){
        val = x;
    }
};

template<class T>
class DCLinkedList{
    public:
    Node<T>* head;

    DCLinkedList(){
        head = nullptr;
    }

    void print(){
        if(head == nullptr){
            cout<<"Empty List..."<<endl;
            return;
        }
        else if(head->next == nullptr){
            cout<<head->val<<"head"<<endl;
        }
        else{
            Node<T> *itr = head->next;
            while(itr!=head){
                cout<<itr->val<<"-->";
                itr = itr->next;
            }
            cout<<itr->val<<"-->head"<<endl;
        }
    }

    void push(T x){
        Node<T>* new_node = new Node<T>(x);
        if(head == nullptr){
            new_node->next = nullptr;
            new_node->prev = nullptr;
            head = new_node;
        }
        else if(head->next == nullptr || head->prev == nullptr){
            new_node->next = head;
            new_node->prev = head;
            head->next = new_node;
            head->prev = new_node;
            head = new_node;
        }
        else{
            new_node->next = head->next;
            new_node->prev = head;
            head->next->prev = new_node;
            head->next = new_node;
            head = new_node;
        }
        return;
    }

    void pop(T x){
        if(head == nullptr) return;
        else if(head->next == nullptr){
            head = nullptr;
            return;
        }
        Node<T>* itr = head->next;
        while(itr!=head){
            if(itr->val == x){
                head = itr->next;
                itr->prev->next = itr->next;
                itr->next->prev = itr->prev;
                delete itr;
                return;
            }
            itr = itr->next;
        }
        if(itr->val == x){
            head = itr->next;
            itr->prev->next = itr->next;
            itr->next->prev = itr->prev;
            delete itr;
            return;
        }
    }

};

int main(){
    DCLinkedList<int> LL;
    LL.push(3);
    LL.push(4);
    LL.push(5);
    LL.push(2);
    LL.print();
    LL.pop(4);
    LL.print();
    LL.push(1);
    LL.pop(5);
    LL.print();
    return 0;
}