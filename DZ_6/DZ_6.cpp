#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

int main()
{
    //1
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " even number" << "\n\n";
    }
    else {
        cout << num << " odd number" << "\n\n";
    }
    

    //2
    int num1;
    cout << "Enter number: ";
    cin >> num1;
    int num2;
    cout << "Enter number: ";
    cin >> num2;
    int num3;
    cout << "Enter number: ";
    cin >> num3;
    if (num1 < num2 && num2 < num3 || num1 < num3 && num3 < num2) {
        cout << "Min = " << num1 << "\n\n";
    }
    else if (num2 < num1 && num1 < num3 || num2 < num3 && num3 < num1) {
        cout << "Min = " << num2 << "\n\n";
    }
    else {
        cout << "Min = " << num3 << "\n\n";
    }
    

    //3
    int number;
    cout << "Enter number: ";
    cin >> number;
    if (number > 0) {
        cout << "Positive number" << "\n\n";
    }
    else if (number < 0) {
        cout << "Negative number" << "\n\n";
    }
    else {
        cout << "= 0";
    }
    

    //4
    double a;
    cout << "Enter number: ";
    cin >> a;
    double b;
    cout << "Enter number: ";
    cin >> b;
    string sign;
    cout << "Enter + - * /: ";
    cin >> sign;
    if (sign == "+") {
        cout << a + b << "\n\n";
    }
    else if (sign == "-") {
        cout << a - b << "\n\n";
    }
    else if (sign == "*") {
        cout << a * b << "\n\n";
    }
    else if (sign == "/" && b != 0) {
        cout << a / b << "\n\n";
    }
    else {
        cout << "Something is wrong" << "\n\n";
    }
    

    //5
    unsigned char s;
    cout << "Enter symbol: ";
    cin >> s;
    if (isdigit(s)) {
        cout << "Number" << "\n\n";
    }
    else if (isalpha(s)) {
        cout << "Letter" << "\n\n";
    }
    else if (ispunct(s)) {
        cout << "Punctuation mark" << "\n\n";
    }
    else if (isspace(s)) {
        cout << "Space" << "\n\n";
    }
    else {
        cout << "Something is wrong" << "\n\n";
    }
    

    //6
    double numb;
    cout << "Enter number: ";
    cin >> numb;
    int N;
    cout << "Enter number: ";
    cin >> N;
    int M;
    cout << "Enter number: ";
    cin >> M;
    if (N <= numb && numb <= M) {
        cout << "Yes" << "\n\n";
    }
    else {
        cout << "No" << "\n\n";
    }
    

    //7
    int X;
    cout << "Enter number: ";
    cin >> X;
    int Y;
    cout << "Enter number: ";
    cin >> Y;
    if (X % Y == 0) {
        cout << "Yes" << "\n\n";
    }
    else {
        cout << "No" << "\n\n";
    }
    

    //8
    int c;
    cout << "Enter number: ";
    cin >> c;
    if (c % 3 == 0 && c % 5 == 0 && c % 7 == 0) {
        cout << "True" << "\n\n";
    }
    else {
        cout << "False" << "\n\n";
    }
    

    //9
    double n;
    cout << "Enter number: ";
    cin >> n;
    double f = fabs(n);
    cout << f << "\n\n";
    

    //10
    string four;
    cout << "Enter number: ";
    cin >> four;
    cout << four.length() << "\n\n";
    

    //11
    int pal;
    cout << "Enter number: ";
    cin >> pal;
    if (pal % 10 == (pal / 10000) % 10 && (pal / 10) % 10 == (pal / 1000) % 10) {
        cout << "Palindrome" << "\n\n";
    }
    else {
        cout << "Not a palindrome" << "\n\n";
    }
    

    //12
    int Xl;
    cout << "Enter Xl: ";
    cin >> Xl;
    int Xr;
    cout << "Enter Xr: ";
    cin >> Xr;
    int Yl;
    cout << "Enter Yl: ";
    cin >> Yl;
    int Yr;
    cout << "Enter Yr: ";
    cin >> Yr;
    int Xp;
    cout << "Enter Xp: ";
    cin >> Xp;
    int Yp;
    cout << "Enter Yp: ";
    cin >> Yp;
    if (Xp >= Xl && Xp <= Xr && Yp <= Yl && Yp >= Yr) {
        cout << "Yes" << "\n\n";
    }
    else {
        cout << "No" << "\n\n";
    }
    

    //13
    int n1;
    cout << "Enter number: ";
    cin >> n1;
    int n2;
    cout << "Enter number: ";
    cin >> n2;
    int n3;
    cout << "Enter number: ";
    cin >> n3;
    int n4;
    cout << "Enter number: ";
    cin >> n4;
    int res = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    int max = res > n4 ? res : n4;
    cout << max << "\n\n";
}
