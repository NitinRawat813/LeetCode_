
int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
 int n = studentsSize;
 int front = 0;
 int top = 0;
 int count = 0;
 int rear = studentsSize - 1;
int arr[10000];
for(int i = 0;i<studentsSize;i++){
    arr[i]=students[i];
}
 while(n != 0){
    if( arr[front] == sandwiches[top]){
        front++;
        top++;
        n = n - 1;
        count=0;
    }
    else{
        arr[rear + 1] = arr[front];
        front++;
        count++;
        rear++;
        
    }
    if( count == n){
        return count;
    }
 }
 return 0 ;
}