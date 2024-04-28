#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string removeVowels(const string& input) {
    string result = "";
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'a'||input[i] == 'u'||input[i] == 'o'||input[i] == 'i'||input[i] == 'e')
        {
            continue;
        }else{
            result += input[i];
        }
        
    }
    
    return result;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    string result = removeVowels(inputString);
    cout << "String after removing vowels: " << result << endl;

    return 0;
}
