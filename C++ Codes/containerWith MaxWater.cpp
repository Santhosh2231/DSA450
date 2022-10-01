int maxArea(vector<int>& height) {
    // Write your code here.
    int n=height.size();
    int left=0,right=n-1,area=0;
    while(left<right){
        area=max(area,min(height[left],height[right])*(right-left));
        if(height[left]<height[right]){
            left++;
        }else{
            right--;
        }
    }    
    return area;
}
