#include <iostream>

using namespace std;

int main()
{

    int a[20], x, y, beg = 1, end = 16;
    int detect(int[], int, int);

    for (int i = beg; i <= end; i++)
    {
        
        a[i] = 2;
    }
    cout << "which coin you want to steel?"<<endl;
    cin >> x;
    a[x] = 1;
    cout << "let us find counterfit coin by divide  and conque";
    y = detect(a, beg, end);
    cout << "counterfit coin is :" << y << endl;
}
int detect(int a[16], int b, int e)
{
    int suml = 0, sum = 0;
    int m = (b + e) / 2;
    if (b == e)
        return b;
    else
    {
        for (int i = b; i <= m; i++)
        {
            suml = suml + a[i];
        }
        cout << "\nsuml:" << suml;
        for (int i = m + 1; i <= e; i++)
        {
            sum = sum + a[i];
        }
        cout << "sum :" << sum << endl;
        if (suml < sum)
            detect(a, b, m);
        else
            detect(a, m + 1, e);
    }
};
