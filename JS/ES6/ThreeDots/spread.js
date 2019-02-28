
//EX1 ... With array
const numbers = [1,2,3];
const newNumbers = [numbers,4,5];
console.log(newNumbers);	//[[1, 2, 3], 4, 5]

const spreadNumbers =[...numbers,4,5];
console.log(spreadNumbers);	//[1, 2, 3, 4, 5]

//------------------------------------
//EX2 .. With object
const oldPerson = {
  name : 'Mohamed'
  
};

const newPerson = {
  ...oldPerson,
  age: 23
}

console.log(newPerson);
