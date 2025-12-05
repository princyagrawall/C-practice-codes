int factorial(int n) {
    if (n == 0 || n == 1)  // base case
        return 1;
    else
        return n * factorial(n - 1);  // recursive call
}
