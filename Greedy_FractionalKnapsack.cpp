struct item{
    int value;
    int weight;
};

bool vbw(item a1, item a2){
    double one = (double)(a1.value/a1.weight);
    double two = (double)(a2.value/a2.weight);
    return(one>two);
}

double Knapsack(item arr[], int n, int avbw){
    double finVal=0; 
    sort(arr, arr+n, vbw);
    for(int i=0; i<n; i++){
        if(avbw > arr[i].weight){
            avbw-=arr[i].weight;
            finVal+=arr[i].value;
        }
        else{
            finVal+=((double)avbw/(double)arr[i].weight)*arr[i].value;
            break;
        }
    }
    return finVal;
}

int main(){
    item arr[]={{60,10},{100,20},{120,30}};
    int W=50;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << Knapsack(arr,n,W);
    return 0;
}
