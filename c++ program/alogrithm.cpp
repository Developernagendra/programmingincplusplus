#include<iostream>
#include<time.h>
#include<windows.h>
#include<conio.h>
using namespace std;

 int main() {
    char ch;
    int a[100], size, n, total;
    int sum(int[], int);
    cout << "\nEnter the size of an array:";
    cin >> size;
    cout << "\nEnter the element of an array:";
    for (int i = 1;i <= size;i++)
    {
        cin >> a[i];
    }
repeat:
    cout << "\nenter the number of element you want to add:";
    cin >> n;
    total = sum(a, n);
    cout << "\n sum of an array element is :" << total;
    cout << "\n do you want to repeat  y/n";
    cin >> n;
    total = sum(a, n);
    cout << "\n sum of an array element is :" << total;
    cout << "\n do you want to repeat  y/n";
    cin >> ch;
    if (ch == 'y')
        goto repeat;
    else
        cout << "\n bye";

}
int sum(int a[50], int n)
{
    int sum = 0;
    int count = 1;
    for (int k = 1;k <= n;k++)
    {
    
        count = count + 1;
        sum = sum + a[k];
        count = count + 1;
    }
    count = count + 1;
    count = count + 1;
    cout << "\ncount  value is :" << count;
    return sum;
}