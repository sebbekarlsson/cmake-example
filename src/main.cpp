#include <Person.hpp>
#include <Animal.hpp>
#include <iostream>

int main(int argc, char* argv[]) {
  Person* person = new Person(36);
  
  std::cout << person->getAge() << std::endl;


  Animal* animal = new Animal(120, 120);

  return 0;
}
