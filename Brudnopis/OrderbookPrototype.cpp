#include "OrderbookPrototype.h"

using namespace Mike;

Mike::OrderbookPrototype::OrderbookPrototype()
{
}


Mike::OrderbookPrototype::~OrderbookPrototype()
{
}

long Mike::OrderbookPrototype::neworder()
{
	return 0;
}

void Mike::OrderbookPrototype::modifyorder(long orderID)
{
}

void Mike::OrderbookPrototype::cancelorder(long orderID)
{
}

void Mike::OrderbookPrototype::checkfills(int bid, int ask)
{
}

void Mike::OrderbookPrototype::cancelordersatprice(int price)
{
}

OrderStatus Mike::OrderbookPrototype::checkstatusoforder(long orderID)
{
	OrderStatus orderstatus = CANCELLED;
	return orderstatus;
}
