#include <unordered_map>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashtable;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(hashtable.count(num))
                return true;
            else{
                hashtable[num]=i;
            }    
        }  
            
            return false;
    }
};
 