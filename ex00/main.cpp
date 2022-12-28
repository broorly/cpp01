
#include "Zombie.hpp"

int main(void) {
  {
    Zombie tst;
    tst.announce();
		tst.set_name("alo");
		tst.announce();
  }
	Zombie *tst1 = newZombie("nnhh");
	randomChump("random");
	delete tst1;
  return (0);
}