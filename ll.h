class LL { //A single node in a linked list

	string Name;


	LL *prev = nullptr;
	LL *next = nullptr;
  public:
	//This is a default constructor, 1 parameter constructor, 2 param, 3 param, and 4 param in one!
	LL(string n = "", LL *new_prev = nullptr, LL *new_next = nullptr) {
		//YOU
		Name = n;


	}
	//***************Name*********************
	string get_name() {
		return Name;
	}
	void set_name(string n) {
		Name = n;
	}

	//***********************************************
	LL * get_next() {
		//YOU
		return next;

	}
	void set_next(LL * new_next) {
		//YOU
		next = new_next;
	}
	LL * get_prev() {
		//YOU
		return prev;
	}
	void set_prev(LL * new_prev) {
		//YOU
		prev = new_prev;
	}
};


class List {
	LL *head = nullptr;
	LL *tail = nullptr;



  public:
	int size = 0;
	int check() {
		return size;
	}

	List() {} //Set above
	~List() { //This should free all memory allocated in this list
		//YOU: one delete for every new
		if (head != NULL) {
			LL *temp = head;
			while (temp) {
				head = head->get_next();
				delete []temp;
				temp = head;
			}
		}

	}


	void insert_at_beginning(string Name) {
		LL *newNode = new LL(Name, NULL, head);
		if (size == 0) {
			head = newNode;
			tail = newNode;

		} else {
			head->set_prev(newNode);

			head = newNode;
		}

		size++;




	}


//yup
	string remove_card(string x) {


		LL *temp = head;
		while (temp) {


			if (temp->get_name() == x) {
				//empty


				if (temp == NULL) {
					cout << "Nothing deleted";
				}
				//1 node

				if (temp == head and temp == tail) {
					head = NULL;
					tail = NULL;
					delete temp;
					size--;

				}

				//head and tail

				if (temp == head) {
					return "hello";

					head = temp->get_next();
					head->set_prev(NULL);
					delete temp;
					size--;

				}

				else if (temp == tail) {
					tail = tail->get_prev();
					tail->set_next(NULL);
					delete temp;
					size--;
				} else {
					temp->get_next() -> set_prev(temp->get_prev());
					temp->get_prev() -> set_next(temp->get_next());

					delete temp;
					size--;

				}


			}
			temp = temp->get_next();


		}
	}


};
