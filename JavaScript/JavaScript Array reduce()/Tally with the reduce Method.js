/**
 * Creating a Tally with the reduce Method
 */

const fruitBasket = ['banana', 'cherry', 'orange', 'apple', 'cherry', 'orange', 'apple', 'banana', 'cherry', 'orange', 'fig'];

const fruitBasketFrequency = fruitBasket.reduce((tally, fruit) => {
    tally[fruit] = (tally[fruit] || 0) + 1;
    return tally;
}, {});

// fruitBasketFrequency: { banana: 2, cherry: 3, orange: 3, apple: 2, fig: 1 }