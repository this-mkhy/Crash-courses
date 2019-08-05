//Traditional function
function printName(){
  let myName = "Mohamed"
  console.log(myName)
}

printName()

//------------------
//IIFE function with name
(function printName(){
  let myName = "Mohamed"
  console.log(myName)
})()

//------------------
//IIFE anonymous function
(function printName(){
  let myName = "Mohamed"
  console.log(myName)
})()

