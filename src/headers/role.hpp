#pragma once
#include <iostream>
#include <iostream>

#include "../helpers/random.hpp"
#include "../defaults.hpp"
#include "crewmate.hpp"

void getRole() {
  int randomNumber = randint(2, 2);

  switch (randomNumber) {
    case 1:
      role = "imposter";
      //run the imposter command panel
      break;
    case 2:
      role = "crewmate";
      displayCrewmateOptions();
      break;
  }

  std::cout << "Your role: " << role << '\n' << std::endl;
}