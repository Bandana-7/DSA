class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        stack<int> s;
        
        unordered_map<int,int> umap;
        
        for(int i=nums2.size()-1; i>=0 ; i--){
            while((!s.empty()) && s.top() <= nums2[i]){
                s.pop();
            }
            
            int res= (s.empty()) ? -1: s.top();
            umap.insert({nums2[i], res});
            s.push(nums2[i]);   
        }
        
        for(auto x:nums1){
            v.push_back(umap[x]);
        }
         
        return v;
    }
};





