#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
    WrongAnimal &operator=(const WrongAnimal &other);
    WrongAnimal(const WrongAnimal &other);
};

#endif