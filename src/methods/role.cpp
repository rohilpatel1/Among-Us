#include "../headers/role.h"

void getRole() {
  int randomNumber = randint(1, 2);

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