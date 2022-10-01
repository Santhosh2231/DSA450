long getMaximumProfit(long *values, int n)
{
    //Write your code here
    long buy=0,profit=0;
    for(int i=1;i<n;i++){
        if(i==1 &&  values[i]>=values[i-1]){
            buy=values[i-1];
        }
        
        if(values[i-1]<values[i] && values[i]>values[i+1]){
            profit += (values[i]-buy);
       }else if(values[i-1]>values[i] && values[i]<values[i+1]){
            buy = values[i];
        }else if(i==n-1 && values[i]>values[i-1]){
            profit+= (values[i]-buy);
        }
    }
    return profit;
    
}
