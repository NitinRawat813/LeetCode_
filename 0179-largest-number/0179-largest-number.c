int cmp(const void*a, const void*b){
    char xy[50];
    char yx[50];
    int x=*(const int*)a;
    int y=*(const int*)b;
    sprintf(xy,"%d%d",x,y);
    sprintf(yx,"%d%d",y,x);
    int value=strcmp(xy,yx);
    if (value > 0) return -1;
    if (value < 0) return 1;
    return 0;
}
char* largestNumber(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    if(nums[0]==0) return "0";
    char* str=malloc(1000);
    str[0]='\0';
    for(int i=0;i<numsSize;i++){
        char temp[20];
        sprintf(temp,"%d",nums[i]);
        strcat(str,temp);
    }
    
    return str;
}