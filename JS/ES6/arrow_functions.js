//A normal javascript function of course looks like this:
function printName(name){
  console.log(name);
}

printName();		      //undefined	
printName('Mohamed');	  //Mohamed
//--------------
//But Arrow functions:
const printName = (name) => {
  console.log(name);
}

printName();	           //undefined
printName('Mohamed');      //Mohamed
//--------------
//There some alternatives to this syntax:
//If we have one argument
const printName = name => {
  console.log(name);
}

printName();	
printName('Mohamed');
//--------------
//If we have a function which receives no arguments, we need to pass an empty pair of parentheses
const printName = () => {
  console.log('Mohamed');
}

printName();	           //Mohamed
//--------------
//If we have a function which receives more than one argument, we need parentheses
const printName = (name1, name2, age) => {
  console.log(name1, name2, age);
}

printName('Mohamed', 'Khaled', 23);	
//Mohamed
//Khaled
//23
//--------------
//Also we can update our function body
const mul = (number) => {
   return number * 5;
}

console.log (mul(3));		//15
//--------------
//We can update this function and remove braces and retrun keyword
const mul = (number) => number * 5;
console.log (mul(3));	
//--------------
//We can update also
const mul = number => number * 5;
console.log (mul(3));		//15