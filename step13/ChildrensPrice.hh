// ChildrensPrice.hh
#ifndef CHILDRENSPRICE_HH
#define CHILDRENSPRICE_HH
#include "Price.hh"

class ChildrensPrice : public Price {
public:
  virtual int getPriceCode() const;
};

#endif // CHILDRENSPRICE_HH
