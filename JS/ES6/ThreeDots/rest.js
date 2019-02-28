//EX1:
const filterFunc1 = (...args1) => {
  return args1.filter(element => element === 1);
}

console.log(filterFunc1(1,2,7,1,3,8,9,1,2));	//[1, 1, 1]

//------------------
//EX2
const filterFunc2 = (...args2) => {
  return args2.filter(element => element === 1 || element ===2);
}

console.log(filterFunc2(1,2,7,1,3,8,9,1,2));	//[1, 2, 1, 1, 2]