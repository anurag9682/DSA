/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void sotre(ListNode* head, priority_queue<int, vector<int>, greater<int>>&minHeap){
        while(head!=NULL){
            minHeap.push(head->val);
            head = head->next;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>>minHeap;

        for(auto list: lists){
            sotre(list,minHeap);
        }
        ListNode* ans  = new ListNode(0);
        ListNode* temp = ans;
        
        while(!minHeap.empty()){
            int val = minHeap.top();
            minHeap.pop();

            temp->next = new ListNode(val);
            temp = temp->next;
        }
        return ans->next;


        
    }
};