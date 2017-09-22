# Ciphers
Collection of different ciphers. 

Each cipher program is able to encrypt a message in conjunction with a key such that the message is not decipherable
without knowledge of the encryption message and the key. The encrypted message can then be decrypted through the same program.

Simple ciphers can be decrypted using frequency analysis - letters in the English language tend to follow a characteristic distribution given a sufficiently large text sample i.e 'e' has a frequency of 12.1% whereas 'z' only has one of 0.1%. For monoalphabetic ciphers (each letter is encoded to a different specific letter), frequency analysis allows one to determine the frequency of the ciphered letters and match that with the most likely letter it represents by comparing the frequencies. frequency_analysis.cpp is a simple frequency analysis tool that allows for that.
```
./frequency_analysis
Please enter the ciphertext:
```

1. Caesar cipher: shifts individual characters in encrypted message by integer key.
  
  - Decryption difficulty: very easy (use frequency_analysis.cpp)
  ```
  ./caesar 2 
  abcde
  cdefg
  ```
2. Baconian cipher: takes individual letters and converts them into a predetermined code i.e 'a' -> "00001", 'b' -> "00010"...
  
  - Decryption difficulty: very easy
  ```
  ./baconian
  abcde
  0000000001000100001100100
  ```
 
3. Vigenere cipher: shifts individual characters in encrypted message by letter in keyword. 
  
  - Decryption difficulty: easy
  ```
  ./vigenere examplekey
  aaabbbccc
  exanqmgmg  
  ```
  
 
