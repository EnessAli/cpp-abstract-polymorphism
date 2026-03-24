# C++ Abstract Polymorphism

Runtime polymorphism via abstract base classes, pure virtual functions, interfaces, and deep copy of polymorphic hierarchies — culminating in a full Animal/Brain simulation demonstrating dynamic dispatch.

## Concepts Covered

### Pure Virtual Functions & Abstract Classes
```cpp
class AAnimal {
public:
    virtual ~AAnimal() {}
    virtual void makeSound() const = 0; // pure virtual — cannot instantiate AAnimal
};
```

### Interface Pattern (C++98)
```cpp
class ICharacter {
public:
    virtual ~ICharacter() {}
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};
```

### Polymorphic Deep Copy
```cpp
AAnimal *animals[10];
for (int i = 0; i < 5; i++)  animals[i] = new Dog();
for (int i = 5; i < 10; i++) animals[i] = new Cat();

// Deep copy via clone()
AAnimal *copy = animals[0]->clone();

// Polymorphic destruction (virtual destructor required)
for (int i = 0; i < 10; i++) delete animals[i];
```

### Materia System
Strategy-pattern inspired: `AMateria` subclasses (`Ice`, `Cure`) attached to `Character` slots via `ICharacter` interface. `IMateriaSource` acts as a factory.

## Build

```bash
make && ./ex03
```

## Tech Stack

`C++98` `Abstract Classes` `Pure Virtual` `Interface` `Polymorphism` `Strategy Pattern`

