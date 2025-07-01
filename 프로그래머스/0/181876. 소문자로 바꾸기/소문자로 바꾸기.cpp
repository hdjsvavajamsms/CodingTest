#include <string>
#include <vector>
#include <iostream>
#include <cctype>


using namespace std;

string solution(string myString) {
    for (char& c : myString)
    {
        c = std::tolower(c);
    }
    string answer = myString;
    return answer;
}