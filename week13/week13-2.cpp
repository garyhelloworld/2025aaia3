// week13-2 學習計畫 linked list 第一題
// 21. Merge Two Sorted Lists 左邊 list1 右邊 list2 合起來
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans = new ListNode(999);
        ListNode * ans2 = ans; // ans2 幫忙ans 把尾巴接好
        while( list1 != nullptr &&  list2 != nullptr){
            if(list1 -> val < list2->val){ // 左邊小 先接左邊
                ans2 -> next = list1; // 接起來
                list1 = list1 -> next; // 往右下一筆
                ans2 = ans2 -> next; // 往右下一筆
            }
            else{ // 右邊小 先接右邊
                ans2 -> next = list2; // 接起來
                list2 = list2 -> next; // 往右下一筆
                ans2 = ans2 -> next; // 往右下一筆
            }
        }
        // 還沒聽完 收尾
        if(list1 != nullptr) ans2 -> next = list1;
        if(list2 != nullptr) ans2 -> next = list2;
        return ans -> next;
    }
};


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
