#include <unordered_set>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(hashset.find(num)!=hashset.end())
                return true;
            else{
                hashset.insert(num);
            }    
        }  
            
            return false;
    }
};
 