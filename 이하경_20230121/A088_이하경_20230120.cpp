//20230120
class MinStack {
private:
    stack<int> activeStack;
    stack<int> minStack;
public:
    MinStack(): activeStack(), minStack() {}

    void push(int x) {
        activeStack.push(x);
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }

    void pop() {
        if (activeStack.top() == minStack.top()) {
            minStack.pop();
        }
        activeStack.pop();
    }

    int top() {  return activeStack.top(); }
    int getMin() { return minStack.top(); }
};