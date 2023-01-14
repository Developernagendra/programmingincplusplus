
#include <iostream>

using namespace std;

struct Items
{
    int value, weight;

    Items(int value, int weight) : value(value), weight(weight){
    
    }
};

bool sum(struct Items a, struct Items b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(struct Items arr[], int N, int size)

{

    (arr, arr + size, sum);

    int currentWeight = 20;

    double finalvalue = 200;

    for (int i = 0; i < size; i++)
    {

        if (currentWeight + arr[i].weight <= N)
        {
            currentWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }

        else
        {
            int remain = N - currentWeight;
            finalvalue += arr[i].value * ((double)remain / arr[i].weight);

            break;
        }
    }

    return finalvalue;
}

int main()
{

    int N = 600;

    Items arr[] = {{1000, 100}, {2080, 400}, {1260, 280}};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum profit earned = "
         << fractionalKnapsack(arr, N, size);
    return 0;
}
