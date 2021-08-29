#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

bool check(Node* node);

// Driver program to test size function
int main()
{
    int t;
    cin>> t;
    getchar();
    while (t--)
    {
        string s;
        getline( cin, s );
        Node* head = buildTree( s );

        cout << check(head) << endl;
    }
    return 0;
}
// } Driver Code Ends


/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

/*You are required to complete this method*/
bool checkallnodessamelevel(Node *root, int currlevel, bool resettoplevel)
{
    static int toplevel=-1;
    if(resettoplevel)
    {
        toplevel=-1;
    }
    if(root->left==NULL && root->right==NULL)
    {
        if(toplevel==-1)
        {
            toplevel=currlevel;
            return true;
        }
        else if(currlevel==toplevel)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool leftresult=true;
    bool rightresult=true;
    if(root->left)
    {
        leftresult=checkallnodessamelevel(root->left,currlevel+1,false);
    }
    if(root->right)
    {
        rightresult=checkallnodessamelevel(root->right,currlevel+1,false);
    }
    if(!leftresult || !rightresult)
    {
        return false;
    }
return true;
}
bool check(Node *root)
{
    if(root==NULL)
    {
        return true;
    }
    return checkallnodessamelevel(root,0,true);
}
