/*
Often we have to hand-pick some of the attributes from an JS object.
For instance, we have an array representation of a database table and  for some tasks, we only 
need to pick a few specified fields.
*/

const tableData = [
    {'id': 1, 'name': 'Zaedul Islam', 'email': 'z@gmail.com'},
    {'id': 2, 'name': 'Nabil Hasan', 'email': 'n@gmail.com'},
    {'id': 3, 'name': 'John Doe', 'email': 'j@gmail.com'}
]

function pickSelectedKeys(row, keysToBePicked){
	  return keysToBePicked.map(key => key in row ? {[key]: row[key]}: {})
      				.reduce((accumulator, currentValue) => Object.assign(accumulator, currentValue), {})
}

const result = [];
tableData.forEach(row => {
  result.push(pickSelectedKeys(row, [ 'email', 'name']));
});


/*
Firstly, for each row, we map a function over the keys that will return an array containing only the attribute 
pointed by the current key (or an empty object if there’s no such attribute in the object).

> Array [Object { email: "z@gmail.com" }, Object { name: "Zaedul Islam" }] 
> Array [Object { email: "n@gmail.com" }, Object { name: "Nabil Hasan" }] 
> Array [Object { email: "j@gmail.com" }, Object { name: "John Doe" }]

Finally, we reduce this array to a single-attribute object. 

> Object { email: "z@gmail.com", name: "Zaedul Islam" } 
> Object { email: "n@gmail.com", name: "Nabil Hasan" } 
> Object { email: "j@gmail.com", name: "John Doe" }

The 'result' array contains the following,
Array [Object { email: "z@gmail.com", name: "Zaedul Islam" }, 
Object { email: "n@gmail.com", name: "Nabil Hasan" }, 
Object { email: "j@gmail.com", name: "John Doe" }]
*/