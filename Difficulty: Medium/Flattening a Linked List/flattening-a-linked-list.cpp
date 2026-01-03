/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        vector<int>arr;
        while(root!=NULL)
        {
            Node* temp=root->bottom;
            while(temp!=NULL)
            {
                arr.push_back(temp->data);
                temp=temp->bottom;
            }
            arr.push_back(root->data);
            root=root->next;
        }
        sort(arr.begin(),arr.end());
        
        Node* dummy=new Node(-1);
        auto ans=dummy;
        for(int i=0;i<arr.size();i++)
        {
            dummy->bottom=new Node(arr[i]);
            dummy=dummy->bottom;
        }
        return ans->bottom;
    }
};