//for loop
const numbers = [1, 2, 3, 4, 5];

for (let i = 0; i < numbers.length; i++) {
  console.log(numbers[i]);
}

//------------------------------
//for..in
const numbers = [1, 2, 3, 4, 5];

for (const index in numbers) {
  console.log(numbers[index]);
}

//------------------------------
//forEach
const numbers = ['One', 'Two', 'Three', 'Four'];
numbers.forEach(function(num) {
  console.log(num);
});

//------------------------------
//for..of
const numbers = [1, 2, 3, 4, 5];

for (const num of numbers) {
  console.log(num);
}

//------------------------------
//Print even numbers
const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9];

for (const num of numbers) {
  if (num % 2 === 1) {
    continue;
  }
  console.log(num);
}

//------------------------------
//Loop and capitalizes the first letter of the day
const days = ['sunday', 'monday', 'tuesday', 'wednesday', 'thursday', 'friday', 'saturday'];

const capitalize = st => st.charAt(0).toUpperCase().concat(st.slice(1));

for (const day of days) {
  console.log(capitalize(day));
}
