
#include <iostream>

class el
{
	int a;

	public:	
		el() {};
		el(int A) {
			a = A;
		};
		void print();
		void operator++(int);
		static void returnlink(el);
};

void el::operator++(int) {
	a++;
}

void el::returnlink(el k) {
	std::cout << "\nСсылка а = " << &k;
}

void el::print() {
	std::cout << "Значение а = " << a;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int val;

	std::cout << "Введите значение = ";
	std::cin >> val;
	el element(val);
	
	element++;
	element.print();
	el::returnlink(element);
	
	std::cout << "\n\n";
}