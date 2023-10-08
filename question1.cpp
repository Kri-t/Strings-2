#include <iostream>
using namespace std;
#include <string.h>

int main() {
    string str = "PWSkills";
    string str1 = "";
    int j=0;
    
    for(int i = (int)str.size()-1; i>=0; i--) {  
        str1 += str[i];
        j++;
    }

    string str2 = str + str1;
    cout<<str2<<endl;
}