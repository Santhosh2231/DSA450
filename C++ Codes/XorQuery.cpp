vector<int> xorQuery(vector<vector<int>> &queries)
{
	// Write your code here
    vector<int> result;
    for(int i=0;i<queries.size();i++){
        if(queries[i][0]==1){
            result.push_back(queries[i][1]);
        }else{
            for(int j=0;j<result.size();j++){
                result[j] = result[j]^queries[i][1];
            }
        }
    }
    return result;
}
