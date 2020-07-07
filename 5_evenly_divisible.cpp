#include <iostream>
using namespace std;

int main()
{
    //evenly divisible by all numbers between 1-20
    //need two loops //start with 20 i guess
    int number = 20;
    bool flag = true;
    while(true)
    {   
        flag = true;
        for(int i=1;i<=20;i++)
        {
            if(number%i!=0)
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            cout<<number;
            break;
        }

        number+=1;
    }

    return 0;
}

//way better solution
/*
https://www.quora.com/What-is-the-smallest-positive-number-that-is-evenly-divisible-by-all-of-the-numbers-from-1-to-20-1
*/