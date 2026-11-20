#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> count;
        vector<vector<int>> freq(nums.size()+1);
        for(int num : nums){
            count[num]++;
        }
        for(auto it: count){
            freq[it.second].push_back(it.first);
        }
        vector<int> result;
        for(int it=freq.size()-1;it>=0;it--){
            for(int num: freq[it]){
                result.push_back(num);
                if(result.size()==k){
                    return result;
                }
            }
            
        }
    }
};
