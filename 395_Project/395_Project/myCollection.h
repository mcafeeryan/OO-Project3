template <class T> class MyCollection
{
public:
	virtual T starting_element()
	{
		return *p_first;
	}
	virtual T last_element()
	{
		return *p_last;
	}
	virtual T value_at_position(int i) = 0;
	virtual void show_all() = 0; 
	
	T* p_first;
	T* p_last;

};