int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int width;
    int min; 
    int area ;
    int temp = 0;
    while(left < right){
        width = right - left;
        int index = (height[left] < height[right])? left:right;
        min = height[index];
        area = width*min;
        if( temp < area){
            temp = area;
        }
        if(index == left){
            left++;
        }
        else{
            right--;
        }
    }
    return temp;
}