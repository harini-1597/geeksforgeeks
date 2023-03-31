void convertToWave(vector<int>& arr, int n){
        int i;
        if(n%2==0){
            for(i=0; i<n-1; i+=2){
                swap(arr[i], arr[i+1]);
            }
        }
        else{
            for(i=0; i<n-1; i+=2){
                swap(arr[i], arr[i+1]);
            }
        }
    }
