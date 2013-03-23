#include <iostream>
#include <list>
using namespace std;


template <class T> class MyList
{
private:
	list<T> lst;

public:
	typedef typename list<T>::iterator iterator;

	//constructors
	MyList() {}
	MyList(int n, T val) {
		lst = list<T>(n,val);
	}

	list<T> lst() {
		return lst;
	}

	MyList& operator= (const MyList& x);
	
	// iterator functions
	iterator begin() { return lst.begin(); }
	iterator end() { return lst.end(); }
	iterator rbegin() { return lst.rbegin(); }
	iterator rend() { return lst.rend(); }
	
	//basic list functions
	bool empty() { return lst.empty(); }
	list::size_type size() { return lst.size(); }
	list::size_type max_size() { return lst.max_size(); }
	list::reference front() { return lst.front(); }
	list::reference back() { return lst.back(); }
	void assign (size_type n, const list::value_type& val) { lst.assign(n, val); }
	template <class InputIterator> void assign (InputIterator first, InputIterator last) { lst.assign(first, last); }
	void push_front (const list::value_type& val) { lst.push_front(val); }
	void pop_front() { lst.pop_front(); }
	void push_back (const value_type& val) { lst.push_back(val); }
	void pop_back() { lst.pop_back(); }
	iterator insert (iterator position, const value_type& val) { return lst.insert(position, val); }
	void insert (iterator position, size_type n, const value_type& val) { lst.insert(position, n, val); }
	template <class InputIterator> void insert (iterator position, InputIterator first, InputIterator last) { lst.insert(position,first,last);}
	iterator erase (iterator position) { return lst.erase(position); }
	iterator erase (iterator first, iterator last) { return lst.erase(first, last); }
	void swap (MyList& x) { lst.swap(x.lst()); }
	void resize (size_type n, list::value_type val = lst.value_type()) { lst.resize(n, val); }
	void clear() { lst.clear(); }
	void splice (iterator position, MyList& x) { lst.splice(position, x); }
	void splice (iterator position, MyList& x, iterator i) { lst.splice(position,x,i); }
	void splice (iterator position, MyList& x, iterator first, iterator last) { lst.splice(position,x,first,last); }
	void remove (const list::value_type& val) { lst.remove(val); }
	template <class Predicate> void remove_if (Predicate pred) { lst.remove_if(pred); }
	void unique() { lst.unique(); }
	template <class BinaryPredicate> void unique (BinaryPredicate binary_pred) { lst.unique(binary_pred); }
	void merge (MyList& x) { lst.merge(x.lst()); }
	template <class Compare> void merge (MyList& x, Compare comp) { lst.merge(x.lst(),comp); }
	void sort() { lst.sort(); }
	template <class Compare> void sort (Compare comp) { lst.sort(comp); }
	void reverse() { lst.reverse(); }


};