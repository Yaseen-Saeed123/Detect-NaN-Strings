#include <iostream>
#include <string>
using namespace std;
void is_Nan(string str){
    for (char c: str){
        if(!(c >= '0' && c <='9')){
            cout << str << " : This is not a number";
            return;
        }
    }
    cout << str << " : This is a number";
    return;
}
int main(){
    // Test the function
    is_Nan("123#24gth");// Output: 123#24gth : This is not a number
    cout << "\n====================\n";
    is_Nan("12345"); // Output: 12345 : This is a number
    return 0;
}