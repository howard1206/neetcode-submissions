struct ListNode {
        ListNode* next;
        int val;

        ListNode() : val(0), next(nullptr) {};
        ListNode(int val) : val(val), next(nullptr) {};

};

class LinkedList {
private:
    
    ListNode* head;
    ListNode* tail;
    int size;
public:
    LinkedList() {
        head = new ListNode(-1);
        tail = head;
        size = 0;
    }

    int get(int index) {
        if(index < 0 || index >= size) return -1;
        ListNode* curr = head->next;
        for(int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        return curr->val;
    }

    void insertHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head->next;
        head->next = newNode;
        if(!newNode->next) {
            tail = newNode;
        }
        size++;
    }
    
    void insertTail(int val) {
        ListNode* newNode = new ListNode(val);
        tail->next = newNode;
        tail = tail->next;
        size++;
    }

    bool remove(int index) {
        if(index < 0 || index >= size) return false;
        ListNode* prev = head;
        for(int i = 0; i < index; ++i) {
            prev = prev->next;
        }
        ListNode* temp = prev->next;
        prev->next = temp->next;
        if(temp == tail) {
            tail = prev;
        }
        delete temp;
        size--;
        return true;
    }

    vector<int> getValues() {
        vector<int> result;
        result.reserve(size);
        ListNode* curr = head->next;
        while(curr) {
            result.push_back(curr->val);
            curr = curr->next;
        }
        return result;

    }
};
