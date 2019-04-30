#include "linkedlist.h"

linkedlist::linkedlist() {
   this->data = 0;
   this->head = NULL;
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
   if(head == NULL)
   {
      return 0;
   }
   else{
       head = head->next;
       //return 1+count(title->next);
       return 1+count();
   }
  
    
}

void linkedlist::addToFront(int n) {
    Node* newNode=new node;        
    newNode->data=d;               
    newNode->next=head;            
    head=newNode;  
}

double linkedlist::average() {
    // uses sum and count functions
    int countSize = count();
    int sumLists = sum();
    return (double(sumLists)/double(countSize));
}

int linkedlist::sum() {
    // RECURSIVE
    if(head->next == NULL)
    {
      return head->data;
    }
    else
    {
       return head->data + sum();
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
    
    ofstream write;
    

}

void linkedlist::writeReversed(string & file) {
    // RECURSIVE
    ofstream write;
    write.open(file);
    
}
