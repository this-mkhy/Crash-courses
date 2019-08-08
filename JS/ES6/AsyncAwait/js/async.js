//async
//async with return ==> resolve our promise
async function myName(){
   return 'I am Mohamed'
}
myName().then( msg => console.log(msg))

//async with throw ==> reject our promise
async function isName(){
   throw 'Is not Mohamed'
}
isName().catch( msg => console.log(msg))
