class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        long long n=piles.size();

        long long maxElement=*max_element(piles.begin(), piles.end());
        long long i=1;
        int minRate=INT_MAX;
        while(i<=maxElement){
            int middle=i+(maxElement-i)/2;

            long long j=0;
            long long hours=0;
            while(j<n){
                long long temp = (piles[j] + middle - 1) / middle;
                hours+=temp;
                j++;
            }
            if(hours<=h){
                minRate=min(minRate,middle);  
                maxElement=middle-1;
            }else{
                i=middle+1;
            }
            
        }
        return minRate;
    }
};
