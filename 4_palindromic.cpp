#include <iostream>
using namespace std;
#include <sstream>

int checkpalindrome(int number)
{

    stringstream ss;
    ss << number;
    string n;
    ss >> n;
    int length = n.length();

    for (int i = 0; i < int(length / 2); i++)
    {
        if (n[i] != n[length - i - 1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int largest = 0;
    int num1, num2;
    for (int i = 999; i > 100; i--)
    {
        for (int j = 999; j > 100; j--)
        {
            // cout<<"YES";
            if (checkpalindrome(i * j))
            {

                if (i * j > largest)
                {
                    largest = i * j;
                    num1 = i;
                    num2 = j;
                }
            }
        }
    }

    cout << "Largest is:" << largest << " ";
    cout << "Product of :" << num1 << " and " << num2;
    return 0;
}
