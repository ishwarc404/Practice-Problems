#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int prev = 0;
    int current = 1;
    int limit = 40000000;

    while (current < limit)
    {
        if (current % 2 == 0)
            sum += current;

        //generating the next number of the series
        int temp = current;
        current += prev;
        prev = temp;
    }

    cout << "Sum of all those numbers are: " << sum;
    return 0;
}