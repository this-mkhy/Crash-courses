//async and await
let myProm1 = new Promise((resolve, reject) => {
  setTimeout(() => {
    console.log('promise done')
    //resolve('Done')
    reject('error 404')
  }, 4000)
})

async function myName(){
   let result = await myProm
   
   return result
}

myName()
  .then( res => console.log('The result of await is : ' + res))
  .catch( err => console.log('Error: ' + err))

