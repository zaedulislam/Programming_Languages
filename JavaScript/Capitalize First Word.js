/**
A shortcut way to capitalize all characters of the first word of a sentence
We'll make use of the 'Spread Operator' and 'Destructuring Assignment' to implement the task
*/

function upperFirstWord(sentence){
    const [firstWord, ...otherWords] = sentence.split(' ');
    return [firstWord.toUpperCase(), ...otherWords].join(' ');
}

console.log(upperFirstWord('Funcions Accpting Callback Functions'));
