#include <iostream>
#include <map>
#include <string>

int main(int argc, char *argv[]) {
  std::map<std::string, std::string> FF{{"OS", "Operating System"},
                                        {"env", "environment variable"},
                                        {"svn", "subversion"}};

  for (auto z = FF.begin() ; z != FF.end(); ++z) {
  std::cout << z->first << "\t" << z->second << std::endl; 
  }  

  return 0;
}
