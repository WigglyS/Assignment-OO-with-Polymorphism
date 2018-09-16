/*This files tests the diffrent classes to see if they work
*/
#include "Classes.h"

void main() 
{
	Character C1;
	C1.SetHealth(10);
	C1.SetName("C1");
	C1.PrintInfo();
	
	Zombie Z1;
	Z1.SetHealth(20);
	Z1.SetName("Zombie1");
	Z1.SetType("Runner");
	Z1.SetSpeed(20);
	Z1.PrintInfo();
	Z1.PrintInfo(false);

	Human H1;
	H1.SetHealth(-100);
	H1.SetHealth(100);
	H1.SetName("Bob");
	H1.SetWeapon("Baseball Bat");
	H1.SetMovement(40);
	H1.PrintInfo();
	H1.PrintInfo(false);

	// sets it without using the default constructor
	Zombie Z2 = Zombie("Zombie2", 200, "Walker", 5);
	
	Z2.PrintInfo();
	Z2.PrintInfo(false);

	system("pause");
	return;
}