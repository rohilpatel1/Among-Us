#pragma once
#include <iostream>
#include <iostream>

#include "../helpers/random.hpp"
#include "../defaults.hpp"
#include "crewmate.hpp"

void getRole() {
  int randomNumber = randint(1, 2);

  switch (randomNumber) {
    case 1:
      role = "imposter";
      std::cout << "Your are an Imposter \n" << std::endl;
      break;

    case 2:
      role = "crewmate";
      std::cout << "Your are a Crewmate \n" << std::endl;
      displayCrewmateOptions();
      break;

    default:
      Error.error("Could not place user as either crewmate or imposter");
  }
}