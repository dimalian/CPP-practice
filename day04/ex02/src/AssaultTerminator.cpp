#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout<<"“* teleports from space *"<<std::endl;
}
AssaultTerminator::AssaultTerminator(const AssaultTerminator &cp)
{
	(void)cp;
}
AssaultTerminator::~AssaultTerminator()
{
	std::cout<<"I’ll be back ..."<<std::endl;
}
AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &sm)
{
	(void)sm;
	return (*this);
}
void AssaultTerminator::battleCry() const
{
	std::cout<<"This code is unclean. PURIFY IT !"<<std::endl;
}
void AssaultTerminator::rangedAttack() const
{
	std::cout<<"* does nothing *"<<std::endl;
}
void AssaultTerminator::meleeAttack() const
{
	std::cout<<"* attacks with chainfists *"<<std::endl;
}
AssaultTerminator* AssaultTerminator::clone() const
{
	return(new AssaultTerminator());
}