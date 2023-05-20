#include <iostream>

using namespace std;

// Base class
class Animal {
public:
  virtual void makeSound() {
    cout << "The animal makes a sound(base class)" << endl;
  }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
  void makeSound() {
    cout << "The dog barks(derived class)" << endl;
  }
};

// Function overloading example
void print(int x) {
  cout << "This print function was given the integer value: " << x << endl;
}

void print(float x) {
  cout << "This print method was given the float value: " << x << endl;
}

// Operator overloading example
class Vector {
public:
  int x, y;

  Vector operator+(Vector v) {
    Vector result;
    result.x = x + v.x;
    result.y = y + v.y;
    return result;
  }
};

// Virtual function example
class Shape {
public:
// pure virtual function
  virtual void area() = 0;
};

class Rectangle : public Shape {
public:
  int length, width;

  void dim(int l, int w) {
    length = l;
    width = w;
  }

  void area() {
    int area;
    area=length * width;
    cout<<"area of the rectangle is : "<<area<<endl;

  }
};

int main() {
  int choice;

  do {
    cout << "Please choose a concept to see:\n";
    cout << "1. Inheritance\n";
    cout << "2. Method overloading\n";
    cout << "3. Operator overloading\n";
    cout << "4. Virtual functions\n";
    cout << "0. Exit\n";
    cin >> choice;

    switch (choice) {
      case 1: {
        // Inheritance example
        Animal* animal = new Animal();
        animal->makeSound();

        Dog* dog = new Dog();
        dog->makeSound();
        break;
      }
      case 2: {
        // Method overloading example
        int a; float b;
        cout<<"enter the integer value for first print method  ";
        cin>>a;
        cout<<"enter the float value for second print method  ";
        cin>>b;
        print(a);
        print(b);
        break;
      }
      case 3: {
        // Operator overloading example
        Vector v1, v2, v3;
        cout<<"enter the real part for vector 1: ";
        cin>>v1.x;
        cout<<"enter the imaginary part for vector 1: ";
        cin>>v1.y;
        cout<<"enter the real part for vector 2: ";
        cin>>v2.x;
        cout<<"enter the imaginary part for vector 2: ";
        cin>>v2.y;
        v3 = v1 + v2;
        cout << "The sum of the vectors is: (" << v3.x << ", " << v3.y << ")" << endl;
        break;
      }
      case 4: {
        // Virtual function example
        Rectangle rect1;
        Shape* str=&rect1;
        int l,b;
        cout<<"enter the length of rectangle : ";
        cin>>l;
        cout<<"enter the breadth of rectangle : ";
        cin>>b;
        rect1.dim(l,b);
        str->area();
        break;
      }
      case 0: {
        cout << "Exiting program...\n";
        break;
      }
      default: {
        cout << "Invalid choice, please try again.\n";
        break;
      }
    }
  } while (choice != 0);

  return 0;
}
