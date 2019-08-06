function printName(){
   var name="Mohamed";
   //name="Mohamed Khaled";
   function print() {
      console.log(name);
   }

   closure(print);
}

function closure(func)
{    
    func();
}

printName();

//------------------------------

function outer(){
  let x = 4
  function inner (){
    let y = x
    y = 16
    console.log(x)
    console.log(x*2)
    console.log(y)
  }

  closure(inner);

}

function closure(inn)
{    
    inn();
}

outer()

//------------------------------

function outer(){
  let x = 4
  return function (){
    let y = x
    y = 16
    return [x,x*2,y]
  }
}

//IIFE invoke
console.log(outer()());

//Traditional way
//let res = outer()
//console.log(res());

//------------------------------

function counter(n){
  return function (){
    return n++
  }
}

let res = counter(1)
console.log(res());
console.log(res());
console.log(res());
console.log(res());
console.log(res());

//------------------------------
//Problem
//Isn't closure
/*

for(var i=0;i<10;i++){
    setTimeout(function(){
        console.log(i);
    },100);

}

*/

//------------------------------
//First solution
//Isn't closure
/*
for(let i=0;i<10;i++){
    setTimeout(function(){
        console.log(i);
    },100);
}
*/

//------------------------------
//Second solution
//Using closure

function closure (index){
    setTimeout(function(){
        console.log(index)
    },100)
}

for(var i=0;i<10;i++){

    (closure)(i)
}
