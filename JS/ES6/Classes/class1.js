//EX1
//Create class
class Person{
	name = 'Mohamed';
    mul = number => number * 5;
}

//Use class, use new keyword
const myPerson = new Person();

console.log(myPerson.name);	//"Mohamed"
console.log(myPerson.mul(3));	//15

//--------------------------------------
//EX2
class Person1{
	//Default function method
	constructor(){
		this.name = 'Mohamed';
	}

	printMyName(){
		console.log(this.name);
	}
}

//Create an instance or object
const person1 = new Person1();
person1.printMyName();	//"Mohamed"

//-------------------------------------
//EX3 -- If we want to make an inheritance
class Human2{
	constructor(){
		this.gender = 'male';
	}

	printGender(){
		console.log(this.gender);
	}
}

class Person2 extends Human2{
	constructor(){
		//super: it's a keyword and it simply executes the parent constructor
		super();	
        this.name = 'Mohamed';
	}

	printMyName(){
		console.log(this.name);
	}
}

const person2 = new Person2();
person2.printMyName();	//"Mohamed"
person2.printGender();	//"male"

//--------------------------------------
//EX4 --- Important case
class Human3{
	constructor(){
		this.gender = 'male';
		this.age = 23;
	}

	printGender(){
		console.log(this.gender);
	}
	printAge(){
		console.log(this.age);
	}  
}

class Person3 extends Human3{
	constructor(){
      super();
      this.name = 'Mohamed';
      this.gender = 'Female';
      this.age = 35;
	}

	printMyName(){
		console.log(this.name);
	}
}

const person3 = new Person3();
person3.printMyName();	//"Mohamed"
person3.printGender();	//"Female"
person3.printAge(); 	//23
