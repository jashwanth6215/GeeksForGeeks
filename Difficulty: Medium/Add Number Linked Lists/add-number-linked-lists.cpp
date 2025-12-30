/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *reverse(Node* head)
    {
        Node* cur=head;
        Node* prev=NULL;
        while(cur)
        {
            Node* next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        head1=reverse(head1);
        head2=reverse(head2);
        Node* ans=new Node(-1);
        Node* temp=ans;
        int carry=0;
        while(head1!=NULL || head2!=NULL || carry)
        {
            int sum=carry;
            if(head1!=NULL)
            {
                sum+=head1->data;
                head1=head1->next;
            }
            if(head2!=NULL)
            {
                sum+=head2->data;
                head2=head2->next;
            }
            int digit=sum%10;
            carry=sum/10;
            temp->next=new Node(digit);
            temp=temp->next;
        }
        Node *res=reverse(ans->next);
        while(res && res->data==0 && res->next!=NULL) {
            res=res->next;
        }
        return res;
    }
};