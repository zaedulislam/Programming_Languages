1. /// STL std::vector
Baki ase vector r
// 1-D vector
vector< int > v, t;
vector< double > water;
vector< long long > balance;
vector< char > characters;
vector< string> name;
vector< day > diary;
t = v;
v.push_back(100);
v.clear();
v.size();
v.resize(SIZE, false);		// Initializes with 0
v.resize(SIZE, true);		// Initializes with 1
v.resize(SIZE, x)				// x = any value
v.erase(v.begin(), v.begin() + 1); // Removes the first element
cout << v[I] << endl;
printf("%d\n", v[I]);

// 2-D vector
vector< vector< int > > v;
vector< int > v[SIZE];
v[I].push_back(5);
v.resize(500);
for(I = 0; I < n; I++)
	v[I].clear();
for(I = 0; I < SIZE; I++)
	v[I].resize(SIZE, false);		// Initializes with 0

// 3 -D vector
vector< vector< vector< int > > > v; 	// 3 dimensional

3. STL std::stack
stack< int > S;
S.push(x);	 		// Inserts a new element at the top of the stack, above its current top element.
S.pop(); 			// Removes the element on top of the stack, effectively reducing its size by one.
S.top(); 			// Returns a reference to the top element in the stack.
S.size(); 			// Returns the number of elements in the stack.
while(!S.empty())	// Returns whether the stack is empty: i.e. whether its size is zero.
	S.pop();

4. STL std::queue
queue< int > q;
q.push(x);	  	// Inserts a new element at the top of the queue, above its current top element.
q.pop(); 		// Removes the element on top of the queue, effectively reducing its size by one.
q.front(); 		// Returns a reference to the next element in the queue.
S.size(); 		// Returns the number of elements in the queue.
while(!S.empty())	// Returns whether the queue is empty: i.e. whether its size is zero.
	S.pop();

5. STL std::priority_queue
priority_queue< int > q;
q.push( 10230 ); 		// inserting 10230
while( !q.empty() )
{
	cout << q.top() << endl; 	// printing the top
     q.pop(); 								// removing that one
}

# Min-heap Priority Queue
// Create a priority queue of int
// arranges elements in ascending order
priority_queue<int, vector<int>, greater<int>> numbers;

6. STL std::iterator
vector< int > :: iterator it;
vector< double > :: iterator it;
vector< int > v;
v.push_back( 1 );
v.push_back( 2 );
for( it = v.begin(); it < v.end(); it++ )
	printf("%d\n", *it);



STL std::map
map<string, int> mymap;
map<int, int> mymap;
mymap.insert(make_pair(5, 25));
pair <int, int> pii;
pii.first = 5;
pii.second = 25;
mymap[pii(x, y)]++;
mymap.insert(pii);
if(mymap[str] == 0)
	mymap[str] = x;
mymap[x]++;
mymap.size();
mymap.clear();
if(mymap.empty())
	cout << "Empty\n";
if(mymap.find(str) != mymap.end())
	cout << mymap.find(str) -> second << NL;
map<string, int>::iterator it = mymap.end();
it--;
while(it != mymap.begin())
{
	cout << it -> first << " " << it -> second << NL;
	it++;
}
 while (!mymap.empty())
{
    cout << mymap.begin()->first << " => " << mymap.begin()->second << '\n';
    mymap.erase(mymap.begin());
  }

8. STL std::set
// unordered_set does run faster than set, which in turn validates the advantage over time complexity.
#include<unordered_set>
unordered_set< int > si;
set< int > si;
set< pii > si;
si.insert(x);
si.insert(pii(x, y));
si.size();
si.erase(x);
si.count(x);
if(si.find(*it + K) != si.end())
	cnt++;
if(si.find(pii(x, y)) != si.end())		// An iterator to the element, if "val" is found,
	cout << "Found\n";					// or set::end otherwise
it = si.begin();
it = si.end();
it++;
while(!si.empty())
{
	cout << *si.begin();
	si.erase(si.begin());
}
set< int > :: iterator it;
for(it = s.begin(); it != s.end(); it++) 
        cout << *it << endl;




// C++ structure
struct S
{
    int floor;
    int time;
};
S ar[SIZE];

bool compare(const S &a, const S &b)
{
    if(a.floor < b.floor)
        return false;
    return true;
}

 for(I = 0; I < n; I++)
        cin >> ar[I].floor >> ar[I].time;

sort(ar, ar + n, compare);

//Sort in Asending Order
stable_sort(ar, ar + n);	// Preserve the relative order of the elements with equivalent values.
sort(ar, ar + n);
sort(ar, ar + n, compare);
sort(ar + 2, ar + n);		// Without changing the first two element
sort(vec.begin(), vec.end());
sort(vec.begin() + 2, vec.end());
sort(vec.begin(), vec.end(), compare);

//Sort in Descending Order
sort(ar, ar + n, greater<int>());	// Header: <algorithm>, <functional>
reverse(ar, ar + n);
reverse(vec.begin(), vec.end());

//String 
"C - Like String"
sf("%s", s);

// Line Input
scanf("%d%c", &tcases, &iFalse);
gets(s) 	// Reads characters from the standard input (stdin) and stores them 
					// as a C string into str until a newline character or the end-of-file is reached.

scanf("%d %c", &tcases, &iFalse);
fgets(s, SIZE, stdin)
len = strlen(s);
if(s[len - 1] != '\0')
	s[len - 1] = '\0';
	len--;

scanf("%d %c", &tcases, &iFalse);
cin.getline(s, SIZE)

//EOF
while(gets(s)) {}
while(fgets(s, SIZE, stdin) != NULL)
{
	len = strlen(s);
	if(s[len - 1] != '\0')
		s[len - 1] = '\0';
	len--;
}

while(cin.getline(s, SIZE)) {}

"C++ String variable"  
cin >> S

//Line Input
cin >> n;
cin.ignore();
getline(cin, S);

// EOF
while(getline(cin, s)){}

cout << fixed << setprecision(2) << sum / (double)cnt << NL;
