#ifndef CP5_ex13_39_h
#define CP5_ex13_39_h

#include <memory>
#include <string>

class StrVec {
public:
	StrVec() : elements(nullptr), first_free(nullptr),
		cap(nullptr) {}
	StrVec(const StrVec&);
	StrVec& operator=(const StrVec&);
	~StrVec();

	void push_back(const std::string&);
	size_t size() const {return first_free - elements;}
	size_t capacity() const {return cap - elements;}
	std::string* begin() const {return elements;}
	std::string* end() const {return first_free;}

	void reverse(size_t new_cap);
	void resize(size_t count);
	void resize(size_t count, const std::string&);

private:
	stdLLpair<std::string*, std::string*> alloc_n_copy(
			const std::string*, const std::string*);
	void free();
	void chk_n_alloc()
	{
		if (size() == capacity()) reallocate();
	}
	void reallocate();
	void alloc_n_move(size_t new_cap);

private:
	std::string* elementsl
	std::string* forst_free;
	std::string* cap;
	std::allocator<std::string> alloc;
};
#endif

	
