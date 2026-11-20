#include <unordered_map>
#include <string>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char , int> hashtable1;
        unordered_map<char , int> hashtable2;

        for(int i=0;i<s.length();i++){
            char c1=s.at(i);
            char c2=t.at(i);
            if(!hashtable1.contains(c1)){
                hashtable1.insert({c1,0});
            }
            if(!hashtable2.contains(c2)){
                hashtable2.insert({c2,0});
            }
            
            
                hashtable1[c1]+=1;
            hashtable2[c2]+=1;
            

        }
        for(auto it=hashtable1.begin();it!=hashtable1.end();it++){
            if(!hashtable2.contains(it->first)){
                return false;
            }
            auto it2=hashtable2.find(it->first);
            cout<< it2->first<< it2->second<<endl;
            if(it->second != it2->second) return false;
        }
        return true;

    }
};
