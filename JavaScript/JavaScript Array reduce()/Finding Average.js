// The ES5 version of the Reduce Method In JavaScript​
const dollars = [29.76, 41.85, 46.5];

const average = dollars.reduce(function(accumulator, currentValue, currentIndex, array) {
	accumulator += currentValue;
	if(currentIndex === array.length - 1){
		return  accumulator / array.length;
	} else {
		return accumulator;
	}
});



// The ES6 version of the Reduce Method In JavaScript​
const dollars = [29.76, 41.85, 46.5];

const average = dollars.reduce((accumulator, currentValue, currentIndex, array) => {
	accumulator += currentValue;
	if(currentIndex === array.length - 1){
		return  accumulator / array.length;
	} else {
		return accumulator;
	}
});