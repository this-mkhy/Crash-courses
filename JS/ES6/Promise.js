let p = new Promise((resolve, reject) => {
  setTimeout(() => {
    console.log('promise done')
    resolve('Done')
    //reject('Is not done. Error')
  }, 2000)
})

//Nested promise
p.then((res) => {
  p.then(res2 => console.log(res2))
})

//Chaining promise 
p.then((res) => {
  return p
}).then(res2 => console.log(res2))

//Chaining promise 
//p.then((res) => p).then(res2 => console.log(res2))

//Chaining promise .. Best practice and more readable
p
  .then((res) => p)
  .then(res2 => console.log(res2))
  .catch((err1) => console.log('promise rejected 1', err1))
  .catch((err2) => console.log('promise rejected 2', err2))

