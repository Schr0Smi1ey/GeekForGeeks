class Solution
{
    public:
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int> stk;queue<int> ans;
        while(k--){
            stk.push(q.front());
            q.pop();
        }
        while(!stk.empty()){
            ans.push(stk.top());
            stk.pop();
        }
        while(!q.empty()){
            ans.push(q.front());
            q.pop();
        }
        return ans;
    }
};