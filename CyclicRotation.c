struct Results solution(int A[], int N, int K) {
    struct Results result;
    
    int *tab;
    tab=(int*)malloc(N*sizeof(int));
    int j=0;
    int i=0;
    if(N==0){
    result.A=A;
    result.N=N;
    return result;
    }
    if(K>N){K=K%N;}
    if(K<N && K!=0){         
        for(i=N-K;i<N;i++){
            tab[j]=A[i];
            j++;
        }
    i=0;
    while(i<N-K){
        tab[j]=A[i];
        i++;
        j++;
        }
    }
    else tab=A;
    result.A = tab ;
    result.N = N ;
    return result;
}
