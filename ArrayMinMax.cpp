pair<long long, long long> getMinMax(long long a[], int n) {
    long long min, max;
    min = max = a[0];
    for(int i=0; i<n; i++){
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }
    pair<ll, ll> ans;
    ans.first = min;
    ans.second = max;
    return ans;
}
