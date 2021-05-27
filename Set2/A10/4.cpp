template<class T>
class LinkedList{
	int data; // Not usuable, just an extra field
	LinkedList *next;
public:
	T pop(){
		LinkedList ret = *next;
		delete next;
		return ret;
	}
	void insert(T t){
		*next = t;
	}
	T Next(){
		return *next;
	}
};
