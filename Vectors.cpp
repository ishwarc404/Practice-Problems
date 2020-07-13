#include <iostream>
#include <vector>
#include <algorithm> //sorting and searching
using namespace std;

bool f(int x,int y)
{
    return x > y ;
}

int main()
{

    //vectors in c++

    vector<int> vec = {11, 2, 3, 14, 5,343};

    cout << "Before sorting: " << vec[0] << endl;

    //sorting
    sort(vec.begin(), vec.end());
    cout << "After sorting: " << vec[0] << endl;

    //searching
    bool present = binary_search(vec.begin(),vec.end(),100);
    cout<<"Is 100 present? "<<present <<endl;

    cout<<"Adding 100 now"<<endl;
    vec.push_back(100);
    present = binary_search(vec.begin(),vec.end(),100);
    cout<<"Is 100 present now? "<<present <<endl;


    //lets insert some more 100s;
    vec.push_back(100);vec.push_back(100);vec.push_back(100);vec.push_back(100);vec.push_back(100);


    //now let's sort it again and count how many 100s are there
    sort(vec.begin(),vec.end());

    //we always need an iterator to iterate through the vector
    vector<int>::iterator it1 = lower_bound(vec.begin(),vec.end(),100); //gives us the first occurance of element >= 100
    vector<int>::iterator it2 = upper_bound(vec.begin(),vec.end(),100); //gives us the first occurance of element > 100

    cout<<"Number of occurances of 100 are: "<< it2 - it1 << endl; 
    cout<<"The first element greater than 100 is: "<< *it2 << endl ;

    cout<<"Before change: ";
    //iterating ad printing
    for(int x : vec)
    {
        cout<<x<<" ";
    }

    //chaging by reference //this is the only way it will change
    for(int &x : vec)
    {
      ++x ;
    }

    cout<<endl<< "After change: ";
    //iteraing ad printing
    for(int x : vec)
    {
        cout<<x<<" ";
    }

    cout<<endl;
    cout<< "First element: "<< * vec.begin() << endl; //prints the first element
    cout<< "Last element: " << * (vec.end()-1) << endl; //prints the last element


    //lets print it in reverse order now
    //for that we need to sort it in reverse order
    sort(vec.begin(),vec.end(),f);
    cout<<"Printing in reverse now using a comparator function: ";
    for(int x : vec)
    {
        cout<<x<<" ";
    }

    cout << endl ;

    //reprintting by iterating through the vector using an iterator
    cout<<"Printing again using a iterator: ";
    for(auto it  = vec.begin() ; it != vec.end() ; it ++ )
    {
        cout<< *it << " ";
    }

    cout << endl; 

    //poppping 
    vec.pop_back();
    cout<<"Printing after popping: ";
    for(int x : vec)
    {
        cout<<x<<" ";
    }

    cout<< endl;
    //general ways to access
    cout<< "Last element: " << vec.back() << endl ;
    cout<< "First element: " << vec.front() << endl;
    cout<< "Number of elements: " << vec.size() << endl;

    //initialising swapping
    std::vector<int> foo (3,100);   // three ints with a value of 100
    std::vector<int> bar (5,200);   // five ints with a value of 200
    foo.swap(bar);

}



