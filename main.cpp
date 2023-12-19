#include <iostream>

class Person {
private:
    std::string name;
    int age;
public:
    Person(std::string inputName, int inputAge) {
        name = inputName;
        age = inputAge;
    }
    
    Person() {
        std::cout << "input your name : ";
        std::cin >> name;

        std::cout << "input your age : ";
        std::cin >> age;
    }

    void getInfo(void) {
        std::cout << "name : " << name << ", age : " << age << '\n';
    }

    void setName(std::string inputName) {
        name = inputName;
    }

    void setAge(int inputAge) {
        age = inputAge;
    }
};

int main(void) {
    using namespace std;

    Person p1 = Person("lee", 3);
    p1.getInfo();

    
    return 0;
}