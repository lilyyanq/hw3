#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************
void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot)
{
  if(head == nullptr)
  {
    smaller = nullptr;
    larger = nullptr;
    return;
  }
  Node* temp = head->next;//temporarily store next node
  head->next = nullptr; //detach from list
  if(head->val <= pivot)
  {
    smaller = head;
    llpivot(temp, smaller->next, larger, pivot);
  }
  else
  {
    larger = head;
    llpivot(temp, smaller, larger->next, pivot);
  }
  head = nullptr;
}

