class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int s=nums.size();
         int i,j;
       
           for( i=s-2;i>=0;i--)  //equal to zero bercause we have to find till last position
           {
               if(nums[i]<nums[i+1])
                   break;
           }
          
          if(i<0)
          {
              reverse(nums.begin(),nums.end());
          }
          else
          {
              for( j=s-1;j>i;j--)
              {
                  if(nums[j]>nums[i])
                  {
                      break;
                  }
              }
                  swap(nums[i],nums[j]);
                  reverse(nums.begin()+i+1,nums.end());
              
          }
        
        }
};