//Normal JS
const my_name = 'Mohamed';
const message = 'My name is ' + my_name;
console.log(message);

//---------------------------
//Multi line strings
const fstName = 'Mohamed', lastName = 'Khaled';
const message = 'My name is ' + fstName + '.\n\n' + 'My last name is ' + lastName;
console.log(message);

//---------------------------
//Template literals
const my_name = 'Mohamed';
const message = `My name is ${my_name}`;
console.log(message);

//-----------------------------

const myName = {
  name: 'Mohamed',
  age: 23
};

const myFather = {
  name: 'Khaled'
}

//Normal Js
let message1 = 'My name is ' + myName.name + '. I am ' + myName.age + ' years old' + ' and my father name is ' + myFather.name;
console.log(message1);

//Template literals
let message2 = `My name is ${myName.name}. I am ${myName.age} years old and my father name is ${myFather.name}`;
console.log(message2);

//-----------------------------
//Multi line
const fstName = 'Mohamed', lastName = 'Khaled';
const message = `My name is ${fstName}, 

My last name is ${lastName}`;
console.log(message);

//-----------------------------
//Template Literals and Destructuring Arrays
const names = ['Ahmed', 'Mohamed', 'Ali', 'Sarah', 'Khaled', 'John', 'Adel', 'Yousef'];

const [,First, , ,Second, , , Third] = names;

let myName = `My name is ${First} ${Second} ${Third}`;
console.log(myName);

myName = `My name is
1. ${First}
2. ${Second}
3. ${Third}`;
console.log(myName);



