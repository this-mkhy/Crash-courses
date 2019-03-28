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

