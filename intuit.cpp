#include <iostream>
using namespace std;

void exchangeFunction(int amount, int *denominations)
{
    float eqx = (34 * amount) / 477; //the eqn was arrived at after equating the values to the amount

    if (!eqx || eqx < 1) //if <1 , not possible
        return;

    float amount_used = (eqx / 2) + ((27 * eqx) / 2);

    int amount_left = amount - amount_used;

    int no_jiggles = (amount_left * 2) * 17;
    denominations[0] = denominations[1] = eqx;
    denominations[2] = no_jiggles;
}

int main()
{

    int amount; //input
    cin >> amount;

    int denominations[3] = {-1, -1, -1}; //initialisation

    exchangeFunction(amount, denominations); //function call

    cout << denominations[0] << " " << denominations[1] << " " << denominations[2]; //output
}
