#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "../defaults.hpp"

void displayCrewmateOptions() {
  int userInput;

  std::string options = "Choose an option: \n\n 1. Do Task \n 2. Check security cams \n 3. Do meetings (";

  if (meetingsLeft == 1) 
    options += "1 meeting left)";
  else 
    options += "no meetings left)";

  options += "\n";

  std::cout << options << std::endl;

  std::cin >> userInput;

  switch(userInput) {
    case 1:
      //run task function
      std::cout << "e";
      break;
    case 2:
      //run security function
      std::cout << "e";
      break;
    case 3:
      //run meeting, if applicable
      std::cout << "e";
      break;
  }
}