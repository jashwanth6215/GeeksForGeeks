/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        auto temp=head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        int mid=c/2;
        temp=head;
        for(int i=0;i<mid;i++)
        {
            temp=temp->next;
        }
        if(c%2!=0)
        {
            temp=temp->next;
        }
        Node* cur=temp;
        Node* prev=NULL;
        while(cur)
        {
            Node* next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        temp=prev;
        while(temp!=NULL)
        {
            if(temp->data!=head->data)
            {
                return false;
            }
            temp=temp->next;
            head=head->next;
        }
        return true;
          
    }
};