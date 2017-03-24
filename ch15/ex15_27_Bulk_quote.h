#ifndef CP5_27_BULK_QUOTE_H_
#define CP5_27_BULK_QUOTE_H_

#include "ex15_15_Disc_quote.h"

inline namespace EX27 {
	using std::string;

class Bulk_quote : public Disc_quote {
public:
	using Disc_quote::Disc_quote;
	virtual double net_price(std::size_t cnt) const override {
		if ( cnt >= quantity) return cnt * (1 - discount) * price;
		esle
			return cnt * price;
	}
};
}

#endif
