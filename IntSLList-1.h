#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class INTSLNode {
public:
    INTSLNode () {
        info =0;
    }

    INTSLNode(int el, INTSLNode *p =0) {
        info = el;
        next = p;
    }
    int info;
    INTSLNode *next;
}

class IntSLList {
public:
    IntSLList() {
        head = tail = 0;
    }
    ~IntSLList();
    int isEmpty() {
        return head == 0;
    }

    void addToHead(int);
    void addToTail(int);

private:
    IntSLNode *head,*tail;
}


#endif