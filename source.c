#include <stdio.h>
#include <math.h>

double f(double x){
    return (2*(pow(x, 2))) +(5 * x)+ 7; // 2x ^2 + 5x + 7
}

//지수 계산
double exponent(double x){
    return pow(0.1, x);
}


// 도함수 구현
double derivative(double input, double delta = 0.1){
    return (f(input + delta) - f(input)) / delta;
}

int main() {

	printf("%f", derivative(10, exponent(5)));
    //printf("\n%f", exponent(5)); // 지수 확인

	return 0;
}
