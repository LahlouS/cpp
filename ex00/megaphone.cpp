#include <iostream>
#include <algorithm>

int main (int ac, char **av) {

  std::string megaphone;

  if (ac > 1)
  {
    for (int i = 1;i < ac; i++)
      megaphone += *(av + i);
    std::transform (megaphone.begin(), megaphone.end(), megaphone.begin(), toupper);
    std::cout << megaphone << std::endl;
  }
  else
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  return 0;
}
