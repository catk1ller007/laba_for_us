#include <iostream>
#include "Poliz.h"
#include "Arithmetic.h"
#include "Table.h"
#include "Stack.h"
#include "Record.h"



int main()
{
	/*Record<int> a("value a", 5);
	Record<int> b(5);
	Record<int> c(a);

	std::cout << "a: name -> " << a.get_name() << " value -> " << a.get_value() << std::endl;
	std::cout << "b: name -> " << b.get_name() << " value -> " << b.get_value() << std::endl;
	std::cout << "c: name -> " << c.get_name() << " value -> " << c.get_value() << std::endl;*/

	/*Record<int> record1("record1", 1);
	Record<int> record2("record2", 2);
	Record<int> record3("record3", 3);
	Record<int> record4("record4", 4);
	Record<int> record5("record5", 5);

	Table<int> a(6);
	Table<int> b;

	a.push(record1);
	a.push(record2);
	a.push(record3);
	a.push(record4);
	a.push(record5);

	std::cout << "a is full: " << a.full() << std::endl;
	std::cout << "a is empty: " << a.empty() << std::endl;

	std::cout << "a at index 1 " << a[1].get_name() << " " << a[1].get_value() << std::endl;

	std::cout << "searching a record 'record3' and getting value " << a.search("record3") << std::endl;
	std::cout << "searching a record 'record3' and getting position " << a.search_line("record3") << std::endl;

	std::cout << "erase record3..." << std::endl;
	a.erase("record3");

	std::cout << "retry searching a record 'record3' and getting value " << a.search("record3") << std::endl;
	std::cout << "retry searching a record 'record3' and getting position " << a.search_line("record3") << std::endl;

	b = a;

	std::cout << "b at index 1 " << b[1].get_name() << " " << b[1].get_value() << std::endl;

	Table<int> c(a);

	std::cout << "c at index 1 " << c[1].get_name() << " " << c[1].get_value() << std::endl;

	for (int i = 0; i < a.getSize(); i++) {
		std::cout << a[i].get_name() << " " << a[i].get_value() << std::endl;
	}

	for (int i = 0; i < b.getSize(); i++) {
		std::cout << b[i].get_name() << " " << b[i].get_value() << std::endl;
	}

	for (int i = 0; i < c.getSize(); i++) {
		std::cout << c[i].get_name() << " " << c[i].get_value() << std::endl;
	}*/

	/*Stack<int> a(4), b;

	a.push(5);
	a.push(4);
	a.push(3);

	b = a;

	Stack<int> c(a);

	while (!a.empty()) {
		std::cout << a.pop() << std::endl;
	}

	b.push(6);

	while (!b.empty()) {
		std::cout << b.pop() << std::endl;
	}

	b.push(1);

	std::cout << "b is empty: " << b.empty() << std::endl;
	std::cout << "b is full: " << b.full() << std::endl;
	std::cout << "b top: " << b.top() << std::endl;

	while (!c.empty()) {
		std::cout << c.pop() << std::endl;
	}*/


	/*Poliz polizOne("a^(x*y/k-b^2)/(x^2+y^2)*b-25*a^2/b^2");
	std::cout << polizOne.get_poliz() << '\n';
	polizOne.showVariable();

	Poliz polizTwo("5 + 4 + 2 / ( 17 + 4 ^(4^2*3)) + 5");

	std::cout << polizOne.get_poliz() << '\n';
	std::cout << polizTwo.get_poliz() << '\n';

	polizTwo = polizOne;

	std::cout << polizOne.get_poliz() << '\n';
	std::cout << polizTwo.get_poliz() << '\n';

	Poliz polizFree(polizOne);

	std::cout << polizOne.get_poliz() << '\n';
	std::cout << polizFree.get_poliz() << '\n';*/




	Arithmetic valueOne("a^(x*y/k-b^2)/(x^2+y^2)*b-25*a^2/b^2");

	std::cout << valueOne.get_poliz()->get_poliz() << '\n';

	std::cout << '\n';

	Arithmetic valueTwo("3 ^ pp + 6 / 3 * b + ( 2 ^ 5 * 2 ) + ( 3 + 2 )"); // 3 ^ 2 + 6 / 3 * 2 + ( 2 ^ 5 * 2 ) + ( 3 + 2 )

	std::cout << valueTwo.get_poliz()->get_poliz() << '\n';
	std::cout << valueTwo.calculate() << '\n';

	std::cout << '\n';

	valueOne = valueTwo;

	std::cout << valueOne.get_poliz()->get_poliz() << '\n';
	std::cout << valueTwo.get_poliz()->get_poliz() << '\n';

	std::cout << '\n';

	Arithmetic valueFree(valueOne);

	std::cout << valueOne.get_poliz()->get_poliz() << '\n';
	std::cout << valueTwo.get_poliz()->get_poliz() << '\n';
	std::cout << valueFree.get_poliz()->get_poliz() << '\n';

	std::cout << '\n';


	return 0;
}