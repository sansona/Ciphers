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
    //int keyword [strlen(argv[1])];
    int option;
    cout << "Choose an option for the Vigenere cipher:\n 1) to encrypt \n 2) to decrypt\n";
    cin >> option;

    if (option == 1)
    {
    
      cout << "\nEnter the message in plaintext\n\n";
      cin >> message;
 
      for (int i = 0; i < strlen(argv[1]); i++)
      {
        keyword.push_back(toupper(argv[1][i]) - 65); // converts each char of argv[1] to alphanumeric value 
      } 

        for (int j = 0; j < message.length(); j++)

        {
          if (isalpha(message[j]))
          {
            if (isupper(message[j]))
            {
              char c = message[j];
              cout << (char)((c - 65 + keyword[j % keyword.size()]) % 26 + 65);
            }

            if (islower(message[j]))
            {
              char c = message[j];
              cout << (char)((c - 97 + keyword[j % keyword.size()]) % 26 + 97);
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
     cin >> message;

    for (int i = 0; i < strlen(argv[1]); i++)
    {
       keyword.push_back(toupper(argv[1][i]) - 65); // converts each char of argv[1] to alphanumeric value 
    }

      for (int j = 0; j < message.length(); j++)
      {
        if (isalpha(message[j]))
        {
          if (isupper(message[j]))
          {
            char c = message[j];
            cout << (char)((c - 65 - keyword[j % keyword.size()]) % 26 + 65);
          }

          if (islower(message[j]))
          {
            char c = message[j];
            cout << (char)((c - 97 - keyword[j % keyword.size()]) % 26 + 97);
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
