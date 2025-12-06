#include <stdio.h>

int main() {
    int a = 10, b = 3, result;
    int x = 5, y = 7;
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    printf("==== Arithmetic Operators ====\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("\n==== Assignment Operators ====\n");
    result = a;
    printf("result = %d\n", result);
    result += b;
    printf("result += b → %d\n", result);
    result -= b;
    printf("result -= b → %d\n", result);
    result *= b;
    printf("result *= b → %d\n", result);
    result /= b;
    printf("result /= b → %d\n", result);

    printf("\n==== Increment/Decrement ====\n");
    printf("++x = %d\n", ++x);
    printf("y++ = %d (before)\n", y++);
    printf("y after y++ = %d\n", y);
    printf("--x = %d\n", --x);

    printf("\n==== Relational Operators ====\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);

    printf("\n==== Logical Operators ====\n");
    printf("(a > b) && (b > 0) = %d\n", (a > b) && (b > 0));
    printf("(a < b) || (b > 0) = %d\n", (a < b) || (b > 0));
    printf("!(a == b) = %d\n", !(a == b));

    printf("\n==== Bitwise Operators ====\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    printf("\n==== Conditional (Ternary) Operator ====\n");
    printf("(a > b) ? a : b = %d\n", (a > b) ? a : b);

    printf("\n==== sizeof Operator ====\n");
    printf("sizeof(a) = %lu\n", sizeof(a));
    printf("sizeof(arr) = %lu\n", sizeof(arr));

    printf("\n==== Pointer / Address Operators ====\n");
    printf("p = arr gives address %p\n", (void*)p);
    printf("*p = %d\n", *p);
    printf("&a = %p\n", (void*)&a);

    printf("\n==== Comma Operator ====\n");
    int c;
    c = (a = 2, b = 5, a + b); // last expression is result
    printf("Comma operator result = %d\n", c);

    return 0;
}
