vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> vec; multiset<int> set;
        int i1, i2; i1=i2=0;
        while(i1<k){
            set.insert(arr[i1]);
            i1++;
        }
        vec.push_back(*set.rbegin());
        while(i1<n){
            set.erase(set.find(arr[i2]));
            set.insert(arr[i1]);
            vec.push_back(*set.rbegin());
            i1++; i2++;
        }
        return vec;
    }
