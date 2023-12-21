//  REVERSE A STACK VIA RECURSION
// similarly can do sorting

void rev(stack<int> &stack,int i){
  if (stack.empty()) {
    stack.push(i);
    return;
  }

   int a=stack.top();
   stack.pop();
   rev(stack,i);
   stack.push(a);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }
    int i=stack.top();
    stack.pop();
    reverseStack(stack);
    rev(stack,i);

}