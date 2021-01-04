#pragma once

#include <iostream>
#include <string>

class ErrorClass {
  public:
    ErrorClass(){};

    void error(std::string err) {
      std::cout << "An unexpected error occured: " << err << std::endl;
    }

};

ErrorClass Error;