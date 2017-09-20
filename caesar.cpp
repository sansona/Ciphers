#include <stdio.h>
#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

//Caeser cipher
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "usage: " << argv[0] << " key (integer)\n";
    }

    else
    {
        string message;
        int key = atoi(argv[1]);
        int option;
        cout << "Choose an option for the Caesar cipher:\n 1) to encrypt \n 2) to decrypt\n";
        cin >> option;
    
    if (option == 1)
    {

        cout << "\nEnter the message in plaintext\n\n";
        cin >> message;


        for (int i = 0; i < message.length(); i++)

        {
            if (isalpha(message[i]))
            {
                if (isupper(message[i]))
                {
                    char c = message[i];
                    cout << (char)((c - 65 + key) % 26 + 65); 
                }

            if (islower(message[i]))
            {
                char c = message[i];
                cout << char((c - 97 + key) % 26 + 97);
            } 
            }

            else 
            {
            cout << message[i];
            }

        }

        cout << "\n";
    }
  

    if (option == 2)
    {
        cout << "\nEnter the message in ciphertext\n\n";
        cin >> message;


        for (int i = 0; i < message.length(); i++)

        {
            if (isalpha(message[i]))
            {
                if (isupper(message[i]))
                {
                    char c = message[i];
                    cout << (char)((c - 65 - key) % 26 + 65); 
                }

                if (islower(message[i]))
                {
                    char c = message[i];
                    cout << char((c - 97 - key) % 26 + 97);
                } 
            }

            else 
            {
                cout << message[i];
            }
        }

        cout << "\n";




    }
    }
}
