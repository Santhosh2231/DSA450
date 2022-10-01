
void swap(int &a,int&b){
    int temp=a;
    a=b;
    b=temp;
}
void partition(vector<int>&arr,int l,int r,int& i,int& j){
    i = l-1; j=r;
    int p =l-1,q=r;
    int v = arr[r]; // pivot element
    while(true){
        while(arr[++i]<v);
        while(v<arr[--j]){
            if(j==l){
                break;
            }
        }
        if(i>=j)
            break;
        
        swap(arr[i],arr[j]);
        
        if(arr[i]==v){
            p++;
            swap(arr[p],arr[i]);
        }
        
        if(arr[j]==v){
            q--;
            swap(arr[j],arr[q]);
        }
    }
    
    swap(arr[i],arr[r]);
    
//     left same occurences from beginning to adj of arr[i];
    j =i-1;
    for(int k=l;k<p;k++,j--){
        swap(arr[k],arr[j]);
    }
    
//     right same occurences from end to adj to arr[i];
    i=i+1;
    for(int k=r-1;k>q;k--,i++){
        swap(arr[i],arr[k]);
    }
    
}

void quickSort(vector<int> &arr,int l,int r){
    if(r<=l){
        return;
    }
    int i,j;
    partition(arr,l,r,i,j);
    quickSort(arr,l,j);
    quickSort(arr,i,r);
}

vector<int> quickSortUsingDutchNationalFlag(vector<int> &arr){
    // Write your code here.
    quickSort(arr,0,arr.size()-1);
    return arr;
}
