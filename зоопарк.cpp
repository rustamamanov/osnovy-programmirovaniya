
#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
public:
    Animal(const std::string& animalName) : name(animalName) {}
    virtual void sound() = 0;
};

class Lion : public Animal {
public:
    Lion(const std::string& lionName) : Animal(lionName) {}
    void sound() override {
        std::cout << "The lion " << name << " roars." << std::endl;
    }
};

class Giraffe : public Animal {
public:
    Giraffe(const std::string& giraffeName) : Animal(giraffeName) {}
    void sound() override {
        std::cout << "The giraffe " << name << " makes no sound." << std::endl;
    }
};

class Elephant : public Animal {
public:
    Elephant(const std::string& elephantName) : Animal(elephantName) {}
    void sound() override {
        std::cout << "The elephant " << name << " trumpets." << std::endl;
    }
};

int main() {
    Lion lion("Simba");
    Giraffe giraffe("Melman");
    Elephant elephant("Dumbo");

    lion.sound();
    giraffe.sound();
    elephant.sound();

    return 0;
}
