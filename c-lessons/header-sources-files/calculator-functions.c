int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int multiply(int a, int b) {
    return a * b;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}