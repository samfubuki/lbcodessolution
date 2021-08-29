// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {

        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
Node* reverseList(Node* head)
{
    Node* pre=NULL;
    Node* next=NULL;
    while(head!=NULL)
    {
        next=head->next;
        head->next=pre;
        pre=head;
        head=next;
    }
return pre;
}
bool isPalindrome(Node *head)
{
  if(head==NULL || head->next==NULL)
  {
      return true;
  }
  Node *slow=head;
  Node *fast=head;
  while(fast->next!=NULL && fast->next->next!=NULL)
  {
      slow=slow->next;
      fast=fast->next->next;
  }
  slow->next = reverseList(slow->next);
  slow=slow->next;
  while(slow!=NULL)
  {
      if(head->data!=slow->data)
      {
          return false;

      }
      head=head->next;
      slow=slow->next;
  }
 return true;
}


