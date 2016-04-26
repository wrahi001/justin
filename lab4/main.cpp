#include <iostream>
#include <string>
#include "lab4.h"
using namespace std;

int main()
{
	Op *op7 = new Op(7);
	Op *op4 = new Op(4);
	Op *op3 = new Op(3);
	Op *op2 = new Op(2);

	Mult *A = new Mult(op7, op4);
	Add *B = new Add(A, op3);
	Sub *C = new Sub(B, op2);
	Sqr *D = new Sqr(C);
	
	VectorContainer *container = new VectorContainer();
	container->add_element(A);
	container->add_element(B);
	container->add_element(C);
	
	cout << "Container Before Sort: " << endl;
	container->print();

	cout << "Container After Sort: " << endl;
	container->set_sort_function(new BubbleSort());
	container->sort();
	//BubbleSort* bub = new BubbleSort();
	//bub->sort(container);
	container->print();
	

	return 0;
}
