/// STL std::vector
vector<int> v, t;
vector<double> water;
vector<long long> balance;
vector<char> ch;
vector<string> name;
/* Here "day" is a custom data type*/
vector<day> diary;
t = v;


Iterators:
begin							Return iterator to beginning (public member function )
end								Return iterator to end (public member function )
Example:
vector<int>::iterator it = v.begin();
vector<int>::iterator it = v.end();


Capacity:
1. size 		(Returns the number of elements in the vector.)
Example:
v.size();

2. max_size	(Returns the maximum number of elements that the vector can hold.)
Example:
v.max_size();

3. resize		(Resizes the container so that it contains n elements.)
Example:
v.resize(SIZE, false);		/// Initializes with 0.
v.resize(SIZE, true);		/// Initializes with 1.
v.resize(SIZE, x)				/// x = any value.
v.resize(11);					   /// Change the size of the vector to 11.

4. capacity	(Returns the size of the storage space currently allocated for the vector,
						expressed in terms of elements.)
Example:
v.capacity();

5. empty		(Returns whether the vector is empty (i.e. whether its size is 0).
Example:
if(!v.empty())
	Do Something


Element access:
1. operator[]	(Returns a reference to the element at position "n" in the vector container.)
Example:
cout << v[n] << endl;
printf("%d\n", v[n]);

2. at		(Returns a reference to the element at position n in the vector.)
Example:
v.at(n) = 5;

3. front		(Returns a reference to the first element in the vector.)
4. back		(Returns a reference to the last element in the vector.)
Example:
v.front() = v.back();


Modifiers:
1. assign				Assign vector content (public member function )
Example:
2. push_back	(Adds a new element at the end of the vector, after its current last element. The
								content of val is copied (or moved) to the new element.)
Example:
v.push_back(100);

3. pop_back	(Removes the last element in the vector, effectively reducing the container
								size by one.)
Example:
v.pop_back();

4. insert	(The vector is extended by inserting new elements before the element at the
					specified position, effectively increasing the container size by the number of
					elements inserted.)
Example:


5. erase	(Removes from the vector either a single element (position) or a range of elements
						([first,last)).)
Example:
/// erase the 6th element
v.erase(v.begin() + 5);
/// erase the first 3 elements:
v.erase(v.begin(), v.begin() + 3);

6. swap	(Exchanges the content of the container by the content of x, which is another
						vector object of the same type. Sizes may differ.)
Example:
vector<int, int> v1, v2;
v1.swap(v2);

7. clear		(Removes all elements from the vector (which are destroyed), leaving the container
						with a size of 0.)
Example:
v.clear();
