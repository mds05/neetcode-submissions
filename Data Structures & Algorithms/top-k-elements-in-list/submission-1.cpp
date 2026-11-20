#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(k>nums.size()) return {};
        vector<int> freq_elem;
        unordered_map<int, int> hashmap;
        for(int num:nums){
            hashmap[num]++;
        }
        for(auto it=hashmap.begin();it!=hashmap.end();it++){
            int minIndex=0;
            if(freq_elem.size()<k){
                freq_elem.push_back(it->first);
                continue;
            }
            for(int i=1;i<freq_elem.size();i++){
            if(hashmap[freq_elem[i]]<hashmap[freq_elem[minIndex]]){
                minIndex=i;
            }
            }
            if(it->second>hashmap[freq_elem[minIndex]]){
                freq_elem[minIndex]=it->first;
            }

        }
        return freq_elem;
    }
};
