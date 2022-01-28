/**
 * Let's say, we want to execute a series of functions where one function's output is another's input. 
 * Here, again reduce method comes to play. Using the reduce method, we can create a pipeline that will 
 * return us a final value given that an initial value is provided. We can later just modify functions in the pipeline
 * (if needed) or add/remove any number of functions.
 */


function increment(input) { return input + 1; }

function decrement(input) { return input - 1; }

function double(input) { return input * 2; }

function halve(input) { return input / 2; }

const pipeline = [increment, double, decrement];

const result = pipeline.reduce((accumulator, func) => {
    return func(accumulator);
}, 5);

// result: 11