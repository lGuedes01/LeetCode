int climbStairs(int n) {
    if(n <= 1)
        return 1;
    if(n == 2)
        return 2;
    int c = 2;
    int p = 1;
    for(int i = 2; i < n; i++){
        int temp = c;
        c = c + p;
        p = temp;
    }
    return c;
}
