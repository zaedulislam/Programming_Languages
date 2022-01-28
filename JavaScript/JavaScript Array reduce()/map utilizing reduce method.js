/**
 * It's also possible to implement 'map' functionality using 'reduce' method
 * Problem: Rewrite 'map' as 'reduce' method. map the current array of contains avengers to a new one with upper case letters
 */

const avengers = ['captain america', 'iron man', 'doctor strange']

const poweredAvengers = avengers.reduce((accumulator, currentAvenger) => {
    accumulator.push(currentAvenger.toUpperCase());
    return accumulator;
}, [])


// poweredAvengers: ["CAPTAIN AMERICA", "IRON MAN", "DOCTOR STRANGE"]