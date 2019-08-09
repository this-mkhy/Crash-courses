//Handle error using try and catch .. In promise, async and await

let myProm3 = new Promise((resolve, reject) => {
    setTimeout(() => {
        
        let error = false;
        if(error)
        {
            console.log("This is executed second, Done")
            resolve({ name: 'Mohamed', age: 23 })
        }
        else
        {
            console.log("This is executed second, Error")
            reject()
        }
        
    }, 8000)
    
})

const getStudent3 = () => {
    return myProm3
}

async function fetchStudent3 () {
    try { 
        const student = await getStudent3()
        return student
    } catch (error) {
        console.log("Error")
    }
}

fetchStudent3()
  .then(student => console.log(student.name + " " + student.age))
  .catch(() => console.log("error 404"))


console.log("This is executed first")

