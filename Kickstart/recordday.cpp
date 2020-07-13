#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
 
int calculated(vector<int> i,int nos)
{
    int count = 0 ; 

    // first day
    if(i[0] > i[1])
    {
        ++count ; 
    }
        
    
    // for all other days

    for(int k  = 1; k < nos -1 ; k++)
    {
        int prev  = * max_element(i.begin(),i.begin() + k) ; 

        if(i[k] > prev and i[k] > i[k+1])
        {
            count++ ;
        }
                

    }
    
    // last day
    if(i[nos-1] > * max_element(i.begin(),i.begin()+nos-1))
    {
        count +=1;
    }
        
    return count;
}

int main()
{
    
    int cases;
    cin>>cases;
    int nos = 0 ;
    int value = 0; 

    for(int i = 0  ; i < cases ; i++)
    {
        vector <int> V;
        cin >> nos;
        for(int j = 0 ; j < nos ; j ++ )
        {
            cin >> value;
            V.push_back(value);
            
        }
        
        cout<<"Case #" << i+1 << ": " <<calculated(V,nos) ;  
        if(cases - 1 != i)
            cout<<endl;
    }
}