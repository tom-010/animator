#include "template_module/hello_time/hello_time.h"
#include "template_module/hello_greet/hello_greet.h"
#include <iostream>
#include <string>
#include <vector>
#include "absl/strings/str_join.h"
#include <glog/logging.h>


int main(int argc, char** argv)
{
  // glog
  google::InitGoogleLogging(argv[0]);
  LOG(INFO) << "This is an info  message";
  LOG(WARNING) << "This is a warning message";
  LOG(ERROR) << "This is an error message";
  // LOG(FATAL) << "This is a fatal message"; // works, but it will abort the rest of the program

  // abseil
  std::vector<std::string> v = {"foo", "bar", "baz"};
  std::string s = absl::StrJoin(v, "-");

  std::cout << "Joined string: " << s << "\n";

  // hello world 

  std::string who = "world";
  if (argc > 1)
  {
    who = argv[1];
  }
  std::cout << get_greet(who) << std::endl;
  print_localtime();


  return 0;
}
