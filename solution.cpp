class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *less = nullptr;
        ListNode *ge = nullptr;
        ListNode *current = head;
        ListNode *l1 = less;
        ListNode *g1 = ge;
        while(current != nullptr){
            if(current->val < x){
                if(less == nullptr){
                    less = new ListNode(current->val, nullptr);
                    l1 = less;
                }
                else{
                    l1->next = new ListNode(current->val, nullptr);
                    l1 = l1->next;
                }
            }
            else{
                if(ge == nullptr){
                    ge = new ListNode(current->val, nullptr);
                    g1 = ge;
                }
                else{
                    g1->next = new ListNode(current->val, nullptr);
                    g1 = g1->next;
                }
            }

            current = current->next;
        }

        if(less == nullptr){
            return(ge);
        }
        else{
            l1->next = ge;
            return(less);
        }
    }
};
