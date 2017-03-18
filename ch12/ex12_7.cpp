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

/**
 *  *  @brief  return a pointer to dynamicly allocated vector of ints
 *   *          ex12.6
 *    */
std::vector<int>* dynamic_vector_generator()
{
	    std::vector<int>* ptr_v = new std::vector<int>();
	        return ptr_v;
}

/**
 *  * @brief   return a pointer to vector of ints
 *   *          ex12.6
 *    * @param   ptr_v pointer to vector of ints
 *     */
void dynamic_vector_processor(std::vector<int>* ptr_v)
{
	    int i;
	        std::cout << "plz enter:\n";
		    while (std::cin >> i && i != 999) ptr_v->push_back(i);
}

/**
 *  * @brief   print the content of the vector that ptr_v points to
 *   *          ex12.6
 *    * @param   ptr_v
 *     */
void dynamic_vector_printer(std::vector<int>* ptr_v)
{
	    for (const auto& e : *ptr_v) std::cout << e << " ";
	        std::cout << "\n";
}

/**
 *  * @brief   return a shared_prt to vector of ints
 *   */
std::shared_ptr<std::vector<int>> dynamic_vector_generator_sptr()
{
	    return std::make_shared<std::vector<int>>();
}

/**
 * * @brief    using std IO adding elelements into the vetor and
 * *           return a shared_ptr pointing to it
 * * @param    sptr_vi
 * */
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
