
#include "Zombie.hpp"

int main(void) {
	Zombie *horde = zombieHorde(10, "tst");
	delete[] horde;
}