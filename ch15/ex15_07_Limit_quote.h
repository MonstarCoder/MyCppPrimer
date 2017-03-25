#ifndef CP5_07_LIMIT_QUOTE_H_
#define CP5_07_LIMIT_QUOTE_H_

#include "ex15_05_Bulk_quote.h"
#include <string>

namespace EX07 {
	using namespace EX05;
	using std::string;

class Limit_quote : public Bulk_quote {
public:
	Limit_quote() = default;
	Limit_quote(string const& book, double p, size_t min, size_t max,
			double dist) : Bulk_quote(book, p, min, dist),
			max_qty(max) { }

	double net_price(size_t cnt) const override {
		if (cnt > max_qty) return max_qty * (1 - discount) * price
			+ (cnt - max_qty) * price;
		else if (cnt >= min_qty)
			return cnt * (1 - discount) * price;
		else return cnt * price;
	}

private:
	size_t max_qty = 0;
};
}

#endif