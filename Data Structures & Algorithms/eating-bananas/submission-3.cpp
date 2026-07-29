class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        long long n=piles.size();

        long long maxElement=*max_element(piles.begin(), piles.end());
        long long i=1;
        while(i<=maxElement){

            long long j=0;

            long long hours=0;
            while(j<n){
                long long temp = (piles[j] + i - 1) / i;
                hours+=temp;
                j++;
            }
            if(hours<=h){
                return i;
            }
            i++;
        }
        return -1;
    }
};
