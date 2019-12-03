#include <iostream>
#include "profile.hpp"

int main() {

  Profile bren("Brendan Poree", 35, "Modesto", "USA", "he/him");
  bren.add_hobby("Playing games and listening to music");
  bren.add_hobby("Kicking ass and chewing gum");
  bren.add_hobby("Learning to program");
  bren.add_hobby("Watching YouTube and Streams");
  std::cout << bren.view_profile();

}
