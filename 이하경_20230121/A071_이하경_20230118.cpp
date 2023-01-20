//20230118
class MyQueue {

private:
    stack<int> s;

public:
    MyQueue() {}

    void push(int x) {
        stack<int> s2;
        while(!s.empty()){
            s2.push(s.top());
            s.pop();
        }
        s.push(x);
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
    }

    int pop() {

        int ret = s.top();
        s.pop();

        return ret;
    }

    int peek() {
        return s.top();
    }

    bool empty() {
        return s.empty();
    }
};