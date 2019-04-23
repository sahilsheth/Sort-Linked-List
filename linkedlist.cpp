#include "linkedlist.h"

linkedlist::linkedlist() {
   this->data = 0;
   this->next = NULL;
}

linkedlist::~linkedlist() {
    // RECURSIVE
    Node* curr = next;
    Node* anotherNode = NULL;
    while (curr != NULL) {
        anotherNode = curr;
        curr = curr->curr;
        delete anotherNode;
    }

    or delete next;
}

int linkedlist::count() {
    // RECURSIVE
   Node *title = next;
   if(title == NULL)
   {
      return 0;
   }
   return 1+count(title->next);
    
}

void linkedlist::addToFront(int n) {
    Node* newNode=new node;        
    newNode->data=d;               
    newNode->next=head;            
    head=newNode;  
}

double linkedlist::average() {
    // uses sum and count functions
}

int linkedlist::sum() {
    // RECURSIVE
    if(next == NULL)
    {
      return 0;
    }
    else
    {
       return next->data + Sum(next->next);
    }

  /*
  int Sum(Node *head)
 {
    if ( head != NULL )
        return head->data + Sum(head->next);
    else
        return 0;
 }*/
}

void linkedlist::writeInorder(string & file) {

}

void linkedlist::writeReversed(string & file) {
    // RECURSIVE
}
