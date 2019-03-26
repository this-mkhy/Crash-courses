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
