class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size();
        if(n==1)return 0;

        vector<int> left;
        left.push_back(arr[0]);

        for(int i=1;i<n;i++){
            if(arr[i]>=left.back())left.push_back(arr[i]);
            else break;
        }

        vector<int> right;
        right.push_back(arr[n-1]);

        for(int i=n-2;i>=0;i--){
            if(arr[i]<=right.back())right.push_back(arr[i]);
            else break;
        }

        reverse(right.begin(),right.end());
        if(left.size()==n) return 0;

        int mini = min(n-left.size(),n-right.size());

        for(int i=0;i<left.size();i++){
            int other = lower_bound(right.begin(),right.end(),left[i])-right.begin();
            
            int rhs = right.size()-other;
            int lhs=i+1;
            int tobeleaved = n-rhs-lhs;
            mini=min(mini,tobeleaved);
        }
        return mini;

    }
};










