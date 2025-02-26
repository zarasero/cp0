
#include "ClapTrap.hpp"

//      CANONICAL      //
// Конструктор по умолчанию, инициализирующий атрибуты стандартными значениями
ClapTrap::ClapTrap() // CONSTRUCTOR
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_ad = 0;    // Урон по умолчанию — 0
	this->_ep = 10;   // Энергия по умолчанию — 10
	this->_hp = 10;   // Очки здоровья по умолчанию — 10
	return ;
}

// Конструктор с параметром имени, который инициализирует _name и другие атрибуты
ClapTrap::ClapTrap(std::string name) : _name(name) // OTHER CONSTRUCTOR
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_ad = 0;
	this->_ep = 10;
	this->_hp = 10;
	return ;
}

// Конструктор копирования, копирующий значения атрибутов из другого объекта
ClapTrap::ClapTrap(const ClapTrap& src) // COPY CONSTRUCTOR
{
	*this = src; // Используем оператор присваивания для копирования
	return ;
}

// Деструктор, вызываемый при удалении объекта
ClapTrap::~ClapTrap() // DESTRUCTOR
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

// Перегрузка оператора присваивания для копирования значений из другого объекта
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this != &rhs) // Проверяем самоприсваивание
	{
		this->_name = rhs.getName(); // Копируем имя
		this->_ep = rhs.getEP();     // Копируем очки энергии
		this->_hp = rhs.getHP();     // Копируем очки здоровья
		this->_ad = rhs.getAD();     // Копируем урон
	}
	return (*this);
}

// Функция атаки, которая уменьшает энергию и выводит информацию об атаке
void ClapTrap::attack(const std::string& target)
{
	if (_hp > 0) // Проверяем, жив ли объект
	{
		if (_ep > 0) // Проверяем, есть ли энергия для атаки
		{
			std::cout << _name << "[" << _ep << "]" << " attacks " 
                      << target << ", causing " << _ad << " points of damage!" 
                      << std::endl;
			setEP(_ep - 1); // Уменьшаем очки энергии на 1
		}
		else
			std::cout << _name << " has " << _ep 
                      << " energy, and cannot attack." << std::endl;
	}
	else
		std::cout << _name << " can't attack, they are dead." << std::endl;
	return ;
}

// Функция получения урона, которая уменьшает HP объекта
void ClapTrap::takeDamage(unsigned int amount)
{
	setHP(_hp - amount); // Уменьшаем здоровье на величину урона
	if (_hp > 0) // Проверяем, жив ли объект после получения урона
		std::cout << _name << " lost " << amount 
                  << " HP, now has " << _hp << " HP." << std::endl;
	else
		std::cout << _name << " is dead." << std::endl;
	return ;
}

// Функция восстановления, которая увеличивает здоровье, если есть энергия
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep > 0) // Проверяем, есть ли энергия для восстановления
	{
		std::cout << _name << "[" << _ep << "]" 
                  << " repaired " << amount << " HP, now has " 
                  << _hp + amount << " HP points." << std::endl;
		setHP(_hp + amount); // Увеличиваем здоровье
		setEP(_ep - 1);      // Уменьшаем энергию
	}
	else
		std::cout << _name << " has " << _ep 
                  << " energy, and cannot repair." << std::endl;
}

// Геттер для здоровья
int ClapTrap::getHP(void) const
{
	return (this->_hp);
}

// Сеттер для здоровья
void ClapTrap::setHP(int hp)
{
	this->_hp = hp;
	return ;
}

// Геттер для энергии
int ClapTrap::getEP(void) const
{
	return (this->_ep);
}

// Сеттер для энергии
void ClapTrap::setEP(int ep)
{
	this->_ep = ep;
	return ;
}

// Геттер для урона
int ClapTrap::getAD(void) const
{
 	return (this->_ad);
}

// Сеттер для урона
void ClapTrap::setAD(int ad)
{
	this->_ad = ad;
	return ;
}

// Геттер для имени
std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

// Сеттер для имени
void ClapTrap::setName(std::string name)
{
	this->_name = name;
}
