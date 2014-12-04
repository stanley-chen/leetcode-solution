/*
	Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

	push(x) -- Push element x onto stack.
	pop() -- Removes the element on top of the stack.
	top() -- Get the top element.
	getMin() -- Retrieve the minimum element in the stack.

*/



class node {
    int *next = null;
    int *lessmin = null;
    int value = null;
};

class MinStack {
int * head = null; 
int * point = null;
int * min = null;
public:
    void push(int x) {
        node now = new node();
        if(head == null){
        	now.lessmin = null;
            head = &now; 
            min = &now;
            point = &now;
            now.value = x;
        }else{
            if(&min >x)
            	min = &now; 
            point.next = &now;
            point = now;
            now.value = x;
        }
    }

    void pop() {
        
    }

    int top() {
        
    }

    int getMin() {
        
    }
};