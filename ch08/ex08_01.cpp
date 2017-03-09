istream& func(istream &is)
{
	std::string buf;
	while (is >> buf)
		std::cout << bug << std::endl;
	is.clear();
	return is;
}
