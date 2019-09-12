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
    if (n == 0 || n == 1) {
        return 1;
    }
    else{
    	return fib(n - 1) + fib(n - 2);	
	}
    
}
