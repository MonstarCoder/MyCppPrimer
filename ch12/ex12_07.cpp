#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

vector<int>* dynamic_vector_generator();
void dynamic_vector_processor(vector<int>* ptr_v);
void dynamic_vector_printer(vector<int>* ptr_v);

shared_ptr<vector<int>> dynamic_vector_generator_sptr();
void dynamic_vector_processor_sptr(shared_ptr<vector<int>> sptr_vi);
void dynamic_vector_printer_sptr(
		const shared_ptr<vector<int>> sptr_vi);

int main()
{
	auto sptr = dynamic_vector_generator_sptr();
	dynamic_vector_processor_sptr(sptr);
	dynamic_vector_printer_sptr(sptr);

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

std::shared_ptr<std::vector<int>> dynamic_vector_generator_sptr()
{
	    return std::make_shared<std::vector<int>>();
}

void dynamic_vector_processor_sptr(std::shared_ptr<std::vector<int>> sptr_vi)
{
	    int i;
	        std::cout << "plz enter:\n";
		    while (std::cin >> i && i != 999) sptr_vi->push_back(i);
}

void dynamic_vector_printer_sptr(
		    const std::shared_ptr<std::vector<int>> sptr_vi)
{
	    for (const auto& e : *sptr_vi) std::cout << e << " ";
	        std::cout << "\n";
}
