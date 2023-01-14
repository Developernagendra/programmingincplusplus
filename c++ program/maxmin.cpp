
#include <iostream>
using namespace std;

struct Pair
{
    int max;
    int min;
};

struct Pair MinMax(int arr[], int low, int high)

{
    struct Pair maxmin, sub, subj;
    int mid;

    if (low == high)
    {
        maxmin.min = arr[low];
        maxmin.max = arr[low];
        return maxmin;
    }

    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            maxmin.max = arr[low];
            maxmin.min = arr[high];
        }
        else
        {
            maxmin.max = arr[high];
            maxmin.min = arr[low];
        }
        return maxmin;
    }

    mid = (low + high) / 2;
    sub = MinMax(arr, low, mid);
    subj  = MinMax(arr, mid + 1, high);

    if (sub.min < subj.min)
        maxmin.min = sub.min;
    else
        maxmin.min = subj.min;

    if (sub.max > subj.max)
        maxmin.max = sub.max;
    else
        maxmin.max = subj.max;

    return maxmin;
}

int main()
{
    int arr[] = {234, 543, 876, 865,666,900, 222 ,444,675,1000  };
                
    int arr_size = 10;

    struct Pair minmax = MinMax(arr, 0, arr_size - 1);

    cout << "Maximum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;

    return 0;
}
