/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 5 

This is the test file which includes the 
testing parameters for all the functions

*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "test-ascii.h"
#include "caesar.h"
#include "decipher.h"
#include "vigenere.h"

TEST_CASE("shiftChar beginning letter")
{
  CHECK(shiftChar('a', 3) == 'd');
  CHECK(shiftChar('c', 6) == 'i');
  CHECK(shiftChar('B', 7) == 'I');
  CHECK(shiftChar('E', 2) == 'G');
}

TEST_CASE("shiftChar ending letters ")
{
  CHECK(shiftChar('z', 3) == 'c');
  CHECK(shiftChar('y', 6) == 'e');
  CHECK(shiftChar('W', 3) == 'Z');
  CHECK(shiftChar('X', 6) == 'D');
}

TEST_CASE("encryptCaesar simple phrases")
{
  CHECK(encryptCaesar("Hello, World!", 3) == "Khoor, Zruog!");
  CHECK(encryptCaesar("Today is Friday.", 5) == "Ytifd nx Kwnifd.");
}
TEST_CASE("encryptCaesar complex phrases")
{
  CHECK(encryptCaesar("The brown fox jumps over the lazy dog", 3) == "Wkh eurzq ira mxpsv ryhu wkh odcb grj");
  CHECK(encryptCaesar("She sells seashells by the seashore.", 6) == "Ynk ykrry ykgynkrry he znk ykgynuxk.");
}

TEST_CASE("shiftCharBack beginning letters")
{
  CHECK(shiftCharBack('a', 3) == 'x');
  CHECK(shiftCharBack('c', 5) == 'x');
  CHECK(shiftCharBack('B', 6) == 'V');
  CHECK(shiftCharBack('D', 2) == 'B');

}
TEST_CASE("shiftCharBack ending letters")
{
  CHECK(shiftCharBack('z', 2) == 'x');
  CHECK(shiftCharBack('y', 6) == 's');
  CHECK(shiftCharBack('W', 2) == 'U');
  CHECK(shiftCharBack('X', 3) == 'U');
}

TEST_CASE("decipherCaesar simple sentence")
{
  CHECK(decipherCaesar("Khoor, Zruog!", 3) == "Hello, World!");
  CHECK(decipherCaesar("Ytifd nx Kwnifd.", 5) == "Today is Friday.");
}


TEST_CASE("decipherCaesar complex sentence")
{
  CHECK(decipherCaesar("Wkh eurzq ira mxpsv ryhu wkh odcb grj", 3) == "The brown fox jumps over the lazy dog");
  CHECK(decipherCaesar("Ynk ykrry ykgynkrry he znk ykgynuxk.", 6) == "She sells seashells by the seashore.");
}


TEST_CASE("encryptVigenere simple sentences")
{
  CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
  CHECK(encryptVigenere("The frumpy frog.", "banana") == "Uhr feunpl feoh.");
}
TEST_CASE("encryptVigenere complex sentences")
{
  CHECK(encryptVigenere("The big, brown fox jumps over the lazy dog.", "fish") == "Ypw ino, tytef mtf bbrxk vamj amm dheg vvl.");
  CHECK(encryptVigenere("She sells seashells by the seashore.", "beach") == "Tle ulmps ulbwhgsmw ba aii sghtlotl.");
}

TEST_CASE("decipherVigenere simple sentences")
{
  CHECK(decipherVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
  CHECK(decipherVigenere("Uhr feunpl feoh.", "banana") == "The frumpy frog.");
}
TEST_CASE("decipherVigenere complex sentences")
{
  CHECK(decipherVigenere("Ypw ino, tytef mtf bbrxk vamj amm dheg vvl.", "fish") == "The big, brown fox jumps over the lazy dog.");
  CHECK(decipherVigenere("Tle ulmps ulbwhgsmw ba aii sghtlotl.", "beach") == "She sells seashells by the seashore.");
}
