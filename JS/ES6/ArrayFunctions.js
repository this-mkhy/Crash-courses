//Array functions: It aren't ES6 but normal js

let fruits = ["Mohamed", "Khaled", "Yousef", "Mohamed", "Ali"];
let energy1 = fruits.join(" ");
let energy2 = fruits.join(" and ");
console.log(energy1);
console.log(energy2);

//-------------------

let names = ["Mohamed", "Khaled", "Yousef", "Mohamed", "Ali"];
names.splice(2, 1);
console.log(names);

names.splice(2, 3, "Computer", "Science");
console.log(names);

//-------------------

const numbers = [1,2,3];
const doubleNumbers = numbers.map((num) => {
  return num*2;
});
   
console.log(numbers);		    //[1, 2, 3]
console.log(doubleNumbers);	//[2, 4, 6]

//-------------------

const myName = ["Mohamed", "Khaled"];
const myInfo1 = ["Computer", "Science", "Student"];
const myInfo2 = ["Front End Developer"];

const concatTwoArray = (arr1,arr2,arr3) => arr1.concat(arr2,arr3);
console.log(concatTwoArray(myName,myInfo1,myInfo2));

