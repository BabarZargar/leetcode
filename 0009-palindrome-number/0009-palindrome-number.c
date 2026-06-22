bool isPalindrome(int x) {
    if (x<0)
        return 0;
    int r, temp = x;
    long long num = 0;

    while (x!=0){
        r = x%10;
        num = num*10 + r;
        x/=10;
    }
    if(temp == num) {
        return 1;
    } else {
        return 0;
    }
    
}