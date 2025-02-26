
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(int argc, char **av)
{
	// ONE ATTACK FROM SCAVTRAP
	/*
	(void)argc, (void)av;
	ClapTrap ct("CT");
	ScavTrap st("ST");


	std::cout << "CT1 HP : " << ct.getHP() << std::endl << std::endl;
	std::cout << "ST HP : " << st.getHP() << std::endl << std::endl;
	
	ct.attack("ST");
	st.takeDamage(ct.getAD());
	st.attack("CT");
	ct.takeDamage(st.getAD());
	*/

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
	
(void)argc, (void)av; 
// Ожидается, что аргументы командной строки (argc и av) будут использованы в дальнейшем,
// но в данный момент они игнорируются с помощью приведения к типу (void).

// Создание объектов класса ScavTrap с именами "ST", "ST2" и "COPYTEST".
ScavTrap st("ST");
ScavTrap st2("ST2");
ScavTrap testcopy("COPYTEST");

// Устанавливаем значения энергии (EP) для объектов st и st2.
st.setEP(1);
st2.setEP(1);

// Выводим на экран значения HP для объектов st и st2.
std::cout << "ST HP : " << st.getHP() << std::endl << std::endl;
std::cout << "ST2 HP : " << st2.getHP() << std::endl << std::endl;

// Выводим на экран количество энергии (EP) для обоих объектов st и st2.
std::cout << "EP for both : " << st.getEP() << std::endl;

// Копируем содержимое объекта st в объект testcopy с помощью оператора присваивания.
testcopy = st;

// Выводим на экран значение HP для объекта testcopy (копия объекта st).
std::cout << " COPYTEST HP's :" << testcopy.getHP() << std::endl;

// Вызов метода `guardGate()` для объектов st и st2.
// Метод, вероятно, включает какую-то особую защиту для объектов.
st.guardGate();
st2.guardGate();

// st атакует st2.
st.attack("ST2");

// st2 получает урон от атаки st (используем урон st).
st2.takeDamage(st.getAD());

// st атакует st2 еще раз.
st.attack("ST2");
// st2 получает урон от второй атаки st.
st2.takeDamage(st.getAD());

// st2 атакует st.
st2.attack("ST");
// st получает урон от атаки st2.
st.takeDamage(st2.getAD());

// st2 атакует st еще раз.
st2.attack("ST");
// st получает урон от второй атаки st2.
st.takeDamage(st2.getAD());

// st атакует st2.
st.attack("ST2");
// st2 получает урон от атаки st.
st2.takeDamage(st.getAD());

// st атакует st2 еще раз.
st.attack("ST2");
// st2 получает урон от второй атаки st.
st2.takeDamage(st.getAD());

// st2 атакует st.
st2.attack("ST");
// st получает урон от атаки st2.
st.takeDamage(st2.getAD());

// st2 атакует st еще раз.
st2.attack("ST");
// st получает урон от второй атаки st2.
st.takeDamage(st2.getAD());

// Копируем содержимое объекта st2 в объект testcopy, делая testcopy копией st2.
testcopy = st2;

// Выводим на экран, что теперь объект testcopy является копией объекта st2 и выводим его HP.
std::cout << "COPYTEST IS NOW A COPY OF ST2, HP's : " << testcopy.getHP() << std::endl;

// Возвращаем 0, что означает успешное завершение программы.
return (0);

}
/*В вашем коде создаются два объекта класса ScavTrap с именами "ST" и "ST2". Затем устанавливаются их очки энергии (EP) равными 1. После этого выводятся значения их очков здоровья (HP) и EP. Затем объект testcopy присваивается объекту st, и выводится его HP. Далее выполняются атаки и получение урона между объектами, а также восстановление здоровья. В конце объект testcopy присваивается объекту st2, и выводится его HP.

Класс ScavTrap является производным от класса ClapTrap и добавляет дополнительную функциональность, такую как метод guardGate(), который выводит сообщение о том, что объект теперь охраняет ворота. Конструктор ScavTrap инициализирует имя, очки здоровья (HP), очки энергии (EP) и урон от атаки (AD) с соответствующими значениями. Метод attack() выводит сообщение об атаке на цель, если у объекта есть очки здоровья и энергия для атаки. Метод takeDamage() уменьшает HP объекта на указанное количество и выводит соответствующее сообщение. Метод beRepaired() увеличивает HP объекта на указанное количество, если у объекта есть энергия для восстановления.

В вашем коде также используется оператор присваивания =, который копирует значения из одного объекта в другой. Это позволяет создавать копии объектов и манипулировать ими.

В целом, ваш код демонстрирует создание объектов, их взаимодействие и использование методов классов для выполнения различных действий.*/