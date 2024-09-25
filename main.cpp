/* 
  Title: Chapter 2 Excersise 10
  File Name: Chapter2Ex10_Mark_Goldstein.cpp
  Programmer: Vincent Epefanio
  Date: 9/25/2024
  Requirements: A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.
*/








#include <iostream>
using namespace std;
int main() 
{
double gallons;
double milesDriven;


  std::cout << "Enter the number of gallons: ";
  std::cin >> gallons;
  std::cout << "Enter the number of miles driven: ";
  std::cin >> milesDriven;
  double mpg = milesDriven / gallons;
  
  std::cout << "Miles per gallon (MPG): " << mpg << std::endl;  

  
  return 0;
}



  