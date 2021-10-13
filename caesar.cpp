/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 6 

caesar shift function 

*/

#include <iostream>
#include <string>
#include "caesar.h"

char shiftChar(char c, int rshift)
{
  int val = (int)c;
  char temp;
  if (val >= 65 && val <= 90)
    {
      if ((val + rshift) > 90)
	{
	  val -= 26;
	  val += rshift;
	  temp = (char)val;
	  return temp;
	}
      else
	{
	  val += rshift;
	  temp = (char)val;
	  return temp;
	}
    }
  else if (val >= 97 && val <= 122)
    {
      if ((val + rshift) > 122)
	{
	  val -= 26;
	  val += rshift;
	  temp = (char)val;
	  return temp;
	}
      else
	{
	  val += rshift;
	  temp = (char)val;
	  return temp;
	}
    }
  else
    {
      return c;
    }
}

std::string encryptCaesar(std::string plaintext, int rshift)
{
  int len = plaintext.length();
  std::string a = plaintext;

  char temp;
  char c;
  std::string output = "";

  for (int i = 0; i < len; i++)
    {
      c = a[i];
      temp = shiftChar(c, rshift);
      output += temp;
    }

  return output;
}
