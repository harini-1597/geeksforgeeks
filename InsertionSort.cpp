int main() {
   int n=5;
    int arr[]={11,22,13,5,6};
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if((j+1)<=n-1)
                if(arr[j]>arr[j+1])
                    swap(arr[j],arr[j+1]);
    for(int k=0; k<5; k++)
        cout<<arr[k]<<" "; 
}



