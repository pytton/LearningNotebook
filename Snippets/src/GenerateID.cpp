int generateID()
{
	static int s_itemID = 0;
	return s_itemID++;
}