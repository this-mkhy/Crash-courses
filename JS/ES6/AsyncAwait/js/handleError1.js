//Handle error using only catch .. In promise, async and await
//Handle error without using try and catch

let myProm2 = new Promise((resolve, reject) => {
    setTimeout(() => {       
        resolve({ name: 'Mohamed', age: 23 })
        //reject('error 404')

    }, 6000)
    
})

const getStudent2 = () => {
    return myProm2
}

async function fetchStudent2 () {
    let student = await getStudent2()
    return student
}
fetchStudent2()
  .then(student => console.log(student.name + " " + student.age))
  .catch((err) => console.log("Error: " + err))


console.log("This is executed first")


