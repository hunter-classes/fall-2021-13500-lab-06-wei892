/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 6 

vigenere shift function

*/

#include <iostream>
#include <string>
#include "vigenere.h"

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
  std::string a = plaintext;//change this to recive the thing
  int x = a.length();
  int y = keyword.length();

  std::string output = "";

  int shift;
  int j;
  int t = 0;

  int count = 0;
  while (count < x)
    {
      int i = count;
      j = (count-t)%y;
      char hold = keyword[j]; //gets the char of the keyword
      shift = (int)hold - 97; //we assumed that keyword is all lowercase

      char c = a[i];
      if (c >= 65 && c <= 90)
	{
	  if ((c + shift) > 90)
	    {
	      c -= 26;
	      c += shift;
	      output += c;
	    }
	  else
	    {
	      c += shift;
	      output += c;
	    }
	}
      else if (c >= 97 && c <= 122)
	{
	  if ((c + shift) > 122)
	    {
	      c -= 26;
	      c += shift;
	      output +=c;
	    }
	  else
	    {
	      c += shift;
	      output += c;
	    }
	}
      else
	{
	  t++;
	  output += c;
	}
      count++;
    }

  return output;
}
