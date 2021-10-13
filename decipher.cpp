/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 6 

decipher functions for caesar and vigenere 

*/


#include <iostream>
#include <string>
#include "decipher.h"

char shiftCharBack(char c, int rshift)
{
  int val = (int)c;
  char temp;
  if (val >= 65 && val <= 90)
    {
      if ((val - rshift) < 65)
	{
	  val += 26;
	  val -= rshift;
	  temp = (char)val;
	  return temp;
	}
      else
	{
	  val -= rshift;
	  temp = (char)val;
	  return temp;
	}
    }
  else if (val >= 97 && val <= 122)
    {
      if ((val - rshift) < 97)
	{
	  val += 26;
	  val -= rshift;
	  temp = (char)val;
	  return temp;
	}
      else
	{
	  val -= rshift;
	  temp = (char)val;
	  return temp;
	}
    }
  else
    {
      return c;
    }
}

std::string decipherCaesar(std::string plaintext, int rshift)
{
  int len = plaintext.length();
  std::string a = plaintext;

  char temp;
  char c;
  std::string output = "";

  for (int i = 0; i < len; i++)
    {
      c = a[i];
      temp = shiftCharBack(c, rshift);
      output += temp;
    }

  return output;
}

std::string decipherVigenere(std::string plaintext, std::string keyword)
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
	  if ((c - shift) < 65)
	    {
	      c += 26;
	      c -= shift;
	      output += c;
	    }
	  else
	    {
	      c -= shift;
	      output += c;
	    }
	}
      else if (c >= 97 && c <= 122)
	{
	  if ((c - shift) < 97)
	    {
	      c += 26;
	      c -= shift;
	      output += c;
	    }
	  else
	    {
	      c -= shift;
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
