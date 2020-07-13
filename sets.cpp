#include <iostream>
#include <algorithm>
#include <vector>
#include<set>
using namespace std;

/* The issue with vectors was, we need to sort it everytime for any sort of operation like upper bound or lowerbound
and sorting takes up NlogN time. Hence it is bad. That is why we use sets now */

//Set #include <set>

//set automatically maintains an ASCENDING ORDER AND ONLY MAINTAINS 1 SINGLE INSTANCE OF EVERY CHARACTER


//insert is logN time

int main()
{

    set<int> S = { -1,3,2,6,4, 4, 1, 1,0};

    //inserting into a set
    S.insert(6);
    S.insert(2);

    cout << "Printing the set: ";
    //printing
    for(int i:S)
    {
        cout<<i<<" ";
    }

    cout << endl ; 
    //searching in a set
    auto it = S.find(2);
    if(it == S.end())
    {
        cout << "Not found!";
    }
    else
    {
        cout << "Found!";
    }
    
    //some other set operations
    cout<< endl;
    cout<<"Number of elements in the set are: " <<  S.size();

    cout<<endl;
    cout << "Max element is: " << * max_element(S.begin(),S.end()) << endl; //both min_element and max_element returns an iterator
    cout << "Min element is: " << * min_element(S.begin(),S.end()) << endl; 


    //Set objects directly have access to upper bound and lower bound as they are already sorted
    cout << "Element greater than 4 is: " << * upper_bound(S.begin(),S.end(),4) << endl ;
    cout << "Element greater than 4 is: " << * S.upper_bound(4) << endl ;

}