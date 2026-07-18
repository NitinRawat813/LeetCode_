bool consecutiveSetBits(int n) {
    int count=0;
    while(n>1){
        int m=n%2;
        n=n/2;
        int m1=n%2;
        if(m == 1 && m1 == 1) count++;
    }
    return count==1;
}