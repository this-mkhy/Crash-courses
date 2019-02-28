//array example:
[a,b] = ['Mohamed','Khaled']
console.log(a);	//Mohamed
console.log(b);	//Khaled
//-------------------------------------

//object example:
myInfo1 = {name:'Mohamed'};
console.log(myInfo1.name);	//Mohamed
console.log(myInfo1.age);	//undefined

//object example:
myInfo2 = {name:'Mohamed', age:23};
console.log(myInfo2.name);	//Mohamed
console.log(myInfo2.age);	//23

//-------------------------------------

//EX1
const numbers = [1,2,3];
[num1,num2] = numbers;

console.log(num1,num2);
//1
//2
//-------------------------------------

//EX2
const numbers = [1,2,3];
[num1, ,num3] = numbers;

console.log(num1,num3);
//1
//3
//-------------------------------------

//EX3
const {name} = {name:'Mohamed', age:23}
console.log(name);	//Mohamed
console.log(age);	//undefined
//-------------------------------------

//EX4
const {name,age} = {name:'Mohamed', age:23}
console.log(name);	//Mohamed
console.log(age);	//23