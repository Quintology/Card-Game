#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std; //Note: This is a bad idea in header files!


class LL { //A single node in a linked list
	string Card;
	int Damage;
	int Health;
	LL *prev = nullptr;
	LL *next = nullptr;
	public:
	//This is a default constructor, 1 parameter constructor, 2 param, 3 param, and 4 param in one!
	LL(string s = "", int d=0, int h=0, LL *new_prev = nullptr, LL *new_next = nullptr) {
	
	Card = s;
	Damage= d;
	Health = h;
	prev = new_prev;
	next=new_next;
 	



	}
	
	string get_card() {
		//YOU
	return Card;
	}
	void set_card(string s) { 
		//YOU
	Card = s;
	}

	int get_damage(){
	return Damage;
	}
	void set_damage(int d) { 
	Damage = d;
	}

	int get_health(){
	return Health;
	}
	void set_health(int h) { 
	Health = h;
	}
	





	LL *get_next() { 
		//YOU
	return next;

	}
	void set_next(LL *new_next) { 
		//YOU
	next= new_next; 
	}
	LL *get_prev() { 
		//YOU
	return prev;
	}
	void set_prev(LL *new_prev) { 
		//YOU
	prev=new_prev;
	}
};



class List {
	LL *head = nullptr;
	LL *tail = nullptr;
	int size = 0;
	public:
	List() {} //Set above
	~List() { //This should free all memory allocated in this list
		//YOU: one delete for every new
	if(head !=NULL){
		LL *temp=head;
		while(temp){
		head= head->get_next();
		delete temp;
		temp=head;
}
}

	}
	int get_size() {
		//YOU
	return size;
	}
	//No set_size function needed. Why? Because it will only be set through insert/delete
	//No get/set methods for head and tail. Why? Because main doesn't need to know anything about them. Main will just call insert and delete

	string print_list() {
		LL *temp = head;
		ostringstream ss; //This lets us write to a string like we do to cout
		if (!temp) {
			ss << "Empty List\n";
			return ss.str(); //Converts the stringstream to a string so we can return it
		}
		while (temp) {
			ss << "" << left << setw(12) << temp->get_card() << endl;
			temp = temp->get_next();
		}
		return ss.str();
	}

	string insert_at_beginning(string Card, int Damage, int Health) {
		string retval = "You have place a(n) " + Card + " on the field.";
		//YOU: Write code to make a new node and insert at the head
		LL *newNode = new LL(Card, Damage, Health, NULL, head);
		if(size<0)die();
		if(size==0 and (head or tail))die();
		if(size==0){
		head=newNode;
		tail=newNode;
}
		else{
		head->set_prev(newNode);

		head =newNode;
}
		size++;

		//Make sure size gets updated when you add to the list
		return retval;
	}
	string insert_at_end(string Card, int Damage, int Health) {
		string retval = Card + " inserted";
		//YOU

		LL *newNode = new LL(Card, Damage, Health, tail, NULL);
		if(size==0){
		head= newNode;
		tail = newNode;
}
	else{
		tail->set_next(newNode);
		tail= newNode;
}
		size++;
		return retval;
	}


	string card_stats(string CS){

	LL *temp = head;
		ostringstream cs;
	while(temp){
	if(temp->get_card() == CS){
	cs << "card: " << left << setw(12) << temp->get_card() << endl;
	cs << "Damage: " << left << setw(12) << temp->get_damage() << endl;
	cs << "Health: " << left << setw(12) << temp->get_health() << endl;
}
	temp=temp->get_next();

	}
return cs.str();

}
	
	int find_damage(string CD){
	int D = 0;
	LL *temp = head;
	while(temp){
	if(temp->get_card() == CD){
	D = temp-> get_damage();
}
	temp=temp->get_next();

	}
return D;
}

int find_health(string CH){
	int H;
	LL *temp = head;
	while(temp){
	if(temp->get_card() == CH){
	H = temp-> get_health();
}
	temp=temp->get_next();

	}
return H;
}


void set_new_health(string csh, int sh){
	int SH;
	int nh;
	LL *temp = head;
	while(temp){
	if(temp->get_card() == csh){
	nh = temp->get_health() - sh;
	temp-> set_health(nh);
}
	temp=temp->get_next();

	}
//if(temp->get_health()<1){
//return false;
//}

}





	







	//This function will delete a single node from the LL with a cost <= amount
	//amount_out will hold how much change was left over after the delete was done
	//It will return sentence containing "X deleted\n" (if node X was deleted) or "Nothing deleted"
	string delete_card(string x) {
		string s; //Will be set to the province name deleted



		//YOU: First, handle the list being empty
		LL *temp= head;
while(temp){
s = temp->get_card();
if(temp->get_card() == x){
		if(temp ==NULL ){
		return "Nothing deleted";
//	cout<<"Test 0"<<endl;
}

		//YOU: Second, handle there being one element in the list

	 if(temp ==head and temp==tail){

	head=NULL;
	tail=NULL;
	//amount_out = amount - temp->get_cost();
        delete temp;
        size--;
        return s + " deleted";

	//s = temp->get_province();
//cout<<"Test 1"<<endl;
}

		//YOU: Third, handle deleting from the head or tail 
	  if( temp== head){


		head=temp->get_next();
		head->set_prev(NULL);
	//	amount_out = amount - temp->get_cost();
	        delete temp;
       		size--;
        	return s + " deleted";


//cout<<"Test 2"<<endl;

}
		//YOU: Handle deleting from the middle of the list

	else if(temp==tail){
	tail= tail->get_prev();
	tail->set_next(NULL);
//	amount_out = amount - temp->get_cost();
        delete temp;
        size--;
        return s + " deleted";
//cout<<"Test 3"<<endl;

}

	 else{



	temp->get_next() -> set_prev(temp->get_prev());
	temp->get_prev() -> set_next(temp->get_next());
//	amount_out = amount - temp->get_cost();
        delete temp;
        size--;
        return s + " deleted";
//cout<<"Test 4"<<endl;


}



}
temp=temp->get_next();
//cout<<"error"<<endl;
//cout<<"error 2"<<endl;
}

		//Helpful hints - keep track of all of your invariants:
			//1. Size should always be updated when you insert or delete
			//2. All pointers to next and previous from neighbors should be updated if you delete a node in the middle
			//3. If you delete the data at head, head will need to move to head->get_next()
			//4. If you delete from the tail, tail will need to move backwards to tail->get_prev()
			//Don't use pointers to things after you've deleted them
}
};
