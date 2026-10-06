/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
       if(head==null || head.next==null){
        return true;
       } 
       ListNode slow=head;
       ListNode fast = head.next;
       while(fast!=null && fast.next!=null){
        slow=slow.next;
        fast=fast.next.next;
       }
       ListNode curr=slow.next;
       ListNode prev=null;

       while(curr!=null){
        ListNode temp = curr.next;
        curr.next=prev;
        prev=curr;
        curr= temp;
       }
       boolean isPalindrome = true;

       ListNode pHead= head;
       while(isPalindrome && prev!=null){
         if(pHead.val!=prev.val){
            isPalindrome= false;
         }
         pHead=pHead.next;
         prev=prev.next;
         }

       return isPalindrome;
    }
}