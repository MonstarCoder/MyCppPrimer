#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

vector<int>* dynamic_vector_generator();
void dynamic_vector_processor(vector<int>* ptr_v);
void dynamic_vector_printer(vector<int>* ptr_v);

int main()
{
	vector<int>* ptr_vi = dynamic_vector_generator();
	dynamic_vector_processor(ptr_vi);
	dynamic_vector_printer(ptr_vi);

	delete ptr_vi;

	return 0;
}

std::vector<int>* dynamic_vector_generator()
{
	    std::vector<int>* ptr_v = new std::vector<int>();
	        return ptr_v;
}

void dynamic_vector_processor(std::vector<int>* ptr_v)
{
	    int i;
	        std::cout << "plz enter:\n";
		    while (std::cin >> i && i != 999) ptr_v->push_back(i);
}

void dynamic_vector_printer(std::vector<int>* ptr_v)
{
	    for (const auto& e : *ptr_v) std::cout << e << " ";
	        std::cout << "\n";
}
