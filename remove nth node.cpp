struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head ,ListNode* tail, int n) {
        ListNode* temp;
        if(head == nullptr || n < 0){
            return head;
        }

        else if(n == 1){
            temp = head;
            if(temp->next == nullptr){
                head = nullptr;
                delete temp;
            }
            else{
                head = temp->next;
                delete temp;
            }
        }
        else{
            temp = head;
            for(int i = 1; i < n - 1; i++){
                temp = temp->next;
                if(temp == nullptr){
                    break;
                }
            }
            if(temp == nullptr && temp->next == nullptr){
                return head;
            }
            else{
            if(temp->next->next == nullptr){
                temp->next == nullptr;
                delete tail;
                tail = temp;
            }
            else{
                ListNode* ptr = temp->next;
                temp->next = temp->next->next;
                delete ptr;
            }
        }
       }
         return head;   
    }
}; 


