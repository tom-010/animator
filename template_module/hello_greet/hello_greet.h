#ifndef LIB_HELLO_GREET_H_
#define LIB_HELLO_GREET_H_

#include <string>

std::string get_greet(const std::string &thing);

class Greeter {
public:
    virtual std::string greet(const std::string &thing);
    virtual std::string greet();
};

#endif