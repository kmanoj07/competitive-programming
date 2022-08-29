console.log('hello')

//data type in js
//string
console.log(typeof('hello'))
console.log(typeof('Manoj'))
//number
console.log(typeof(25))
console.log(typeof(290.09090909))
//boolean
console.log(typeof(true))
//undefined
let myvar;
console.log(typeof(myvar))

//type of declartion variable type
//on the basis of scopt
//let

// const
const myVariable = "Mathmatics"
console.log(typeof(myVariable))

//var


//string  methods

//length  - return the number of character to the string
console.log(myVariable.length);
console.log('Every good boy has some bad'.length);

//charAt() -- return the char at the passed pos
console.log(myVariable.charAt(6))

//indexof -- firt occurence of the char in the string
console.log(myVariable.indexOf('Math'))

//slice -- slice the string from passed pos 
console.log(myVariable.slice(3));
console.log(myVariable.slice(0,3));
console.log(myVariable.slice(-2)) //return the slice char from the back

console.log(myVariable.slice(5,5)); // when the start index and last index are equal nothing is returned

//split -- return the array of charters after spliting the strng
console.log(myVariable.split(""));
const splittedChar = myVariable.split("");
console.log(typeof(splittedChar)) // array is an object in js



console.log("John, Doe, work".split(","));









