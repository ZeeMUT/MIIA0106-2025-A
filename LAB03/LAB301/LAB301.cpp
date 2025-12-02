// LAB301.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter A: ");
    scanf_s("%d", &a);

    printf("Enter B: ");
    scanf_s("%d", &b);

    printf("A + B = %d\n", a + b);
    printf("A - B = %d\n", a - b);
    printf("A * B = %d\n", a * b);
    printf("A / B = %d\n", a / b); // หารจ านวนเต็ม
    printf("A %% B = %d\n", a % b); // %% เพื่อพิมพ์เครื่องหมาย %

    return 0;
}