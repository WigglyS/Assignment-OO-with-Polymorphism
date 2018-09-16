/*This files contains all the deffinitions for the classes functions
*/

#include "Classes.h"
 
using namespace std;

//function definitons for the parent class

Character::Character() {}
Character::Character(string N, int H)
{
		name = N;
		health = H;
}

//Gets and sets the name
string Character::GetName() { return name; }
void Character::SetName(string N) { name = N; }

//Gets and sets the health
int Character::GetHealth() { return health; }
void Character::SetHealth(int H)
{
	if (H >= 0) {
		health = H;
	}
	else if (H < 0) {
		cout << "Health cannot be negative" << endl;
	}
}

void Character::PrintInfo()
{
	cout << "This character is named :" << name << " and has " << health << " health" << endl<< endl;
}


// function definitions for the zombie child class

Zombie::Zombie() {}
Zombie::Zombie(string N, int H, string T, int S)
{
	name = N;
	health = H;
	Type = T;
	speed = S;
}

//Gets and sets the type
string Zombie::GetType() { return Type; }
void Zombie::SetType(string T) { Type = T; }

//Gets and sets the Speed
int Zombie::GetSpeed() { return speed; }
void Zombie::SetSpeed(int S) { speed = S; }

void Zombie::PrintInfo()
{
	Character::PrintInfo();
	cout << "It is a zombie with Type :" << Type << " and a speed of :" << speed << " mph" << endl << endl;
}
void Zombie::PrintInfo(bool Info)
{
	Character::PrintInfo();
	if (Info) {
		cout << "It is a zombie with Type :" << Type << " and a speed of :" << speed << " mph" << endl << endl;
	}
}

//Funtion definitions for the human child class

Human::Human(){}
Human::Human(string N, int H, string W, int M)
{
	Character:Character(N, H);
	Weapon = W;
	Movement = M;
}

//Gets and sets the weapon 
string Human::GetWeapon() { return Weapon; }
void Human::SetWeapon(string W) { Weapon = W; }

//Gets and sets the Movement
int Human::GetMovement() { return Movement; }
void Human::SetMovement(int M) { Movement = M; }

void Human::PrintInfo()
{
	Character::PrintInfo();
	cout << "It is a Human with a :" << Weapon << " for a weapon and a movement of :" << Movement <<  endl << endl;
}
void Human::PrintInfo(bool Info) {
	Character::PrintInfo();
	if (Info) {
		cout << "It is a Human with a :" << Weapon << " for a weapon and a movement of :" << Movement << endl << endl;
	}

}

