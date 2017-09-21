#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
using namespace std;

//Character frequency analyzer for simple decryption
int main()
{
    cout << "Please enter the ciphertext\n";
    string input;
    getline(cin, input);

    map <char, int> alphabet {{'a',0},{'b',0},{'c',0},{'d',0},{'e',0},{'f',0}
    ,{'g',0},{'h',0},{'i',0}, {'j',0},{'k',0}, {'l',0},{'m',0},{'n',0},{'o',0}
    ,{'p',0},{'q',0},{'r',0},{'s',0},{'t',0},{'u',0},{'v',0},{'w',0},{'x',0}
    ,{'y',0},{'z',0}};

    char letter;

    for (int i = 0; i < input.length(); i++)
    {
        letter = tolower(input[i]);
        if (alphabet.find(letter) != alphabet.end()) //iterates through char_list, if in then adds 1 to key
        {
           alphabet.at(letter) = alphabet.at(letter) + 1;

        }
    }

    for (int j = 0; j < 25; j++) //iterates through alphabet (len = 25) and prints out number of each letter
    {
        cout << alphabet.at(to_string(char(65 + j))); //Need to figure out how to return key values
        cout << "\n"; 
    }

}
