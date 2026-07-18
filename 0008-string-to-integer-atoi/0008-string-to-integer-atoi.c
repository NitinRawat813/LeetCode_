#include<limits.h>
int myAtoi(char* s) {
    int x = 0 , i = 0;
    int flag = 0;
    long long result = 0;
    while( s[i] != '\0'){
        while( s[i] == ' '){
            i++;
        }
        if( s[i] == '-'){
            flag = 1;
            i++;
        }
        else if( s[i] == '+'){
            i++;
        }
        if(  s[i] < '0' ||  s[i] > '9'){
            return 0;
        }
        while( s[i] >= '0' && s[i] <= '9'){
            int digit = s[i] - '0';
            if (flag == 0) {   
            if (result > INT_MAX / 10 ||
            (result == INT_MAX / 10 && digit > 7)) {
              return INT_MAX;
        }
        }          else {          
           if (result > INT_MAX / 10 ||
            (result == INT_MAX / 10 && digit > 8)) {
            return INT_MIN;
        }
        }
            result = result*10 + (s[i] - '0');
            x = 1;
            i++;
            }
            if( x == 1){
                if( flag == 1){
                    
                    return -1*result;
                }
                else{
                    return result;
                }
            }
            i++;
        }
        return 0;
    }

