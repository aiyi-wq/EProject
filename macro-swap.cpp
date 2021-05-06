/*************************************************************************
	> File Name: macro-swap.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Wed 21 Apr 2021 09:45:30 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#define SWAP(x, y) {\
    __typeof(x) __temp = x;\
    x = y; y = __temp;\
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    SWAP(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
