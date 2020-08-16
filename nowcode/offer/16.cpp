//这个直接就错了

#include <iostream>
using namespace std;

int main()
{
struct ListNode{
    int val;
    struct ListNode* next;
    ListNode(int x):
        val(x), next(NULL){}

};
class Solution
{
public:
    ListNode* Merge(ListNode* pHead1,ListNode* pHead2)
    {
        ListNode* pCursor1=pHead1;
        ListNode* pCursor2=pHead2;
        ListNode* pAnswerHead;
        if(pHead1->val<pHead2->val)
        {
            pAnswerHead=pHead1;
            pCursor1=pCursor1->next;
        }else
        {
            pAnswerHead=pHead2;
            pCursor2=pCursor2->next;
        }
        ListNode* pAnswerCursor=pAnswerHead;

        ListNode* temp;

        while(pCursor1!=NULL && pCursor2!=NULL)
        {
            if(pCursor1->val<pCursor2->val || pCursor2==NULL)
            {

                temp=pCursor1;
                pAnswerCursor->next=temp;
                pAnswerCursor=pAnswerCursor->next;
                pCursor1=pCursor1->next;
            }
            else if(pCursor1->val>=pCursor2->val || pCursor1==NULL)
            {
                temp=pCursor2;
                pAnswerCursor->next=temp;
                pAnswerCursor=pAnswerCursor->next;
                pCursor2=pCursor2->next;
            }
        }
        
        return pAnswerHead;
    }

};
}

