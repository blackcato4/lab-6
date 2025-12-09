#include<iostream>
using namespace std;


int main(){
    int integer = 1 ; 
    int evenCount = 0;
    int oddCount = 0;
   
    while (true){
    cout << "Enter an integer: ";
    cin >> integer ;
    if ( integer == 0) {
        break ;
    }


        if (integer % 2 == 0) {
            evenCount++;
        } else {    
            oddCount++;
        }
    
    }
    cout << "#Even numbers = " << evenCount << endl;
    cout << "#Odd numbers = " << oddCount << endl;
    return 0;
}
