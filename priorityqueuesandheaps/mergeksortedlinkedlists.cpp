// { Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;

	Node(int x){
	    data = x;
	    next = NULL;
	}

};

Node* mergeKLists(Node* arr[], int K);

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}

   		Node *res = mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
// } Driver Code Ends


/*Linked list Node structure

struct Node
{
	int data;
	Node* next;

	Node(int x){
	    data = x;
	    next = NULL;
	}

};
*/

/* arr[] is an array of pointers to heads of linked lists
  and N is size of arr[]  */
Node *merge(Node *arr[],int left,int right)
    {
        if(left==right)     //Only 1 list,therefore can't be merged
            return arr[left];

        int k = right-left+1;   //No of current lists
        Node *head,*h1,*h2,*ptr;
        head = h1 = h2 = NULL;
        h1 = merge(arr,left,left+k/2-1);    //Merge 1st half and store its head in h1
        h2 = merge(arr,left+k/2,right); //Merge 2nd half and store its head in h2

        //Merge h1 and h2 into head
        if(!h1 && !h2) //No list is present
            return head;
        else if(!h1)    //Only 2nd list is present
            return h2;
        else if(!h2)    //Only 1st list is present
            return h1;

        if(!h1 || (h1 and h1->data>h2->data))
        {   head = h2;  h2=h2->next;    }
        else
        {   head = h1;  h1=h1->next;    }

        ptr = head;
        while(h1 || h2)
        {
            if(!h1)
            {   ptr->next = h2;   h2=h2->next;  ptr=ptr->next;  }
            else if(!h2)
            {   ptr->next = h1;   h1=h1->next;  ptr=ptr->next;  }
            else if(h1->data < h2->data)
            {   ptr->next=h1;   h1=h1->next;    ptr=ptr->next;  }
            else
            {   ptr->next=h2;   h2=h2->next;    ptr=ptr->next;  }
        }
        return head;
    }
Node * mergeKLists(Node *arr[], int k)
{
  if(k==0)
  {
      return NULL;
  }
  else if(k==1)
  {
      return arr[0];
  }
  Node *head,*h1,*h2,*ptr;
  head=h1=h2=NULL;
  h1=merge(arr,0,k/2);
  if(k/2+1<=k-1)
  {
      h2=merge(arr,k/2+1,k-1);
  }
  if(!h1 && !h2)
  {
      return head;
  }
  else if(!h1)
  {
      return h2;
  }
  else if(!h2)
  {
      return h1;
  }
  if(!h1 || (h1 && h1->data>h2->data))
  {
    head = h2;  h2=h2->next;
   }
  else
  {
    head = h1;  h1=h1->next;

   }

   ptr = head;
  while(h1 || h2)
    {
      if(!h1)
      {   ptr->next = h2;
         h2=h2->next;
         ptr=ptr->next;

      }
     else if(!h2)
     {
         ptr->next = h1;
         h1=h1->next;
         ptr=ptr->next;

     }
    else if(h1->data < h2->data)
    {
        ptr->next=h1;
        h1=h1->next;
        ptr=ptr->next;

    }
    else
    {
        ptr->next=h2;
        h2=h2->next;
        ptr=ptr->next;

    }
    }
    return head;
}

