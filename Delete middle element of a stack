class Solution
{
    public:
    void solve(stack<int>&s, int sizeOfStack, int count){
        if(count == sizeOfStack/2){
            s.pop();
            return;
        }
        int num = s.top();
        s.pop();
        
        solve(s,sizeOfStack,count+1);
        s.push(num);
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int count = 0;
        solve(s,sizeOfStack,count);
    }
};
