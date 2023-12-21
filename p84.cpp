//Design a stack that supports getMin() in O(1) time and O(1) extra space
#include<stack>
#include <limits.h>
class SpecialStack {
    public:
    int min=INT_MAX;
    int c=-1; 
    stack<int> s;
    void push(int data) {
        if(s.empty()){
            s.push(data);
            min=data;
        }
        else{
            if(data<min){
                s.push(2*data-min);
                min=data;
            }
            else{
                s.push(data);
            }
        }
    }

    void pop() {
        if(s.top()<min){
            min=2*min-s.top();
            s.pop();
        }
        else{
            s.pop();
        }
    }

    int top() {
        if(s.top()<min){
            return min;
        }
        else{
            return s.top();
        }
    }

    int getMin() {
        return min;
    }  
};