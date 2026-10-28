#include <stdio.h>

int main() {
    int n, temp, Duck = 0;

    printf("Enter a  number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        if (temp % 10 == 0) {   
            Duck = 1;
            break;
        }
        temp /= 10;
    }

    if (Duck)
        printf("%d is a duck number\n", n);
    else
        printf("%d is not a duck number\n", n);

    return 0;
}