static bool compD(Job a, Job b){
        return(a.profit > b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr, arr+n, compD);
        int count,profit; count=profit=0;
        vector<bool> a(n,false);
        for(int i=0; i<n; i++){
            for(int j=arr[i].dead; j>0 ; j--){
                if(a[j])
                    continue;
                else{
                    a[j]=true;
                    count++;
                    profit+=arr[i].profit;
                    break;
                }
            }
        }
        return {count,profit};
    }
