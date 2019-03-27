const person1 = {
  name : 'Mohamed'
};

const person2 = person1;

console.log(person2);	

//----------------------
const person1 = {
  name : 'Mohamed'
};

const person2 = person1;

person1.name = 'Khaled';
console.log(person2);	

//-----------------------
const person1 = {
  name : 'Mohamed'
};

const person2 = person1;
console.log(person2);

person1.name = 'Khaled';
console.log(person2);

//-----------------------
const myInfo = { 
  name: 'Mohamed',
  age: 13
}  


const copy = myInfo;
copy.age = 50;
copy.name = 'Khaled';

console.log(myInfo);
console.log(copy);

//----------------------

const person1 = {
  name : 'Mohamed'
};

const person2 = {
  ...person1
}

console.log(person2);

person1.name = 'Khaled';
console.log(person2);
