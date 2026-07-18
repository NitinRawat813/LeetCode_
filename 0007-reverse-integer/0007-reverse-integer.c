int reverse(int x){
int reverse = 0;
if(x >= 2147483647 || x <= -2147483648){
    return 0;
}
while (x != 0) {
    int digit = x % 10;
if (reverse > INT_MAX / 10)
    return 0;

if (reverse == INT_MAX / 10 && digit > 7)
    return 0;

if (reverse < INT_MIN / 10)
    return 0;

if (reverse == INT_MIN / 10 && digit < -8){
     return 0;
}
    reverse = reverse * 10 + digit;
    x = x / 10;
}
    return reverse;
}
