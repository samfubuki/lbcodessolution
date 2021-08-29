// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data;
        node = node->next;
    }
    cout<<"\n";
}


 // } Driver Code Ends
//User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head)
    {
      Node* curr=head;
      Node* last=head;
      int flag=0,cnt=0;
      while(curr)
      {
          if(curr->data!=9)
          {
              last=curr;
              cnt++;
          }
          else
          {
              flag=1;
              curr=curr->next;
          }
      }
      if(flag==0)
      {
          last->data++;
          return head;
      }
      if(cnt!=0)
      {
          last->data++;
          last=last->next;
          while(last)
          {
              last->data=0;
              last=last->next;

          }
          return head;
      }
      else
      {
          while(last)
          {
              last->data=0;
              last=last->next;
          }
          Node *t = new Node(1);
          t->next=head;
          head=t;
          return head;
      }

    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}
  // } Driver Code Ends
