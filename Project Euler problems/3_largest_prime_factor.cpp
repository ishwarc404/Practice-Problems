#include <iostream>
#include <math.h>
using namespace std;

int largest(long int n)
{
    long int largest = n;

    // checking for even
    while (n % 2 == 0)
    {
        largest = 2;
        n = n / 2;
    }

    //need to check with only the odd numbers
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            largest = i;
            n = n / i;
        }
    }

    return largest;
}

int main()
{
    long int number = 600851475143;
    cout << "Largest prime factor is: " << largest(number);
    return 0;
}