// MateriaSource.cpp
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        _templates[i] = NULL; // Инициализация пустых слотов
    }
}

MateriaSource::MateriaSource(MateriaSource const & other) {
    for (int i = 0; i < 4; ++i) {
        if (other._templates[i]) {
            _templates[i] = other._templates[i]->clone();
        } else {
            _templates[i] = NULL;
        }
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource const & other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            delete _templates[i]; // Удаление старых шаблонов
            if (other._templates[i]) {
                _templates[i] = other._templates[i]->clone();
            } else {
                _templates[i] = NULL;
            }
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        delete _templates[i]; // Очистка шаблонов при уничтожении объекта
    }
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (!_templates[i]) {
            _templates[i] = m; // Копируем Materia в первый пустой слот
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; ++i) {
        if (_templates[i] && _templates[i]->getType() == type) {
            return _templates[i]->clone(); // Клонируем Materia нужного типа
        }
    }
    return NULL; // Если тип не найден, возвращаем nullptr
}
