/**
 * It's also possible to initialize the accumulator variable by custom values.
 * Problem: Suppose, you have noted down the last six month's savings amount. Now, you want to 
 * calculate the total savings given than you took a loan of 5000 from a friend in the last year.
 */

// The ES5 version
const monthlySavings = [3000, 4000, 2000, 1500, 890, 6156]

const netHalfYearlySavings = monthlySavings.reduce(function(accumulator, currentValue){
	return accumulator + currentValue
}, -5000);


// The ES6 version
const monthlySavings = [3000, 4000, 2000, 1500, 890, 6156];

const netHalfYearlySavings = monthlySavings.reduce((accumulator, currentValue) => {
    return accumulator + currentValue
}, -5000);


// netHalfYearlySavings: 12546