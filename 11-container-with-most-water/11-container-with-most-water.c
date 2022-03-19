int maxArea(int* height, int heightSize){
    int max=INT_MIN;
    int c=heightSize-1;
    int re;
    int i=0,j;
    while(i<c)
    {
        re=((c-i)*(height[i]<height[c]?height[i]:height[c]));

                if(height[c]>height[i])
                {
                    i++; 
                }
                else{
                        c--;
                    }
             if(re>max)
            {
                max=re;
            }
    }
    return max;
}