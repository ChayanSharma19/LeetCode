class Solution {
public:
    int totalFruit(vector<int>& fruits) {
     int n = fruits.size();
     unordered_map<int,int> mpp;
     int max_fruits = 0;

     int low =0;
     int high =0;

     while(high <n){
        mpp[fruits[high]]++;

        if(mpp.size()>2){
            while(mpp.size()>2){
                mpp[fruits[low]]--;
                if(mpp[fruits[low]]==0) mpp.erase(fruits[low]);
                low++;
            }
        }
        
        max_fruits = max(max_fruits,(high-low+1));
        
        high++;
     } 
     return max_fruits;  
    }
};