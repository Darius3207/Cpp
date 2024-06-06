#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	string name;
	int age;
};
void print(Person* person)
{
	cout << person->name << " is "<< person->age << " years old" << endl;
}

int main()
{
	Person person;
	person.name = "Alex";
	person.age = 25;
	cout << "Meet " << person.name;
	print(&person);

	person.name = "Andrew";
	person.age = 15;
	cout << "Meet " << person.name;
	print(&person); 

	person.name = "Daniel";
	person.age = 52;
	cout << "Meet " << person.name;
	print(&person);

	return 0;
}
