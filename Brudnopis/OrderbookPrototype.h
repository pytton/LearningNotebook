#pragma once

enum MikeOrderType;

namespace Mike {

	enum OrderStatus {
		OPEN,
		FILLED,
		PARTFILL,
		CANCELLED
	};

	class OrderbookPrototype
	{
	public:
		OrderbookPrototype();
		~OrderbookPrototype();
		long neworder();//creates a new order and returns the orderID of the new order
		void modifyorder(long orderID);//modifies order pointed to by orderID
		void cancelorder(long orderID);//cancels order pointed by orderID
		void checkfills(int bid, int ask);//checks fills of open orders
		void cancelordersatprice(int price);//checks all open orders at price and cancels them
		OrderStatus checkstatusoforder(long orderID);//returns an enum: open, filled, partial fill, cancelled
		long totOrdAmtatPrice();

	private:
		

	};

	enum MikeOrderType
	{
		CXLORDER,
		BUYLMT,
		BUYSTP,
		SELLLMT,
		SELLSTP,
	};

}