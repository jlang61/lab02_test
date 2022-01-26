#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"



void addIntToEndOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.
  Node* end; // temporary pointer
  // TODO:
  // (1) Allocate a new node.  p will point to it.
  end = new Node; 
  // (2) Set p's data field to the value passed in
  end->data = value;
  // (3) Set p's next field to NULL
  end->next = nullptr;
  if (list->head == NULL) {
    // (4) Make both head and tail of this list point to p
    list->head = end;
    list->tail = end;
  } else {
    // Add p at the end of the list.   
    // (5) The current node at the tail? Make it point to p instead of NULL
    list->tail->next = end;
    // (6) Make the tail of the list be p now.
    list->tail = end;
  }
}


//taking in an integer value and adding it to the start of the linked list
void addIntToStartOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.
  Node* start = new Node;
  start->data = value;
  start->next = nullptr;
  
  if (list->head == nullptr){
    list->head = start;
    list->tail = start;
  }
  else{
    start->next = list->head;
    list->head = start;
  }

}

//returns a pointer to the max value in the linked list
Node * pointerToMax(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list!=NULL);
  assert(list->head != NULL);

  int max = list->head->data;
  Node* maxPointer = new Node;
  Node* current = new Node;
  maxPointer = list->head;
  current = list->head;

  while(current != NULL){
    if (current->data > max){
      maxPointer = current;
      max = current->data;
    }
    current = current->next;
  }
  return maxPointer; 
}


// Return a pointer to node with the smallest value. 
Node * pointerToMin(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  int min = list->head->data;
  Node* current = new Node;
  Node* minPointer = new Node;
  current= list->head;
  minPointer = current;

  while(current){
    if (current->data < min){
      min = current->data;
      minPointer = current;
    }
    current = current->next;
  }
  return minPointer; 

}

// Return the largest value in the list.
int largestValue(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  int max = list->head->data;
  Node* current = new Node;
  current = list->head;

  while(current != NULL){
    if (current->data > max){
      max = current->data;
    }
    current = current->next;
  }

  return max; 
}


// Return the smallest value in the list.
int smallestValue(LinkedList *list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  int min = list->head->data;
  Node* current = new Node;
  current= list->head;
  
  while(current){
    if (current->data < min){
      min = current->data;
    }
    current = current->next;
  }
  return min; 

}

// Return the sum of all values in the list.
int sum(LinkedList * list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);

  Node* p = new Node;
  p = list->head;
  int sum = 0;

  while(p){
    sum += p->data;
    p = p->next;
  }
  return sum; 
}

