class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int j=0,i=0,sum=0,mx=INT_MIN;
        double avg;
        
        while(j<nums.size())
        {
            sum+=nums[j];
            if(j-i+1==k)
            {
                mx=max(mx,sum);
                sum-=nums[i++];
           
                
            }
          
            j++;
        }
          avg=double(mx)/k;
 
        return avg;
        
    }
};