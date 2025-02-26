
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(int argc, char **av)
{
	// Игнорируем параметры командной строки, так как они не используются
	(void)argc, (void)av;

	// Создаем объект типа FragTrap с именем "FT"
	FragTrap ft("FT");

	// Создаем объект типа ScavTrap с именем "ST"
	ScavTrap st("ST");

	// Вывод текущего количества HP у FragTrap
	std::cout << "FT HP : " << ft.getHP() << std::endl << std::endl;

	// Вывод текущего количества HP у ScavTrap
	std::cout << "ST HP : " << st.getHP() << std::endl << std::endl;

	// FragTrap атакует ScavTrap, вызывая метод `attack` с целью "ST"
	ft.attack("ST");

	// ScavTrap получает урон, равный значению AD (Attack Damage) FragTrap
	st.takeDamage(ft.getAD());

	// ScavTrap атакует FragTrap, вызывая метод `attack` с целью "FT"
	st.attack("FT");

	// FragTrap получает урон, равный значению AD ScavTrap
	ft.takeDamage(st.getAD());

	// FragTrap вызывает специальную функцию `highFivesGuys`, демонстрируя свою уникальную способность
	ft.highFivesGuys();

	// Возвращаем 0, завершая выполнение программы
	return 0;
	

	// SCAVTRAP VS SCAVTRAP
	/*
	(void)argc, (void)av;
	ScavTrap st("ST");
	ScavTrap st2("ST");

	std::cout << "ST HP : " << st.getHP() << std::endl << std::endl;
	std::cout << "ST2 HP : " << st2.getHP() << std::endl << std::endl;
	
	st.attack("ST2");
	st2.takeDamage(st.getAD());
	st.attack("ST2");
	st2.takeDamage(st.getAD());
	st2.attack("ST");
	st.takeDamage(st2.getAD());
	st2.attack("ST");
	st.takeDamage(st2.getAD());
	*/
	
	// SCAVTRAP NO ENERGY
	/*
	(void)argc, (void)av;
	ScavTrap st("ST");
	ScavTrap st2("ST");

	st.setEP(1);
	st2.setEP(1);
	
	std::cout << "ST HP : " << st.getHP() << std::endl << std::endl;
	std::cout << "ST2 HP : " << st2.getHP() << std::endl << std::endl;
	std::cout << "EP for both : " << st.getEP() << std::endl;
	
	st.guardGate();
	st2.guardGate();
	st.attack("ST2");
	st2.takeDamage(st.getAD());
	st.attack("ST2");
	st2.takeDamage(st.getAD());
	st2.attack("ST");
	st.takeDamage(st2.getAD());
	st2.attack("ST");
	st.takeDamage(st2.getAD());
	st.attack("ST2");
	st2.takeDamage(st.getAD());
	st.attack("ST2");
	st2.takeDamage(st.getAD());
	st2.attack("ST");
	st.takeDamage(st2.getAD());
	st2.attack("ST");
	st.takeDamage(st2.getAD());	
	return (0);*/
}