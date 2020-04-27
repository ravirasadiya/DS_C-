#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class IntSLNode {
public: 
    IntSLNode() {
        next = 0;
    }
    IntSLNode(int el,IntSLNode *p = 0) {
        info = el;
        next = p;
    }
    int info;
    IntSLNode *next;

};

class IntSLList {
public:
    IntSLList() {
        head = tail = 0;
    }
    ~IntSLList();
    int isEmpty () {
        return head ==0;
    }

    void addToHead(int);
    void addToTail(int);

private:
    IntSLNode *head, *tail;
}

#endif