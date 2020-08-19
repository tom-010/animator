#include "hello_greet.h"

#include <iostream>
#include <string>

std::string get_greet(const std::string& who) { return "Hello " + who; }

std::string Greeter::greet(const std::string& who) { return get_greet(who); }

std::string Greeter::greet() { return this->greet("World"); }
