class Human{
      gender = 'male';

      printGender = () => {
        console.log(this.gender);
      }
} 

class Person extends Human{
      name = 'Mohamed';
      gender = 'Female';

      printMyName = () => {
		console.log(this.name);
      }
}


const person = new Person();
person.printMyName();	//"Mohamed"
person.printGender();	//"Female"