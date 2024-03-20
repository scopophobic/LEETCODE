class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* ans = list1;
        int i = 0;

        ListNode* prev = nullptr;
        ListNode* nextNode = nullptr;


        while (list1 != nullptr) {
            if (i == a - 1) {
                prev = list1;
            }
            if (i == b + 1) {
                nextNode = list1;
                break;
            }
            list1 = list1->next;
            i++;
        }


        ListNode* lastNodeOfList2 = list2;
        while (lastNodeOfList2->next != nullptr) {
            lastNodeOfList2 = lastNodeOfList2->next;
        }
        lastNodeOfList2->next = nextNode;


        if (prev != nullptr) {
            prev->next = list2;
        } else {

            ans = list2;
        }

        return ans;
    }
};
