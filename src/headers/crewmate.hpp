#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "../defaults.hpp"
#include "../helpers/logger.hpp"

class Crewmate {
	public:
	  Crewmate(){};
	  
	  void doTask() {
	  	int completedTask = randnum(1, 2);
	  	logger.print(completedTask);
	  }
};

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
  
  Crewmate crewmate;
  switch(userInput) {
    case 1:
      //run task function
      crewmate.doTask();
      break;
    case 2:
      //run security function
      std::cout << "e";
      break;
    case 3:
      //run meeting, if applicable
      std::cout << "e";
      break;
    default:
      logger.error(std::to_string(userInput) + " is not a valid input character");
      displayCrewmateOptions();
  }
}