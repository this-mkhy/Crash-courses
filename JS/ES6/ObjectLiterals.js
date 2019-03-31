//Normal JS Object
let first = 'Mohamed';
let second = 'Khaled';
let third = 'Yousef';

const myName = {
  first: first,
  second: second,
  third: third
};

console.log(myName);

//-----------------------
//Object literal shorthand for initializing properties
let first = 'Mohamed';
let second = 'Khaled';
let third = 'Yousef';

const myName = {
  first,
  second,
  third
};

console.log(myName);

//-----------------------
//Normal JS methods in object 
let first = 'Mohamed';
let second = 'Khaled';
let third = 'Yousef';

let fs = 5, sec = 7;

const myName = {
  first: first,
  second: second,
  third: third,
  
  fs: fs,
  sec: sec,

  writeMyName: function(x,y,z) {
      return first.concat(second,third);
  },
  
  mul: function(a,b) {
      return fs*sec;
  }

};

console.log(myName.writeMyName());
console.log(myName.mul());

//-----------------------
//Object literal shorthand for writing methods
let first = 'Mohamed';
let second = 'Khaled';
let third = 'Yousef';

let fs = 5, sec = 7;
const myName = {
  first: first,
  second: second,
  third: third,
  
  fs: fs,
  sec: sec,
  writeMyName(x,y,z) {
      return first.concat(second,third);
  },
  
  mul(a,b) {
      return fs*sec;
  }

};

console.log(myName.writeMyName());
console.log(myName.mul());
