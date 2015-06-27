ListNode *deleteDuplicates(ListNode *head) {
        
        if(!head)
        return head;
        
     ListNode *dummy = new ListNode(INT_MIN);
     dummy->next=head;
     ListNode *curr=head,*prev=dummy;
     
     while(curr)
     {
         if(curr->val!=prev->val)
         {
             prev->next=curr;
             prev=curr;
         }
         curr=curr->next;
         
     }
        prev->next=NULL;
     return dummy->next;
    }
