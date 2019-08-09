//await
let p = new Promise((resolve, reject) => {
  setTimeout(() => {
    console.log('promise done')
    resolve('Done')
  }, 2000)
})


async function myName(){
   console.log('This is executed first')
   await p
   //p
   console.log('I am Mohamed')
}

myName()
