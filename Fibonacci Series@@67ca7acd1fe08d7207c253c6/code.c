int fibonacciSeries(int n){
    int a,
    if(n==0 || n==1) return 1;
    for(int i=1;i<n;i++){
    a=fibonacciSeries(n-1) + fibonacciSeries(n-2);}
    return a;
}