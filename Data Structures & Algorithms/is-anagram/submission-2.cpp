class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() !=t.size()){
            return false;
        }
        
        map<int,int> m1,m2;
        for (int i=0; i<s.size(); i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }

auto it1 = m1.begin();
auto it2 = m2.begin();

while (it1 != m1.end()) {
    // Compare the values (.second)
    if ( (it1->first != it2->first) || (it1->second != it2->second)) {
        return false;
    }
    it1++;
    it2++;
}

        return true;
    }
};
