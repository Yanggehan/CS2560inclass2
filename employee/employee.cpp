#include <iostream>
#include <string>
using namespace std;
class employee
{
private:
	string name;
		int ID;
	string department;
	string position;
public:
	employee(string Name, int newID, string Department, string Position);
	employee(string Name, int newID);
	employee();
	void setName(string);
	void setnewID(int);
	void setDepartment(string);
	void setPosition(string);
	string getName() const;
	int getnewID() const;
	string getDepartment() const;
	string getPosition() const;
};
employee::employee(string Name, int newID, string Department, string Position)
{
	name = Name;
	ID = newID;
	department = Department;
	position = Position;
}
employee::employee(string Name, int newID)
{
	name = Name;
	ID = newID;
	department = "";
	position = "";
}
employee::employee()
{
	name = "";
	ID = 0;
	department = "";
	position = "";
}
void employee::setName(string Name) {
	name = Name;
}
void employee::setnewID(int newID) {
	ID = newID;
}
void employee::setDepartment(string Department) {
	department = Department;
}
void employee::setPosition(string Position) {
	position = Position;
}
string employee::getName() const{
	return name;
}
int employee::getnewID() const {
	return ID;
}
string employee::getDepartment() const {
	return department;

}
string employee::getPosition() const {
	return position;
}
int main() {
	employee worker1("Susan Meyers", 47899, "Accounting", "Vice President");
	employee worker2("Mark Jones", 39119);
	worker2.setDepartment("IT");
	worker2.setPosition("Programmer");
	employee worker3;
	worker3.setName("Joy Rogers");
	worker3.setnewID(81774);
	worker3.setDepartment("Manufacturing");
	worker3.setPosition("Engineer");
	cout << "---------------------------------------------------------------------" << endl;
	cout << "name             ID number          department             position" << endl;
	cout << "---------------------------------------------------------------------" << endl;
	cout << worker1.getName() ;
	cout << "      "  ;
	cout << worker1.getnewID()     ;
	cout << "            "  ;
	cout << worker1.getDepartment();
	cout << "             ";
	cout << worker1.getPosition() << endl;
	cout << worker2.getName();
	cout << "      ";
	cout << worker2.getnewID();
	cout << "            ";
	cout << worker2.getDepartment();
	cout << "                      ";
	cout << worker2.getPosition() << endl;
	cout << worker3.getName();
	cout << "      ";
	cout << worker3.getnewID();
	cout << "            ";
	cout << worker3.getDepartment();
	cout << "              ";
	cout << worker3.getPosition() << endl;
	cout << "---------------------------------------------------------------------" << endl;
	return 0;


}