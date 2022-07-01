class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& a, int k) {
        
         int n=a.size();
        vector<double>ans;
        vector<int>temp;
        for(int i=0;i<k;i++)
        {
            temp.push_back(a[i]);
        }
        sort(temp.begin(),temp.end());
        bool flag=true;
         int x,y;
        if(k%2==0)
        {
            flag=false;
            y=k/2;
            x=y-1;
        }
       else
       {
           x=k/2;
       }
        if(flag==false)
        {     
            double s=(double)temp[x];
            s+=(double)temp[y];
            s/=2.0;
            ans.push_back(s);
        }
        else
        {
            ans.push_back((double)temp[x]);
        }
      int j=k;
        int i=0;
        
        while(j<n)
        {
            int l=lower_bound(temp.begin(),temp.end(),a[i])-temp.begin();
            temp.erase(temp.begin()+l);
            int r=upper_bound(temp.begin(),temp.end(),a[j])-temp.begin();
            temp.insert(temp.begin()+r,a[j]);
            if(flag==false)
        {     
            double s=(double)temp[x];
            s+=(double)temp[y];
            s/=2.0;
            ans.push_back(s);
        }
        else
        {
            ans.push_back((double)temp[x]);
        }
            i++;
            j++;
        }
        return ans;
        
    }
};