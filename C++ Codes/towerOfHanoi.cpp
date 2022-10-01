void deep(int n,int a,int b,int c,vector<vector<int>>&res){
    if(n==0) return;
    deep(n-1,a,c,b,res); // move the n-1 disk to c by taking help of b
    res.push_back({a,c});
    deep(n-1,b,a,c,res); // move n-1 disk to b by taking the help og c;
}

vector<vector<int>> towerOfHanoi(int n)
{
    //    Write your code here.
    vector<vector<int>> res;
    if(n==0) return res;
    deep(n,1,2,3,res);
    return res;
}
