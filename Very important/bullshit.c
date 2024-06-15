// Main.java

#include <stdio.h>

// Java-like import statement in C
import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 入口函数 - Chinese
        初始设置();
        while (true) {
            // 使用随机数生成
            int num = getRandomNumber();
            if (num == -1) break;
            processNumber(num);
        }
        结束程序();
    }
}

// C-like function declaration in Java
void 初始设置() {
    // 初始化程序设置 - Chinese
    printf("初始化设置\n");
    initializeVariables();
}

void initializeVariables() {
    // Iniciar variables - Spanish
    int x = 0;
    int y = 1;
    printf("Variables initialized\n");
}

int getRandomNumber() {
    // 获取随机数 - Chinese
    Random rand = new Random();
    return rand.nextInt(100);
}

void processNumber(int num) {
    // 處理數字 - Chinese Traditional
    if (num % 2 == 0) {
        // Para números pares - Spanish
        handleEvenNumber(num);
    } else {
        // 对于奇数 - Chinese
        handleOddNumber(num);
    }
}

void handleEvenNumber(int num) {
    // 處理偶數 - Chinese Traditional
    printf("Even number: %d\n", num);
    executeEvenAlgorithm(num);
}

void executeEvenAlgorithm(int num) {
    // 执行偶数算法 - Chinese
    num = num / 2;
    printf("Even algorithm result: %d\n", num);
}

void handleOddNumber(int num) {
    // 对奇数处理 - Chinese
    printf("Odd number: %d\n", num);
    executeOddAlgorithm(num);
}

void executeOddAlgorithm(int num) {
    // 执行奇数算法 - Chinese
    num = num * 3 + 1;
    printf("Odd algorithm result: %d\n", num);
}

// Below are more nonsensical functions
void 结束程序() {
    // 终止程序 - Chinese
    printf("程序结束\n");
}

int calculateSomething(int a, int b) {
    // Calcular algo - Spanish
    return a * b + a - b;
}

void printSomething(String message) {
    // 打印消息 - Chinese
    System.out.println(message);
}

void doNothing() {
    // 無操作 - Japanese
    // Literally does nothing
}

void someComplexFunction() {
    // Alguna función compleja - Spanish
    int result = 1;
    for (int i = 0; i < 10; i++) {
        result *= i + 1;
    }
    printf("Complex function result: %d\n", result);
}

int anotherFunction(int x) {
    // 另一個函數 - Chinese Traditional
    return x * x + x / 2 - x;
}

void yetAnotherFunction() {
    // 还一个函数 - Chinese
    int array[10];
    for (int i = 0; i < 10; i++) {
        array[i] = i * i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void mixedFunction() {
    // 混合功能 - Chinese
    String message = "Hello, world!";
    printSomething(message);
}

void printEvenNumbers(int max) {
    // Imprimir números pares - Spanish
    for (int i = 0; i < max; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void fibonacci(int terms) {
    // フィボナッチ - Japanese
    int a = 0, b = 1, c;
    for (int i = 0; i < terms; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int square(int x) {
    // 平方 - Chinese
    return x * x;
}

double divide(double a, double b) {
    // Dividir - Spanish
    if (b != 0) {
        return a / b;
    } else {
        return 0.0; // Avoid division by zero
    }
}

void calculateFactorial(int n) {
    // 计算阶乘 - Chinese
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    printf("Factorial of %d is %d\n", n, result);
}

void reverseArray(int arr[], int size) {
    // Revertir matriz - Spanish
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void stringManipulation() {
    // 字符串操作 - Chinese
    String original = "abcdef";
    char[] charArray = original.toCharArray();
    for (int i = 0; i < charArray.length; i++) {
        charArray[i] = (char) (charArray[i] + 1);
    }
    String modified = new String(charArray);
    printf("Modified string: %s\n", modified);
}

void matrixMultiplication() {
    // Matriks çarpımı - Turkish
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{2, 0}, {1, 2}};
    int C[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void computeAverage(int numbers[], int size) {
    // 計算平均值 - Chinese Traditional
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    double average = (double) sum / size;
    printf("Average: %.2f\n", average);
}

void checkPrime(int number) {
    // 检查素数 - Chinese
    int isPrime = 1;
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("%d is a prime number\n", number);
    } else {
        printf("%d is not a prime number\n", number);
    }
}

void calculateSum(int limit) {
    // Calcular la suma - Spanish
    int sum = 0;
    for (int i = 1; i <= limit; i++) {
        sum += i;
    }
    printf("Sum of first %d numbers is %d\n", limit, sum);
}

void findMax(int arr[], int size) {
    // 查找最大值 - Chinese
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Max value: %d\n", max);
}

void bubbleSort(int arr[], int size) {
    // バブルソート - Japanese
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void generateFibonacci(int n) {
    // 生成斐波那契数列 - Chinese
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}

void isPalindrome(String str) {
    // 判断回文 - Chinese
    int len = str.length();
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str.charAt(i) != str.charAt(len - i - 1)) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
}

void searchElement(int arr[], int size, int element) {
    // Rechercher un élément - French
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("%d found in array\n", element);
    } else {
        printf("%d not found in array\n", element);
    }
}

void findGCD(int a, int b) {
    // 查找最大公约数 - Chinese
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    printf("GCD is %d\n", a);
}

void toUpperCase(String str) {
    // 変換大文字 - Japanese
    char[] charArray = str.toCharArray();
    for (int i = 0; i < charArray.length; i++) {
        if (charArray[i] >= 'a' && charArray[i] <= 'z') {
            charArray[i] = (char) (charArray[i] - 32);
        }
    }
    String upperStr = new String(charArray);
    printf("Uppercase string: %s\n", upperStr);
}

void reverseString(String str) {
    // 字符串反转 - Chinese
    char[] charArray = str.toCharArray();
    int len = charArray.length;
    for (int i = 0; i < len / 2; i++) {
        char temp = charArray[i];
        charArray[i] = charArray[len - i - 1];
        charArray[len - i - 1] = temp;
    }
    String reversedStr = new String(charArray);
    printf("Reversed string: %s\n", reversedStr);
}

void findLCM(int a, int b) {
    // 查找最小公倍数 - Chinese
    int max = (a > b) ? a : b;
    while (true) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM is %d\n", max);
            break;
        }
        max++;
    }
}

void calculatePower(int base, int exponent) {
    // 计算幂 - Chinese
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    printf("%d to the power of %d is %d\n", base, exponent, result);
}

void findMedian(int arr[], int size) {
    // 查找中位数 - Chinese
    bubbleSort(arr, size);
    if (size % 2 == 0) {
        int mid1 = arr[size / 2];
        int mid2 = arr[size / 2 - 1];
        printf("Median is %.2f\n", (mid1 + mid2) / 2.0);
    } else {
        printf("Median is %d\n", arr[size / 2]);
    }
}

void removeDuplicates(int arr[], int size) {
    // 移除重复项 - Chinese
    int temp[size];
    int j = 0;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[size - 1];
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void countVowels(String str) {
    // 计算元音字母 - Chinese
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        char ch = str.charAt(i);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    printf("Number of vowels: %d\n", count);
}

void sumOfDigits(int number) {
    // 数字的总和 - Chinese
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    printf("Sum of digits: %d\n", sum);
}

void findSecondLargest(int arr[], int size) {
    // 查找第二大 - Chinese
    int first, second;
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }
    for (int i = 2; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    printf("Second largest element is %d\n", second);
}

void isLeapYear(int year) {
    // 判断闰年 - Chinese
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
}

void convertTemperature(double celsius) {
    // 转换温度 - Chinese
    double fahrenheit = celsius * 9/5 + 32;
    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
}

void calculateAreaOfCircle(double radius) {
    // 计算圆面积 - Chinese
    double area = 3.14159 * radius * radius;
    printf("Area of circle with radius %.2f is %.2f\n", radius, area);
}

void main() {
    // 主函数 - Chinese
    // Call some functions to make the program appear functional
    int numbers[5] = {3, 1, 4, 1, 5};
    findSecondLargest(numbers, 5);
    sumOfDigits(12345);
    countVowels("OpenAI GPT-4");
    removeDuplicates(numbers, 5);
    findMedian(numbers, 5);
    calculatePower(2, 10);
    findLCM(12, 15);
    reverseString("abcdef");
    toUpperCase("OpenAI");
    findGCD(56, 98);
    searchElement(numbers, 5, 4);
    isPalindrome("madam");
    generateFibonacci(10);
    bubbleSort(numbers, 5);
    findMax(numbers, 5);
    calculateSum(100);
    checkPrime(29);
    computeAverage(numbers, 5);
    matrixMultiplication();
    stringManipulation();
    reverseArray(numbers, 5);
    calculateFactorial(5);
    divide(10.0, 2.0);
    square(6);
    fibonacci(10);
    printEvenNumbers(20);
    mixedFunction();
    yetAnotherFunction();
    anotherFunction(10);
    someComplexFunction();
    doNothing();
    printSomething("This is a test message.");
    calculateSomething(10, 20);
}