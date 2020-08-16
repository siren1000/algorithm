#include <iostream>
#include <stack>
using namespace std;

int main()
{
class Solution
{
public:
    void push(int node){
        stack2.push(node);
    }
    int pop(){
        int res=0;
        if(stack2.size()>0)
            res=stack2.top();
        else if(stack1.size()>0)
        {
            int temp=0;
            while(stack1.size()>0)
            {
                temp=stack1.top();
                stack1.pop();
                stack2.push(temp);
            }
            res=stack2.top();
            stack2.pop();
        }
        return res;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
    
};
}

