#include <iostream>
#include <string>

// Try to remove virtual keyword and see the difference

class Character
{
	// Virtual declaration /!\ Resolution will happen at execution time.
	public:
		virtual void	sayHello(std::string const &target);
};

// Overiding sayHello function
class Warrior : public Character
{
	// Virtual declaration /!\ Resolution will happen at execution time.
	public:
		virtual void	sayHello(std::string const &target);
};

void	Character::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << std::endl;
}

void	Warrior::sayHello(std::string const &target)
{
	std::cout << "F*** off " << target << std::endl;
}

int main(void)
{
	Warrior	*a = new Warrior();
	// here we instantiate a Warrior as a Charater (legit)
	Character	*b = new Warrior();
	// This is forbidden
	//Warrior	*b = new Character();

	a->sayHello("toto");
	b->sayHello("toto");
	return (0);
}
