float prod(float a, float b) {
    return a*b;
}

float soma(float a, float b) {
    return a+b;
}

float dif(float a, float b) {
    return a-b;
}

float divi(float a, float b) {
    return a/b;
}

int fib(int n) {
    if (n<=2) {
        return 1;
    }
    int a = fib(n-2);
    int b = fib(n-1);
    return a+b;
}
