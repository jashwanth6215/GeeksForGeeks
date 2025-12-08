/*
class Node {
    int data;
    Node next;
    Node(int x) {
        data = x;
        next = null;
    }
}*/

class Solution {
    public ArrayList<Integer> printList(Node head) {
        // code here
        ArrayList<Integer> arr=new ArrayList<>();
        while(head!=null)
        {
            arr.add(head.data);
            head=head.next;
        }
        return arr;
    }
}