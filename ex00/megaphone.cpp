#include <iostream>

int main (int ac, char **av) {

  std::string megaphone;
  std::locale loc;

  if (ac > 1)
  {
    for (int i = 1;i < ac; i++)
      megaphone += *(av + i);
    for (std::string::size_type i=0; i<megaphone.length(); ++i)
      std::cout << std::toupper(megaphone[i],loc);
    std::cout << std::endl;
  }
  else
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  return 0;
}
