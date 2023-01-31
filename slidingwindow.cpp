class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
                while(!q.empty()&&q.back()<nums[i]){
                    q.pop_back();
                }
                q.push_back(nums[i]);
                // for(auto &i: q)cout<<i<<" ";
                // cout<<endl;
                if(i>=k-1){
                ans.push_back(q.front());
                if(q.front()==nums[i-k+1]){
                    q.pop_front();
                }
            }
            
        }
        return ans;
    }
};
