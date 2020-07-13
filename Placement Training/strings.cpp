#include <iostream>
using namespace std;

int main(){

    // string is actually an array of characters
    //if u use cin>>input, it will treat space as a terminating character
    //thats why use cin.get(variable, size)

    cout<<"Enter something random"<<endl;
    char input[10];
    cin.get(input,10);
    cout<<"Inputed string is: "<<input<<endl;


    cout<<"Enter something else please: ";
    string newinput;
    getline(cin,newinput);
    cout<<"Newinput is: "<<newinput;


    //cin buffers
    char str1[10],str2[10];
    cin.get(str1,3);
    cin.get(str2,4);
    cout<<str1<<str2;


    
    //we read a large paragraph line by line
    string temp;
    string para;
    do {
        getline(cin,temp);
        para += temp + "\n";
    }
    while (temp.length()>0);
    
    cout<<para;
    return 0;

    //need to check out some powerful stl functions and string functions too
}