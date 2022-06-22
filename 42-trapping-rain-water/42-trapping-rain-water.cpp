class Solution {
public:
    int trap(vector<int>& height) {
      
        int size=height.size();
        if(size<3) return 0;
        
        int capacity=0;
        
        vector<int> front(size),rear(size);
        
        int max_v=0;
        
        for(int i=0;i<size;i++)
        {
            max_v=max(max_v,height[i]);
            front[i]=max_v;
        }
        
        max_v=0;
        
        for(int i=size-1;i>=0;i--)
        {
            max_v=max(max_v,height[i]);
            rear[i]=max_v;
        }
        
        for(int i=1;i<size;i++)
        {
            int leftmax = front[i];
            int rightmax = rear[i];
            capacity+=(min(leftmax,rightmax)-height[i]);
        }
        return capacity;
    }
};