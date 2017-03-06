// 1. Reflection

// - I solved in Brute-force way.
// - I could be solved with heap.

// 2. Problem

// Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.

// 3. Initial solution( complexity: time=>O(kn^2) space=>O(1))

//Brute-force
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        int N = lists.size();
        ListNode dummy(0);
        ListNode *tail = &dummy;
        bool noNull = 1;
        while(1){
            int minVal = 987654321, minIdx = -1;
            for(int i=0; i<N; i++){
                if(lists[i] && lists[i]->val < minVal){
                    minVal = lists[i]->val;
                    minIdx = i;
                }
            }
            if(minIdx < 0) break;
            tail->next = lists[minIdx];
            lists[minIdx] = lists[minIdx]->next;
            tail = tail->next;

        }
        return dummy.next;
    }
};

// 4. Improved solution( complexity: time=>O(knklogk) space=>O(1) )

static bool heapComp(ListNode* a, ListNode* b) {
        return a->val > b->val;
}
ListNode* mergeKLists(vector<ListNode*>& lists) { //make_heap
    ListNode head(0);
    ListNode *curNode = &head;
    vector<ListNode*> v;
    for(int i =0; i<lists.size(); i++){
        if(lists[i]) v.push_back(lists[i]);
    }
    make_heap(v.begin(), v.end(), heapComp); //vector -> heap data strcture

    while(v.size()>0){
        curNode->next=v.front();
        pop_heap(v.begin(), v.end(), heapComp);
        v.pop_back();
        curNode = curNode->next;
        if(curNode->next) {
            v.push_back(curNode->next);
            push_heap(v.begin(), v.end(), heapComp);
        }
    }
    return head.next;
}
