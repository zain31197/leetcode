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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
     // Create a set from the input vector for quick lookup
        unordered_set<int> st(begin(nums), end(nums));

        // Handle cases where the head node itself needs to be removed
        while (head != nullptr && st.find(head->val) != st.end()) {
            ListNode *temp = head;
            head = head->next;  // Move the head pointer to the next node
            delete temp;  // Delete the old head node
        }

        // Pointer to traverse the list
        ListNode *curr = head;

        // Traverse the rest of the list
        while (curr != nullptr && curr->next != nullptr) {
            if (st.find(curr->next->val) != st.end()) {
                // If the next node's value needs to be removed
                ListNode *temp = curr->next;
                curr->next = curr->next->next;  // Bypass the node to delete
                delete temp;  // Delete the bypassed node
            } else {
                // Move to the next node
                curr = curr->next;
            }
        }

        return head;
    }
};