
//dynamically allocating an array:
int how_many = 0;
cin >> how_many;
char * charr = new char[how_many];
//use it and delete if we need the memory:
delete[] charr;


//converting from int to char *
std::stringstream buffer;
buffer << window->m_count; //window->m_count defined somewhere else (type - int)
						   //buffer.str(); // .str() convert what's in buffer to string
						   //buffer.str().c_str(); // .c_str() converts std::string to char*
window->m_win_timer->label(buffer.str().c_str());