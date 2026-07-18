int maxDistance(char* moves) {
    int x=0;
    int y=0;
    int k=0;
    int i=0;
    while(moves[i]!='\0'){
        if(moves[i]=='U'){ 
            y=y+1;
        }
        else if(moves[i]=='D') {
            y=y-1;
        }
        else if(moves[i]=='L') {
            x=x-1;
        }
        else if(moves[i]=='R') {
            x=x+1;
        }
        else if(moves[i]=='_') {
            k=k+1;
        }
        i=i+1;
    }
    if(x<0) x=-x;
    if(y<0) y=-y;
    int ans=x+y+k;
    return ans;
}