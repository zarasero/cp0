
#include "DiamondTrap.hpp"
// КОНСТРУКТОР ПО УМОЛЧАНИЮ
DiamondTrap::DiamondTrap() // Инициализируем объект класса DiamondTrap
{
    std::cout << "DiamondTrap constructor called" << std::endl; // Выводим сообщение о вызове конструктора
    return; // Завершаем конструктор
}

// КОНСТРУКТОР С ПАРАМЕТРОМ ИМЕНИ
DiamondTrap::DiamondTrap(std::string name) : ClapTrap() // Конструктор с параметром для имени, передаем его в конструктор родителя
{
    std::cout << "DiamondTrap constructor called" << std::endl; // Выводим сообщение о вызове конструктора

    // Инициализируем атрибуты конкретно для DiamondTrap, а также для базовых классов
    this->_hp = FragTrap::_hp = 100; // Устанавливаем здоровье для DiamondTrap и FragTrap
    this->_ep = ScavTrap::_ep = 50;  // Устанавливаем энергию для DiamondTrap и ScavTrap
    this->_ad = FragTrap::_ad = 20;  // Устанавливаем урон для DiamondTrap и FragTrap
    this->_name = name;              // Устанавливаем имя для DiamondTrap
    ClapTrap::_name = _name + "_clap_name"; // Устанавливаем имя для базового класса ClapTrap (с добавлением суффикса "_clap_name")
    return; // Завершаем конструктор
}

// ОПЕРАТОР ПРИСВАИВАНИЯ
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) // Оператор присваивания
{
    if (this != &rhs) // Проверяем на самоприсваивание
    {
        // Копируем данные из объекта rhs в текущий объект
        setAD(rhs.getAD());
        setEP(rhs.getEP());
        setHP(rhs.getHP());
        setName(rhs.getName());
    }
    return (*this); // Возвращаем ссылку на текущий объект, чтобы поддержать цепочку присваиваний
}

// КОНСТРУКТОР КОПИРОВАНИЯ
DiamondTrap::DiamondTrap(const DiamondTrap& src) 
    : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    *this = src; // Используем оператор присваивания
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}


// ДЕСТРУКТОР
DiamondTrap::~DiamondTrap() // Деструктор, вызываемый при уничтожении объекта
{
    std::cout << "DiamondTrap destructor called" << std::endl; // Выводим сообщение о вызове деструктора
    return; // Завершаем деструктор
}

// МЕТОД АТАКИ
void DiamondTrap::attack(const std::string& target) // Метод атаки, который принимает цель атаки
{
    ScavTrap::attack(target); // Вызываем метод атаки из класса ScavTrap
    return; // Завершаем метод
}

// МЕТОД WHO AM I
void DiamondTrap::whoAmI() // Метод, выводящий информацию о именах объектов
{
    std::cout << "Name of the ClapTrap : " << ClapTrap::_name << std::endl; // Выводим имя из базового класса ClapTrap
    std::cout << "Name of the DiamondTrap : " << this->_name << std::endl; // Выводим имя текущего объекта DiamondTrap
    return; // Завершаем метод
}

/*
Комментарии:
Конструктор по умолчанию (DiamondTrap()): этот конструктор ничего не инициализирует, кроме вывода сообщения. Используется для создания объектов без передачи имени.
Конструктор с параметром имени (DiamondTrap(std::string name)): В этом конструкторе:
Инициализируются атрибуты для DiamondTrap, а также для базовых классов FragTrap и ScavTrap.
Присваиваем уникальное имя объекту DiamondTrap и имя для базового класса ClapTrap с добавлением суффикса «_clap_name».
Оператор присваивания (operator=): используется для присвоения одного объекта другому. Проверяется самоприсвоение, а затем копируются все атрибуты объекта.
Конструктор копирования (DiamondTrap(const DiamondTrap& src)): копирует значения всех атрибутов из объекта src.
Деструктор (~DiamondTrap()): Выводит сообщение при уничтожении объекта.
Метод атаки (attack(const std::string& target)): Использует метод атаки из базового класса ScavTrap.
Метод whoAmI(): Выводит информацию о двух именах:
Имя, сохранённое в базовом классе ClapTrap (с суффиксом «_clap_name»).
Имя, которое присваивается непосредственно объекту DiamondTrap.
Дополнительные замечания:
DiamondTrap использует атрибуты как из FragTrap, так и из ScavTrap. Важно, что эти атрибуты инкапсулированы в соответствующих родительских классах.
Конструктор и методы корректно устанавливают и выводят информацию о состоянии объектов, используя комбинацию*/