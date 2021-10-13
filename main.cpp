/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 6 

main program

*/

#include <iostream>
#include "test-ascii.h"
#include "caesar.h"
#include "decipher.h"
#include "vigenere.h"

int main()
{
  std::cout << "ascii(\"Cat :3 Dog\"): " << std::endl;
  ascii("Cat :3 Dog");

  std::cout << "\n----\n" << std::endl;

  std::cout << "Ceasar shift:\n" << std::endl;
  std::cout << "encryptCaesar(\"A Light-Year Apart\", 5): " << std::endl;
  std::string w = encryptCaesar("A Light-Year Apart", 5);
  std::cout << w << std::endl;
  std::cout << "decipher: " << std::endl;
  std::string x  = decipherCaesar(w, 5);
  std::cout << x << std::endl;

  std::cout << "\n" << std::endl;

  std::cout << "encryptCaesar(\"Way to go!\", 8): " << std::endl;
  w = encryptCaesar("Way to go!", 8);
  std::cout << w << std::endl;
  std::cout << "decipher: " << std::endl;
  x = decipherCaesar(w, 8);
  std::cout << x << std::endl;

  std::cout << "\n" << std::endl;

  std::cout << "encryptCaesar(\"Hello, World!\", 7): " << std::endl;
  w = encryptCaesar("Hello, World!", 7);
  std::cout << w << std::endl;
  std::cout << "decipher: " << std::endl;
  x = decipherCaesar(w, 7);
  std::cout << x << std::endl;
  std::cout << "\n----\n" << std::endl;

  std::cout << "encryptVigenere(\"Hello, World!\", \"cake\"): " << std::endl;
  w = encryptVigenere("Hello, World!", "cake");
  std::cout << w << std::endl;
  std::cout << "decipher: " << std::endl;
  x = decipherVigenere(w, "cake");
  std::cout << x << std::endl;

  std::cout << "\n" << std::endl;
  
  std::cout << "Vigenere shift:\n" << std::endl;
  std::cout << "encryptVigenere(\"Way to go!\", \"cake\"): " << std::endl;
  w = encryptVigenere("Way to go!", "cake");
  std::cout << w << std::endl;
  std::cout << "decipher: " << std::endl;
  x = decipherVigenere(w, "cake");
  std::cout << x << std::endl;

  std::cout << "\n" << std::endl;
  
  std::cout << "encryptVigenere(\"A light away\", \"cake\"): " << std::endl;
  w = encryptVigenere("A light away", "cake");
  std::cout << w << std::endl;
  std::cout << "decipher: " << std::endl;
  x = decipherVigenere(w, "cake");
  std::cout << x << std::endl;

  std::cout << "\n" << std::endl;
  
  return 0;
}
