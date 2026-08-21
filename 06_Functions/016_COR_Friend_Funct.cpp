#include <iostream>
using namespace std;

class Age;

class Name {
    string name;

public:
    void getname(string n) {
        name = n;
    }

    string showname() const {
        return name;
    }

    friend void update(Name &n, Age &a);
};

class Age {
private:
    int age;

public:
    void getage(int a) {
        age = a;
    }

    int showage() const {
        return age;
    }

    friend void update(Name &n, Age &a);
};

void update(Name &n, Age &a) {
    cout << "Enter name: ";
    cin >> n.name;
    cout << "Enter age: ";
    cin >> a.age;
}

int main() {
    Name n;
    Age a;

    update(n, a);  

    cout << "\nDetails:\n";
    cout << "Name: " << n.showname() << endl;
    cout << "Age: " << a.showage() << endl;

    return 0;
}
