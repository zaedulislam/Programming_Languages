/**
 * Example 1
  * An easiest way to flatten any array of arrays into one linear array is just to 
  * use reduce() and concat() method  
 */

const data = [[7, 12, 8], [1, 2, 4], [5, 3, 6]];

const flattenedData = data.reduce((accumulator, currentValue) => {
    return accumulator.concat(currentValue);
}, []);

//  flattenedData: [7, 12, 8, 1, 2, 4, 5, 3, 6]


/**
 * Example 2.1
 * Even more complex type of data
 * We only want all the colors in a linear collection
 */

const data = [
    { a: 'happy', b: 'robin', color: ['blue', 'green'] },
    { a: 'tired', b: 'panther', color: ['green', 'black', 'orange', 'blue'] },
    { a: 'sad', b: 'goldfish', color: ['green', 'red'] }
];

const flattenedData = data.reduce((accumulator, currentObject) => {
    return accumulator.concat(currentObject.color);
}, []);



/**
 * We can also traverse individual object's array using forEach(...)
 */

const data = [
    { a: 'happy', b: 'robin', color: ['blue', 'green'] },
    { a: 'tired', b: 'panther', color: ['green', 'black', 'orange', 'blue'] },
    { a: 'sad', b: 'goldfish', color: ['green', 'red'] }
];

const flattenedData = data.reduce((accumulator, currentObject) => {
    currentObject.color.forEach((c) => {
        accumulator.push(c);
    })
    return accumulator;
}, []);

/**
 * Both approach will give us the same result in same order
 * flattenedData: ["blue", "green", "green", "black", "orange", "blue", "green", "red"]
 */


/**
 * Example 3
 * We can also filter out the repeating values inside the forEach() 
 */

const data = [
    { a: 'happy', b: 'robin', color: ['blue', 'green'] },
    { a: 'tired', b: 'panther', color: ['green', 'black', 'orange', 'blue'] },
    { a: 'sad', b: 'goldfish', color: ['green', 'red'] }
];

const flattenedUniqueData = data.reduce((accumulator, currentObject) => {
    currentObject.color.forEach((c) => {
        if (accumulator.indexOf(c) === -1) {
            accumulator.push(c);
        }
    })
    return accumulator;
}, []);

/**
 * flattenedUniqueData: ["blue", "green", "black", "orange", "red"]
 */
