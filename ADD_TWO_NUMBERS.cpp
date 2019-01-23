class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=NULL,*dupli=NULL;
        int carry=0;
        while(l1!=NULL || l2!=NULL)
        {
            int x,sum=0,y;
            if(l1==NULL)
                x=0;
            else
                x=l1->val;
            if(l2==NULL)
                y=0;
            else
                y=l2->val;
            sum=carry+x+y;
                carry=sum/10;
            sum=sum%10;
            if(ans==NULL)
            {
                ans=new ListNode(sum);
                dupli=ans;
            }
            else
            {
                dupli->next=new ListNode(sum);
                dupli=dupli->next;
            }
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
        }
        if(carry>0)
            dupli->next=new ListNode(carry);
        return(ans);
    }
};