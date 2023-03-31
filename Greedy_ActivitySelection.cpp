int activitySelection(vector<int> start, vector<int> end, int n){
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++)
            v.push_back({end[i], start[i]});
        sort(v.begin(),v.end());
        int count=1; int k=0;
        for(int j=1; j<n; j++){
            if(v[j].second > v[k].first){
                count++;
                k=j;
            }
        }
        return count;
    }
