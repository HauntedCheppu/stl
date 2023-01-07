#include <iostream>
#include <map>
#include <string>

template <typename K, typename V> void map_func1(K a, V b) {
  std::map<K, V> ff{{a, b}};

  for (int z; z < 11; ++z) {

    ff.insert({{a, b}});
  }
  std::cout << sizeof(ff) << std::endl;
  for (auto z : ff) {
    std::cout << z.first << "\t" << z.second << std::endl;
  }
};



int main(int argc, char *argv[]) {
  std::map<std::string, std::string> FF{{"OS", "Operating System"},
                                        {"env", "environment variable"},
                                        {"svn", "subversion"}};

  for (auto z = FF.begin(); z != FF.end(); ++z) {
    // std::cout << z->first << "\t" << z->second << std::endl;
  }

  map_func1<int, std::string>(1, "meow");
  map_func1(1, "meow");
  return 0;
}
