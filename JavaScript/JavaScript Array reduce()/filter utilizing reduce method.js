/**
 * Problem: Rewrite 'filter' as 'reduce' method
 */

const avengers = [
    { title: 'captain america', combatScore: 95 },
    { title: 'iron man', combatScore: 94 },
    { title: 'doctor strange', combatScore: 80 }
]

const worthyAvengers = avengers.reduce((accumulator, currentAvenger) => {
    if (currentAvenger.combatScore > 90) {
        accumulator.push(currentAvenger);
    }

    return accumulator;
}, [])
