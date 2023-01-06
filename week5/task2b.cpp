#include <iostream>
using namespace std;

string teller(char alphabet);

main(){
    char alphabet;
    cout << "Enter the alphabet: ";
    cin >> alphabet;
    string result = teller(alphabet);
    cout << result;
}

string teller(char alphabet){
    if(alphabet == 'A'){
        return "You have entered the Capital A ";
    }
        if(alphabet == 'a'){
        return "You have entered the small a";
    }
}
