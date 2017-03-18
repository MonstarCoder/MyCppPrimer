#include "ex12_22.h"

ConstStrBlobPtr StrBlob::begin() const // should add const
{
	    return ConstStrBlobPtr(*this);
}
ConstStrBlobPtr StrBlob::end() const // should add const
{
	    return ConstStrBlobPtr(*this, data->size());
}
