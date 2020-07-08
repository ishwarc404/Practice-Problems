#include <iostream>
using namespace std;
#include <math.h>

int main()
{

    signed long int sqsum = 0;
    signed long int sumsq = 0;

    for(int i=1;i<=100;i++)
    {
        sqsum += pow(i,2);
        sumsq += i;
    }

    cout<<"Difference is: "<<pow(sumsq,2) - sqsum;



}