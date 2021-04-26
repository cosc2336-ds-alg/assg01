/** @file assg01-main.cpp
 * @brief main/debug executable for Assignment 01, practice on functions.
 *
 * @author Jane Programmer
 * @note   cwid : 123 45 678
 * @note   class: COSC 2336, Summer 2021
 * @note   ide  : VS Code Server 3.9.3 
 * @note   assg : Assignment 01
 * @date   June 1, 2021
 *
 * Assignment 01, practice on functions, user defined types and arrays.
 * This file contains a separate main() function and is meant to be compiled
 * to a separate executable to be used for debugging or testing.
 */
#include <cmath>
#include <iostream>
#include "assg01-functions.hpp"
using namespace std;


/** main entry point
 * Main entry point for debugging functions.
 *
 * @param argc The command line argument count, the number of arguments
 *   provided by user on the command line.
 * @param argv An array of char* old style c-strings.  Each argv[x]
 *   that is passed in holds one of the command line arguments provided
 *   by the user to the program when started.
 *
 * @returns int Returns 0 to indicate successfull completion of program,
 *   and a non-zero value to indicate an error code.
 */
int main(int argc, char** argv)
{
  // uncomment declaration of the x array when you want to compile and call
  // your functions.
  //int x[] = {3, 5, 7};

  int mean = 0;
  // if/when ready to debug calculateMean() uncomment the following and recompile
  //mean = calculateMean(3, x);
  cout << "The mean value is: " << mean << endl;

  int std = 0;
  // if/when ready to debug calculateStandardDeviation() uncomment the following
  // and recompile
  //std = calculateStandardDeviation(1, x);
  cout << "The standard deviation is: " << std << endl;

  // return 0 to indicate successful completion
  return 0;
}
