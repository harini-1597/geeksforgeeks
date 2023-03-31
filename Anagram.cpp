bool isAnagram(string a, string b){
        int n, m;
        n=a.length(); m=b.length();
        int p, q; p=q=0;
        // cout<<(int)a[0];
        for(int i=0; i<n; i++)
            p+=(int)a[i];
        for(int j=0; j<m; j++)
            q+=(int)b[j];
        
        // cout<<p<<endl<<q;
        if(p==q)
            return true;
        else
            return false;
    }
