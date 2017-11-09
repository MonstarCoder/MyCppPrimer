#include <iostream>
#include <typeinfo>

using namespace std;

class A {
public:
	virtual ~A() {}
};

class B : public virtual A {
public:
	virtual ~B() {}
};

class C : public B {
public:
	virtual ~C() {}
};

class D : public B, public A {
public:
	virtual ~D() {}
};

int main(int argc, char const *argv[])
{
	/* Exercise 19.3 */

	A *pa = new C;    
	B *pb = dynamic_cast< B* >(pa); 
	if (pb) cout << "19.3 (a) succeed!" << endl;
	else cout << "19.3 (a) fail!" << endl;

	pb = new B;    
	C *pc = dynamic_cast< C* >(pb); 
	if (pc) cout << "19.3 (b) succeed!" << endl;
	else cout << "19.3 (b) fail!" << endl;

	//A* pa = new D;    
	//pb = dynamic_cast< B* >(pa); */

	/* Exercise 19.4 */

	C c; B b;
	A &ra1 = c, &ra2 = b;
	try {
		/* succeed */
		C &rc1 = dynamic_cast<C&>(ra1);
		cout << "19.4 succeed!" << endl;
		/* fail */
		C &rc2 = dynamic_cast<C&>(ra2);
	} catch (bad_cast) {
		cout << "19.4 failed!" << endl;
	}
	return 0;
}
