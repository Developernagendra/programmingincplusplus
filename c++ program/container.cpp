#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int a[20], sum, capacity, nc, i;
    cout << "enter capacity of ship" << endl;
    cin >> capacity;
    cout << "enter no. of container" << endl;
    cin >> nc;
    cout << "enter sorted weight of container" << endl;
    
    for (i = 0;i < nc;i++)
    {
        cin >> a[i];
    }
    for (i = 0;i < nc;i++)
    {
        sum = 0;
        if ((sum + a[i]) < capacity)

        {
            
            sum = a[i] + sum;
            cout << i << endl;
            capacity -= sum;
            cout << "total container weight: " << sum << endl;

        }

    }


    return 0;

}