//C Program Assignment-2


//Answer :2
#include <stdio.h>
int main(void) {
    float price, total = 0;
    int quantity, i;
    for (i = 1; i <= 3; i++) {
        printf("Enter price of product %d: ", i);
        scanf("%f", &price);
        printf("Enter quantity of product %d: ", i);
        scanf("%d", &quantity);
        total += price * quantity;
    }
    printf("Total bill = Rs. %.2f\\n", total);
    return 0;
}

//Answer:3

#include <stdio.h>
int main(void) {
    float programming, database, networking, average;
    char grade;
    printf("Enter Programming, Database and Networking marks: ");
    scanf("%f %f %f", &programming, &database, &networking);
    average = (programming + database + networking) / 3.0f;
    if (average >= 75) grade = 'A';
    else if (average >= 65) grade = 'B';
    else if (average >= 55) grade = 'C';
    else if (average >= 40) grade = 'S';
    else grade = 'F';
    printf("Average = %.2f\\nGrade = %c\\n", average, grade);
    return 0;
}

//Answer:4

#include <stdio.h>
int main(void) {
    int units;
    float bill;
    printf("Enter electricity units: ");
    scanf("%d", &units);
    if (units < 0) {
        printf("Invalid units\\n");
        return 1;
    }
    if (units <= 100) bill = units * 10.0f;
    else if (units <= 200) bill = 100 * 10.0f + (units - 100) * 15.0f;
    else bill = 100 * 10.0f + 100 * 15.0f + (units - 200) * 20.0f;
    printf("Electricity bill = Rs. %.2f\\n", bill);
    return 0;
}


//Answer:5

#include <stdio.h>
int main(void) {
    float balance;
    int amount;
    printf("Enter account balance: ");
    scanf("%f", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);
    if (amount <= 0) printf("Invalid withdrawal amount\\n");
    else if (amount % 500 != 0) printf("Amount must be a multiple of Rs. 500\\n");
    else if (amount > balance) printf("Insufficient balance\\n");
    else {
        balance -= amount;
        printf("Remaining balance = Rs. %.2f\\n", balance);
    }
    return 0;
}

//Answer:6

#include <stdio.h>
int main(void) {
    int choice;
    float temp, result;
    printf("1. Celsius to Fahrenheit\\n2. Fahrenheit to Celsius\\nChoose: ");
    scanf("%d", &choice);
    printf("Enter temperature: ");
    scanf("%f", &temp);
    switch (choice) {
        case 1: result = temp * 9.0f / 5.0f + 32; printf("Fahrenheit = %.2f\\n", result); break;
        case 2: result = (temp - 32) * 5.0f / 9.0f; printf("Celsius = %.2f\\n", result); break;
        default: printf("Invalid choice\\n");
    }
    return 0;
}

//Answer:7

Question 7: Simple Calculator
Input two numbers and an operator (+, -, *, /, %). Use switch and display the result.
Answer - C Program
#include <stdio.h>
int main(void) {
    double a, b;
    char op;
    printf("Enter expression (number operator number): ");
    scanf("%lf %c %lf", &a, &op, &b);
    switch (op) {
        case '+': printf("Result = %.2f\\n", a + b); break;
        case '-': printf("Result = %.2f\\n", a - b); break;
        case '*': printf("Result = %.2f\\n", a * b); break;
        case '/':
            if (b == 0) printf("Cannot divide by zero\\n");
            else printf("Result = %.2f\\n", a / b);
            break;
        case '%':
            if ((int)b == 0) printf("Cannot use modulo by zero\\n");
            else printf("Result = %d\\n", (int)a % (int)b);
            break;
        default: printf("Invalid operator\\n");
    }
    return 0;
}

//Answer:8

#include <stdio.h>
#include <string.h>
int main(void) {
    char username[30], password[30];
    printf("Username: ");
    scanf("%29s", username);
    printf("Password: ");
    scanf("%29s", password);
    if (strcmp(username, "admin") == 0 && strcmp(password, "12345") == 0)
        printf("Login Successful\\n");
    else
        printf("Invalid Username or Password\\n");
    return 0;
}

//Answer:9

#include <stdio.h>
int main(void) {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number > 0) printf("Positive\\n");
    else if (number < 0) printf("Negative\\n");
    else printf("Zero\\n");
    if (number % 2 == 0) printf("Even\\n");
    else printf("Odd\\n");
    return 0;
}

//Answer:10

#include <stdio.h>
int main(void) {
    int hours, fee;
    printf("Enter parking hours: ");
    scanf("%d", &hours);
    if (hours <= 0) {
        printf("Invalid number of hours\\n");
        return 1;
    }
    if (hours <= 2) fee = 100;
    else if (hours <= 5) fee = 200;
    else fee = 500;
    printf("Parking fee = Rs. %d\\n", fee);
    return 0;
}

//Answer:11

#include <stdio.h>
int main(void) {
    int day, status, present = 0, absent = 0;
    for (day = 1; day <= 7; day++) {
        printf("Day %d (1=Present, 0=Absent): ", day);
        scanf("%d", &status);
        if (status == 1) present++;
        else if (status == 0) absent++;
        else { printf("Enter only 1 or 0. Try again.\\n"); day--; }
    }
    printf("Present days = %d\\nAbsent days = %d\\nAttendance = %.2f%%\\n",
           present, absent, present * 100.0 / 7);
    return 0;
}

//Answer:12

#include <stdio.h>
int main(void) {
    float sales[7], total = 0, highest, lowest;
    int i;
    for (i = 0; i < 7; i++) {
        printf("Enter sales for day %d: ", i + 1);
        scanf("%f", &sales[i]);
        total += sales[i];
    }
    highest = lowest = sales[0];
    for (i = 1; i < 7; i++) {
        if (sales[i] > highest) highest = sales[i];
        if (sales[i] < lowest) lowest = sales[i];
    }
    printf("Total = %.2f\\nAverage = %.2f\\nHighest = %.2f\\nLowest = %.2f\\n",
           total, total / 7, highest, lowest);
    return 0;
}

//Answer:13

#include <stdio.h>
int main(void) {
    int marks[10], i, passed = 0, failed = 0, highest, lowest, total = 0;
    for (i = 0; i < 10; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
        if (marks[i] >= 50) passed++; else failed++;
    }
    highest = lowest = marks[0];
    for (i = 1; i < 10; i++) {
        if (marks[i] > highest) highest = marks[i];
        if (marks[i] < lowest) lowest = marks[i];
    }
    printf("Highest = %d\\nLowest = %d\\nAverage = %.2f\\nPassed = %d\\nFailed = %d\\n",
           highest, lowest, total / 10.0, passed, failed);
    return 0;
}

//Answer:14

#include <stdio.h>
int main(void) {
    int number, i;
    printf("Enter number: ");
    scanf("%d", &number);
    for (i = 1; i <= 12; i++)
        printf("%d x %d = %d\\n", number, i, number * i);
    return 0;
}

//Answer:15

#include <stdio.h>
int main(void) {
    int amount, n5000, n1000, n500, n100;
    printf("Enter withdrawal amount (multiples of Rs. 100): ");
    scanf("%d", &amount);
    if (amount < 0 || amount % 100 != 0) {
        printf("Amount must be a non-negative multiple of Rs. 100.\\n");
        return 1;
    }
    n5000 = amount / 5000; amount %= 5000;
    n1000 = amount / 1000; amount %= 1000;
    n500 = amount / 500; amount %= 500;
    n100 = amount / 100;
    printf("Rs.5000 notes = %d\\nRs.1000 notes = %d\\nRs.500 notes = %d\\nRs.100 notes = %d\\n",
           n5000, n1000, n500, n100);
    return 0;
}

//Answer:16

#include <stdio.h>
int main(void) {
    float usage[12], total = 0, highest, lowest;
    int i, highMonth = 1, lowMonth = 1;
    for (i = 0; i < 12; i++) {
        printf("Enter consumption for month %d: ", i + 1);
        scanf("%f", &usage[i]);
        total += usage[i];
    }
    highest = lowest = usage[0];
    for (i = 1; i < 12; i++) {
        if (usage[i] > highest) { highest = usage[i]; highMonth = i + 1; }
        if (usage[i] < lowest) { lowest = usage[i]; lowMonth = i + 1; }
    }
    printf("Total annual consumption = %.2f\\nAverage monthly consumption = %.2f\\n",
           total, total / 12);
    printf("Highest consumption = %.2f (Month %d)\\nLowest consumption = %.2f (Month %d)\\n",
           highest, highMonth, lowest, lowMonth);
    return 0;
}

//Answer:17

#include <stdio.h>
int main(void) {
    int secret = 27, guess, attempts = 0;
    do {
        printf("Guess the secret number (1-100): ");
        scanf("%d", &guess);
        attempts++;
        if (guess > secret) printf("Too High\\n");
        else if (guess < secret) printf("Too Low\\n");
        else printf("Correct!\\n");
    } while (guess != secret);
    printf("Attempts = %d\\n", attempts);
    return 0;
}

//Answer:18

#include <stdio.h>
int main(void) {
    float normalHours, overtimeHours, rate, normalSalary, overtimePay;
    printf("Enter normal working hours: ");
    scanf("%f", &normalHours);
    printf("Enter overtime hours: ");
    scanf("%f", &overtimeHours);
    printf("Enter hourly rate: ");
    scanf("%f", &rate);
    normalSalary = normalHours * rate;
    overtimePay = overtimeHours * rate * 1.5f;
    printf("Normal salary = Rs. %.2f\\nOvertime payment = Rs. %.2f\\nTotal salary = Rs. %.2f\\n",
           normalSalary, overtimePay, normalSalary + overtimePay);
    return 0;
}

//Answer:19

#include <stdio.h>
int main(void) {
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter a number (0-20): ");
    scanf("%d", &n);
    if (n < 0 || n > 20) {
        printf("Enter a number from 0 to 20.\\n");
        return 1;
    }
    for (i = 1; i <= n; i++) factorial *= i;
    printf("Factorial = %llu\\n", factorial);
    return 0;
}

//Answer:20

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long number, temp, reverse = 0;
    int digits = 0, sum = 0;
    printf("Enter an integer: ");
    scanf("%lld", &number);
    temp = llabs(number);
    if (temp == 0) digits = 1;
    while (temp > 0) {
        int digit = (int)(temp % 10);
        reverse = reverse * 10 + digit;
        sum += digit;
        digits++;
        temp /= 10;
    }
    if (number < 0) reverse = -reverse;
    printf("Reverse = %lld\\nDigits = %d\\nSum of digits = %d\\n", reverse, digits, sum);
    return 0;
}

//Answer:21

#include <stdio.h>
int main(void) {
    float prices[10], target;
    int i, found = 0;
    for (i = 0; i < 10; i++) {
        printf("Enter price %d: ", i + 1);
        scanf("%f", &prices[i]);
    }
    printf("Enter price to search: ");
    scanf("%f", &target);
    for (i = 0; i < 10; i++) {
        if (prices[i] == target) { found = 1; break; }
    }
    if (found) printf("Product Price Found\\n");
    else printf("Product Price Not Found\\n");
    return 0;
}

//Answer:22

#include <stdio.h>
int main(void) {
    int marks[10], i, j, temp;
    for (i = 0; i < 10; i++) {
        printf("Enter mark %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (marks[j] > marks[j + 1]) {
                temp = marks[j]; marks[j] = marks[j + 1]; marks[j + 1] = temp;
            }
        }
    }
    printf("Sorted marks: ");
    for (i = 0; i < 10; i++) printf("%d ", marks[i]);
    printf("\\n");
    return 0;
}

//Answer:23

#include <stdio.h>
int main(void) {
    float amount[10], totalDeposits = 0, highest, lowest;
    int i, above = 0;
    for (i = 0; i < 10; i++) {
        printf("Enter transaction %d amount: ", i + 1);
        scanf("%f", &amount[i]);
        if (amount[i] > 0) totalDeposits += amount[i];
        if (amount[i] > 10000) above++;
    }
    highest = lowest = amount[0];
    for (i = 1; i < 10; i++) {
        if (amount[i] > highest) highest = amount[i];
        if (amount[i] < lowest) lowest = amount[i];
    }
    printf("Total deposits = Rs. %.2f\\nTransactions above Rs.10000 = %d\\n",
           totalDeposits, above);
    printf("Highest transaction = %.2f\\nLowest transaction = %.2f\\n", highest, lowest);
    return 0;
}

//Answer:24

#include <stdio.h>
int main(void) {
    int a[10], i, j, k, alreadyPrinted;
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Duplicate values:\\n");
    for (i = 0; i < 10; i++) {
        alreadyPrinted = 0;
        for (k = 0; k < i; k++) if (a[k] == a[i]) alreadyPrinted = 1;
        if (alreadyPrinted) continue;
        for (j = i + 1; j < 10; j++) {
            if (a[i] == a[j]) { printf("%d\\n", a[i]); break; }
        }
    }
    return 0;
}

//Answer:25

#include <stdio.h>
int main(void) {
    int a[10], i, temp;
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++) {
        temp = a[i]; a[i] = a[9 - i]; a[9 - i] = temp;
    }
    printf("Reversed array: ");
    for (i = 0; i < 10; i++) printf("%d ", a[i]);
    printf("\\n");
    return 0;
}

//Answer:26

#include <stdio.h>
#include <string.h>
int main(void) {
    char names[5][50], search[50];
    int i, found = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter employee name %d: ", i + 1);
        scanf(" %49[^\\n]", names[i]);
    }
    printf("\\nEmployee names:\\n");
    for (i = 0; i < 5; i++) printf("%s\\n", names[i]);
    printf("Enter name to search: ");
    scanf(" %49[^\\n]", search);
    for (i = 0; i < 5; i++) {
        if (strcmp(names[i], search) == 0) { found = 1; break; }
    }
    if (found) printf("Employee Found\\n"); else printf("Employee Not Found\\n");
    return 0;
}

//Answer:27

#include <stdio.h>
#include <string.h>
int main(void) {
    char names[10][50], search[50];
    int i, found = 0;
    for (i = 0; i < 10; i++) {
        printf("Enter student name %d: ", i + 1);
        scanf(" %49[^\\n]", names[i]);
    }
    printf("Enter name to search: ");
    scanf(" %49[^\\n]", search);
    for (i = 0; i < 10; i++) {
        if (strcmp(names[i], search) == 0) { found = 1; break; }
    }
    if (found) printf("Student Found\\n"); else printf("Student Not Found\\n");
    return 0;
}

//Answer:28

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char password[100];
    int i, hasDigit = 0;
    printf("Enter password: ");
    scanf("%99s", password);
    for (i = 0; password[i] != '\\0'; i++)
        if (isdigit((unsigned char)password[i])) hasDigit = 1;
    if (strlen(password) >= 8 && hasDigit) printf("Strong Password\\n");
    else printf("Weak Password\\n");
    return 0;
}

//Answer:29

#include <stdio.h>
#include <ctype.h>
int main(void) {
    char sentence[300];
    int i, characters = 0, spaces = 0, digits = 0, vowels = 0;
    printf("Enter a sentence: ");
    scanf("%299[^\\n]", sentence);
    for (i = 0; sentence[i] != '\\0'; i++) {
        characters++;
        if (sentence[i] == ' ') spaces++;
        if (isdigit((unsigned char)sentence[i])) digits++;
        if (strchr("aeiouAEIOU", sentence[i]) != NULL) vowels++;
    }
    printf("Characters = %d\\nSpaces = %d\\nDigits = %d\\nVowels = %d\\n",
           characters, spaces, digits, vowels);
    return 0;
}

//Answer:30

#include <stdio.h>
int main(void) {
    char names[5][50];
    int marks[5], i, highestIndex = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter student name %d: ", i + 1);
        scanf(" %49[^\\n]", names[i]);
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
        if (marks[i] > marks[highestIndex] || i == 0) highestIndex = i;
    }
    printf("\\nStudent\\tMark\\n--------------------\\n");
    for (i = 0; i < 5; i++) printf("%s\\t%d\\n", names[i], marks[i]);
    printf("Highest mark: %s (%d)\\n", names[highestIndex], marks[highestIndex]);
    return 0;
}

//Answer:31

#include <stdio.h>
float calculateSalary(float basic, float allowance, float bonus) {
    return basic + allowance + bonus;
}
int main(void) {
    float basic, allowance, bonus;
    printf("Enter basic salary, allowance and bonus: ");
    scanf("%f %f %f", &basic, &allowance, &bonus);
    printf("Total salary = Rs. %.2f\\n", calculateSalary(basic, allowance, bonus));
    return 0;
}

//Answer:32

#include <stdio.h>
char calculateGrade(float average) {
    if (average >= 75) return 'A';
    if (average >= 65) return 'B';
    if (average >= 55) return 'C';
    if (average >= 40) return 'S';
    return 'F';
}
int main(void) {
    float average;
    printf("Enter average mark: ");
    scanf("%f", &average);
    printf("Grade = %c\\n", calculateGrade(average));
    return 0;
}

//Answer:33


#include <stdio.h>
int findMaximum(int a[], int n) {
    int i, max = a[0];
    for (i = 1; i < n; i++) if (a[i] > max) max = a[i];
    return max;
}
int findMinimum(int a[], int n) {
    int i, min = a[0];
    for (i = 1; i < n; i++) if (a[i] < min) min = a[i];
    return min;
}
int main(void) {
    int a[5], i;
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Maximum = %d\\nMinimum = %d\\n", findMaximum(a, 5), findMinimum(a, 5));
    return 0;
}

//Answer:34

#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before: A = %d, B = %d\\n", a, b);
    swap(&a, &b);
    printf("After: A = %d, B = %d\\n", a, b);
    return 0;
}

//Answer:35

#include <stdio.h>
void updateBalance(float *balance, float withdrawal) {
    if (withdrawal > 0 && withdrawal <= *balance) *balance -= withdrawal;
    else printf("Invalid withdrawal or insufficient balance\\n");
}
int main(void) {
    float balance, withdrawal;
    printf("Enter current balance: ");
    scanf("%f", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawal);
    updateBalance(&balance, withdrawal);
    printf("Updated balance = Rs. %.2f\\n", balance);
    return 0;
}

//Answer:36

#include <stdio.h>
int calculateSum(int a[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) sum += a[i];
    return sum;
}
int main(void) {
    int a[5], i;
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Sum = %d\\n", calculateSum(a, 5));
    return 0;
}

//Answer:37

#include <stdio.h>
void increaseSalary(float *salary, float percentage) {
    *salary += *salary * percentage / 100.0f;
}
int main(void) {
    float salary, percentage;
    printf("Enter current salary: ");
    scanf("%f", &salary);
    printf("Enter increment percentage: ");
    scanf("%f", &percentage);
    increaseSalary(&salary, percentage);
    printf("New salary = Rs. %.2f\\n", salary);
    return 0;
}

//Answer:38

#include <stdio.h>

void addMarks(int marks[], int *n) {
    int count, i;
    printf("How many marks to add? ");
    scanf("%d", &count);
    if (count < 1 || *n + count > MAX) { printf("Invalid count or capacity exceeded.\\n"); return; }
    for (i = 0; i < count; i++) {
        printf("Enter mark: ");
        scanf("%d", &marks[*n]);
        (*n)++;
    }
}
void displayMarks(int marks[], int n) {
    int i;
    if (n == 0) { printf("No marks recorded.\\n"); return; }
    for (i = 0; i < n; i++) printf("%d ", marks[i]);
    printf("\\n");
}
void showHighLowAverage(int marks[], int n) {
    int i, high, low, total = 0;
    if (n == 0) { printf("No marks recorded.\\n"); return; }
    high = low = marks[0];
    for (i = 0; i < n; i++) {
        if (marks[i] > high) high = marks[i];
        if (marks[i] < low) low = marks[i];
        total += marks[i];
    }
    printf("Highest = %d\\nLowest = %d\\nAverage = %.2f\\n", high, low, total / (float)n);
}
int main(void) {
    int marks[MAX], n = 0, choice;
    do {
        printf("\\n1.Add marks  2.Display marks  3.Highest/Lowest/Average  4.Exit\\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addMarks(marks, &n); break;
            case 2: displayMarks(marks, n); break;
            case 3: showHighLowAverage(marks, n); break;
            case 4: printf("Goodbye\\n"); break;
            default: printf("Invalid choice\\n");
        }
    } while (choice != 4);
    return 0;
}

//Answer:39

#include <stdio.h>
void checkBalance(float balance) {
    printf("Balance = Rs. %.2f\\n", balance);
}
void deposit(float *balance) {
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f", &amount);
    if (amount > 0) *balance += amount;
    else printf("Invalid deposit amount\\n");
}
void withdraw(float *balance) {
    float amount;
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= *balance) *balance -= amount;
    else printf("Invalid amount or insufficient balance\\n");
}
int main(void) {
    float balance = 0;
    int choice;
    do {
        printf("\\n1.Check Balance  2.Deposit  3.Withdraw  4.Exit\\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: checkBalance(balance); break;
            case 2: deposit(&balance); break;
            case 3: withdraw(&balance); break;
            case 4: printf("Thank you\\n"); break;
            default: printf("Invalid choice\\n");
        }
    } while (choice != 4);
    return 0;
}

//Answer:40

#include <stdio.h>
typedef struct {
    char name[50];
    float price;
    int quantity;
} Product;
void addProducts(Product p[], int *n) {
    int count, i;
    printf("How many products to add? ");
    scanf("%d", &count);
    if (count < 1 || *n + count > MAX) { printf("Invalid count or capacity exceeded.\\n"); return; }
    for (i = 0; i < count; i++) {
        printf("Product name (one word): ");
        scanf("%49s", p[*n].name);
        printf("Price: ");
        scanf("%f", &p[*n].price);
        printf("Quantity: ");
        scanf("%d", &p[*n].quantity);
        if (p[*n].price < 0 || p[*n].quantity < 0) {
            printf("Invalid price/quantity. Product not added.\\n");
            continue;
        }
        (*n)++;
    }
}
void displayProducts(Product p[], int n) {
    int i;
    if (n == 0) { printf("No products.\\n"); return; }
    printf("Name\\tPrice\\tQuantity\\n");
    for (i = 0; i < n; i++)
        printf("%s\\t%.2f\\t%d\\n", p[i].name, p[i].price, p[i].quantity);
}
void searchProduct(Product p[], int n) {
    char name[50];
    int i, found = 0;
    printf("Enter product name: ");
    scanf("%49s", name);
    for (i = 0; i < n; i++) {
        if (strcmp(p[i].name, name) == 0) {
            printf("Found: %s, Rs. %.2f, Quantity %d\\n", p[i].name, p[i].price, p[i].quantity);
            found = 1;
        }
    }
    if (!found) printf("Product not found\\n");
}
float calculateTotal(Product p[], int n) {
    int i;
    float total = 0;
    for (i = 0; i < n; i++) total += p[i].price * p[i].quantity;
    return total;
}
int main(void) {
    Product products[MAX];
    int n = 0, choice;
    float discountPercent = 0, total, discount, finalBill;
    do {
        printf("\\n1.Add Products\\n2.Display Products\\n3.Search Product\\n4.Calculate Total\\n5.Apply Discount\\n6.Display Final Bill\\n7.Exit\\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addProducts(products, &n); break;
            case 2: displayProducts(products, n); break;
            case 3: searchProduct(products, n); break;
            case 4: printf("Total = Rs. %.2f\\n", calculateTotal(products, n)); break;
            case 5:
                printf("Enter discount percentage (0-100): ");
                scanf("%f", &discountPercent);
                if (discountPercent < 0 || discountPercent > 100) {
                    printf("Invalid discount\\n"); discountPercent = 0;
                }
                break;
            case 6:
                total = calculateTotal(products, n);
                discount = total * discountPercent / 100.0f;
                finalBill = total - discount;
                printf("Subtotal = Rs. %.2f\\nDiscount = Rs. %.2f\\nFinal bill = Rs. %.2f\\n",
                       total, discount, finalBill);
                break;
            case 7: printf("Goodbye\\n"); break;
            default: printf("Invalid choice\\n");
        }
    } while (choice != 7);
    return 0;
}


