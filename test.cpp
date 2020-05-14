#include <iostream>
#include <string>
using namespace std;
string in1;
string in2;
main(){
    cin >> in1;
    cin >> in2;

    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!") || 
            std::string::npos != in2.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!")){
            
            cout <<"good";
        }
    else
        {
            cout <<"bad";
        }
        
    return 0;
}
