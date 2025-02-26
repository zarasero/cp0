
#include "FragTrap.hpp"

// Конструктор по умолчанию для FragTrap, инициализирует объект без параметров
FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	return ;
}

// Конструктор с параметром имени, вызывает базовый конструктор ClapTrap
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	setAD(30);  // Устанавливаем урон на 30
	setEP(100); // Устанавливаем очки энергии на 100
	setHP(100); // Устанавливаем здоровье на 100
	return ;
}

// Деструктор для FragTrap, вызывается при удалении объекта
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

// Конструктор копирования, копирует данные из другого объекта FragTrap
FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) // Инициализация базового класса
{
	*this = src; // Копирование специфичных данных FragTrap
	return ;
}


// Метод для вывода сообщения с просьбой о "пятерке"
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap : High Fives !!" << std::endl;
	return ;
}

// Перегрузка оператора присваивания, копирует атрибуты из другого объекта
FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	if (this != &rhs) // Проверяем самоприсваивание
	{
		setAD(rhs.getAD());       // Копируем урон
		setEP(rhs.getEP());       // Копируем очки энергии
		setHP(rhs.getHP());       // Копируем очки здоровья
		setName(rhs.getName());   // Копируем имя
	}
	return (*this); // Возвращаем ссылку на текущий объект
}
