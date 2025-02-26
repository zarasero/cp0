
#include "ClapTrap.hpp"

//      CANONICAL      //
// КОНСТРУКТОР ПО УМОЛЧАНИЮ
ClapTrap::ClapTrap() // Инициализируем объект класса ClapTrap
{
    std::cout << "ClapTrap constructor called" << std::endl;  // Выводим сообщение о вызове конструктора
    this->_ad = 0;  // Инициализация атрибутов по умолчанию: урон (attack damage) равен 0
    this->_ep = 10; // Инициализация энергии (energy points) по умолчанию, 10
    this->_hp = 10; // Инициализация здоровья (hit points) по умолчанию, 10
    return;  // Завершаем конструктор
}

// КОНСТРУКТОР С ПАРАМЕТРОМ ИМЕНИ
ClapTrap::ClapTrap(std::string name) : _name(name) // Конструктор с параметром для имени, передаем его в конструктор родителя
{
    std::cout << "ClapTrap constructor called" << std::endl; // Выводим сообщение о вызове конструктора
    this->_ad = 0;  // Инициализация урона
    this->_ep = 10; // Инициализация энергии
    this->_hp = 10; // Инициализация здоровья
    return;  // Завершаем конструктор
}

// КОНСТРУКТОР КОПИРОВАНИЯ
ClapTrap::ClapTrap(const ClapTrap& src) // Конструктор копирования
{
    *this = src; // Копируем значения из объекта src в текущий объект
    return;  // Завершаем конструктор
}

// ДЕСТРУКТОР
ClapTrap::~ClapTrap() // Деструктор, который вызывается при уничтожении объекта
{
    std::cout << "ClapTrap destructor called" << std::endl;  // Выводим сообщение о вызове деструктора
    return;  // Завершаем деструктор
}

// ОПЕРАТОР ПРИСВАИВАНИЯ
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) // Оператор присваивания
{
    if (this != &rhs) // Проверка на самоприсваивание (если это не тот же объект)
    {
        this->_name = rhs.getName();  // Копируем имя
        this->_ep = rhs.getEP();      // Копируем энергию
        this->_hp = rhs.getHP();      // Копируем здоровье
        this->_ad = rhs.getAD();      // Копируем урон
    }
    return (*this); // Возвращаем ссылку на текущий объект, чтобы поддержать цепочку присваиваний
}

// МЕТОД АТАКИ
void ClapTrap::attack(const std::string& target) // Метод атаки, который принимает цель атаки
{
    if (_hp > 0) // Если объект жив (имеет здоровье)
    {
        if (_ep > 0) // Если есть энергия для атаки
        {
            std::cout << _name << "[" << _ep << "]" // Выводим имя и текущую энергию
                      << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
            setEP(_ep - 1); // Уменьшаем энергию на 1 после атаки
        }
        else
            std::cout << _name << " has " << _ep << " energy, so he can't attack." << std::endl; // Если энергии нет
    }
    else
        std::cout << _name << " can't attack, he is dead" << std::endl; // Если объект мертв, он не может атаковать
    return; // Завершаем метод
}

// МЕТОД ПОЛУЧЕНИЯ УРОНА
void ClapTrap::takeDamage(unsigned int amount) // Метод получения урона
{
    setHP(_hp - amount); // Уменьшаем здоровье на количество урона
    if (_hp >= 0)  // Проверяем, не стало ли здоровье меньше нуля
        std::cout << _name << " lost " << amount << " HP, now has " << _hp << std::endl; // Выводим сообщение о потере здоровья
    else
        std::cout << _name << " is dead" << std::endl;  // Если здоровье меньше или равно нулю, объект мертв
    return;  // Завершаем метод
}

// МЕТОД ВОССТАНОВЛЕНИЯ ЗДОРОВЬЯ
void ClapTrap::beRepaired(unsigned int amount) // Метод восстановления здоровья
{
    if (_ep > 0) // Проверяем, есть ли энергия для восстановления
    {
        setHP(_hp + amount); // Увеличиваем здоровье на заданную величину
        setEP(_ep - 1);  // Уменьшаем энергию на 1 после использования восстановления
        std::cout << _name << "[" << _ep << "]"  // Выводим имя и текущую энергию
                  << " restored " << amount << " HP, now has " << _hp << " HP points." << std::endl; 
    }
    else
        std::cout << _name << " has no energy to repair." << std::endl; // Если энергии нет
}

// ГЕТТЕРЫ И СЕТТЕРЫ ДЛЯ ЗДОРОВЬЯ (HP)
int ClapTrap::getHP(void) const // Геттер для получения значения здоровья
{
    return (this->_hp);  // Возвращаем текущее значение здоровья
}

void ClapTrap::setHP(int hp) // Сеттер для изменения значения здоровья
{
    this->_hp = hp;  // Устанавливаем новое значение здоровья
    return;  // Завершаем метод
}

// ГЕТТЕРЫ И СЕТТЕРЫ ДЛЯ ЭНЕРГИИ (EP)
int ClapTrap::getEP(void) const // Геттер для получения значения энергии
{
    return (this->_ep);  // Возвращаем текущее значение энергии
}

void ClapTrap::setEP(int ep) // Сеттер для изменения значения энергии
{
    this->_ep = ep;  // Устанавливаем новое значение энергии
    return;  // Завершаем метод
}

// ГЕТТЕРЫ И СЕТТЕРЫ ДЛЯ УРОНА (AD)
int ClapTrap::getAD(void) const // Геттер для получения значения урона
{
    return (this->_ad);  // Возвращаем текущее значение урона
}

void ClapTrap::setAD(int ad) // Сеттер для изменения значения урона
{
    this->_ad = ad;  // Устанавливаем новое значение урона
    return;  // Завершаем метод
}

// ГЕТТЕРЫ И СЕТТЕРЫ ДЛЯ ИМЕНИ
std::string ClapTrap::getName(void) const // Геттер для получения имени
{
    return (this->_name);  // Возвращаем текущее имя
}

void ClapTrap::setName(std::string name) // Сеттер для изменения имени
{
    this->_name = name;  // Устанавливаем новое имя
}
