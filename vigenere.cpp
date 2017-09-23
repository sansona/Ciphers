#include <stdio.h>
#include <iostream>
#include <fstream>
#include <ctype.h>
#include <string.h>
#include <vector>
using namespace std;

//Vigenere cipher
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "usage: " << argv[0] << " keyword\n";
    }

    else
    {
        string message;
        vector <int> keyword;

        int option;
        cout << "Choose an option for the Vigenere cipher:\n 1) to encrypt \n 2) to decrypt\n";
        cin >> option;
        cin.ignore();

    if (option == 1)
    {

        cout << "\nEnter the message in plaintext\n\n";
        getline(cin, message);
 
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            keyword.push_back(toupper(argv[1][i]) - 'A'); // converts each char of argv[1] to alphanumeric value 
        } 

        for (int j = 0; j < message.length(); j++)
        {
            if (isalpha(message[j]))
            {
                if (isupper(message[j]))
                {
                    char c = message[j];
                    cout << (char)((c - 'A' + keyword[j % keyword.size()]) % 26 + 'A');
                }

            if (islower(message[j]))
            {
                char c = message[j];
                cout << (char)((c - 'a' + keyword[j % keyword.size()]) % 26 + 'a');
            }
            }          

            else
            {
                cout << message[j];
            }

        }

        cout << "\n";

    }

    if (option == 2)
    {

        cout << "\nEnter the message in ciphertext\n\n";
        getline(cin, message);

        for (int i = 0; i < strlen(argv[1]); i++)
        {
            keyword.push_back(toupper(argv[1][i]) - 'A'); // converts each char of argv[1] to alphanumeric value 
        }

        for (int j = 0; j < message.length(); j++)
        {
            if (isalpha(message[j]))
            {
                if (isupper(message[j]))
                {
                    char c = message[j];

                    if ((c - 'A' - keyword[j % keyword.size()]) > 0) //if expression is positive, simply reverse to decrypt
                    {     
                        cout << (char)((c - 'A' - keyword[j % keyword.size()]) % 26 + 'A'); 
                    }
                    else //if expression is negative, need to do extra steps to decrypt since C++ calculates % strangely
                    {
                        cout << (char)((26 + (c - 'A' - keyword[j % keyword.size()]) % 26) + 'A');
                    }

                }

                if (islower(message[j]))
                {
                    char c = message[j];

                    if ((c - 'a' - keyword[j % keyword.size()]) > 0)
                    {
 
                        cout << (char)((c - 'a' - keyword[j % keyword.size()]) % 26 + 'a');
                    }
                    else
                    {
                        cout << (char)((26 + (c - 'a' - keyword[j % keyword.size()]) % 26) + 'a');
                    }
                }
            }
 
                else
                {
                    cout << message[j];
                }


        }

        cout << "\n";

    }


    }
}
