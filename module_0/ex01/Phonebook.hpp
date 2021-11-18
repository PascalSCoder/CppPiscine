#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <Contact.hpp>
#define BUFFSIZE 1024

class	Phonebook
{
public:
	Phonebook();
	void Add();
	void Search() const;
	~Phonebook();

private:
	Contact _contacts[8];
	int _head;
};

#endif
