#include <iostream>

class Sample
{
	public:
		Sample(int v);
		~Sample(void);
		int	getFoo(void) const;
		int	compare(Sample * other) const;
	private:
		int _foo;
};

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Sample::Sample(int v) : _foo(v)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

int	Sample::getFoo(void) const
{
	return (this->_foo);
}

int	Sample::compare(Sample * other) const
{
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	return (0);
}

int	main(void)
{
	Sample	inst1(42);
	Sample	inst2(42);
	std::cout <<  "inst1 : " << &inst1 << std::endl;
	std::cout <<  "inst2 : " << &inst2 << std::endl;
	std::cout <<  "structure comp 1/2: " << inst1.compare(&inst2) << std::endl;

	Sample	inst3(24);
	Sample	inst4(42);
	std::cout <<  "inst3 : " << &inst3 << std::endl;
	std::cout <<  "inst4 : " << &inst4 << std::endl;
	std::cout <<  "structure comp 3/4: " << inst3.compare(&inst4) << std::endl;
	std::cout <<  "structure comp 4/3: " << inst4.compare(&inst3) << std::endl;
}
