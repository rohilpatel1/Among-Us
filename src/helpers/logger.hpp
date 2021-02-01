#pragma once
#include <iostream>
#include <string>

class Logger {
	
	public: 
		Logger(){};
	  void warn(std::string warning) {
	  	std::cout << "[WARNING] \n\n " << warning << std::endl;
	  }
	  
	  void error(std::string error) {
	  	std::cout << "[ERROR] \n\n" << error << std::endl;
	  }
	  template <class printType>
	  
	  void print(printType context) {
	  	std::cout << context << std::endl;
	  }
};

Logger logger;