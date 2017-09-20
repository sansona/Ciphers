# Ciphers
Collection of different ciphers. 

Each cipher program is able to encrypt a message in conjunction with a key such that the message is not decipherable
without knowledge of the encryption message and the key. The encrypted message can then be decrypted through the same program.

1. Caesar cipher: shifts individual characters in encrypted message by integer key.
  
  - Decryption difficulty: very easy
  ```
  ./caesar 2 
  abcde
  cdefg
  ```
  
2. Vigenere cipher: shifts individual characters in encrypted message by letter in keyword. 
  
  - Decryption difficulty: easy
  ```
  ./vigenere examplekey
  aaabbbccc
  exanqmgmg  
  ```
  
 
