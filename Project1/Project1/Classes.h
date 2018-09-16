/*This file contains all the classes used 
*/

#ifndef Classes_H
#define Classes_H

#include <string>
#include <iostream>

using namespace std;

//Parent class that has name and health and sets them through functions
class Character {
private:
protected:
	string name;
	int health;
public:
	Character();
	Character(string N, int H);

	string GetName();
	void SetName(string N);

	int GetHealth();
	void SetHealth(int H);

	void PrintInfo();
};

// child class that has the additional attributes type and speed
class Zombie : public Character{
private:
	string Type;
	int speed;
protected:
	
public:
	Zombie();
	Zombie(string N, int H,string T,int S);

	string GetType();
	void SetType(string T);

	int GetSpeed();
	void SetSpeed(int S);

	void PrintInfo();
	void PrintInfo(bool Info);
};

//child class that has the additional atributes weapon and movement
class Human: public Character {
private:
	string Weapon;
	int Movement;
protected:
	
public:
	Human();
	Human(string N, int H, string W, int M);

	string GetWeapon();
	void SetWeapon(string W);

	int GetMovement();
	void SetMovement(int M);

	void PrintInfo();
	void PrintInfo(bool Info);
};


#endif
