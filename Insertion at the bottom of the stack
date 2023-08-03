class Solution{
public:
    void insert(stack<int>&s,int x){
    if(s.size()==0) {
       s.push(x);
       return ;
     }
   int num = s.top();
    s.pop();
    
    
    insert(s,x);
    s.push(num);
}
    stack<int> insertAtBottom(stack<int> St,int X){
        insert(St,X);
        return St;
    }
};
