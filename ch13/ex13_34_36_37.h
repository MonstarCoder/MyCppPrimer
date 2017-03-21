#ifndef CP5_ex13_34_36_37_h
#define CP5_ex13_34_36_37_h

#include <set>
#include <string>

class Folder;

class Message {
	friend void swap(Message&, Message&);
	friend void swap(Folder&, Folder&);
	friend class Folder;

public:
	explicit Message(const std::string& str = "" ) : contents(str) {}
	Message(const Message&);
	Message& operator=(const Message&);
	~Message();
	void save(Folder&);
	void remove(Folder&);
	void print_debug();

private:
	std::string contents;
	std::set<Folder*> folders;

	void add_to_Folder(const Message&);
	void remove_from_Folders();

	void addFldr(Folder* f) { folders.insert(f);}
	void rmFldr(Folder* f) { folders.erase(f);}
};

void swap(Message&, Message&);

class Folder {
	friend void swap(Message&, Message&);
	friend void swap(Folder&, Folder&);
	friend class Message;

public:
	Folder() = default;
	Folder(const Folder&);
	Folder& operator=(const Folder&);
	~Folder();

	void print_debug();

private:
	std::set<Message*> msgs;

	void add_to_Messages(const Folder&);
	void remove_from_Message();

	void addMsg(Message* m) { msgs.insert(m);}
	void remMsg(Message* m) { msgs.erase(m);}
};

void swao(Folder&, Folder&);

#endif
