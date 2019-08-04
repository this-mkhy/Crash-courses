/*
const getStudent = () => {
    return new Promise((resolve, reject) => {
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
        }, 2000)
    })
}

getStudent().then(student => {
    console.log(student.name, student.age)
})

console.log("This is executed first")
*/

let p = new Promise((resolve, reject) => {
    setTimeout(() => {
        let error = false;
        if(!error)
        {
            console.log("This is executed second, Done")
            resolve({ name: 'Mohamed', age: 23 })
        }
        else
        {
            console.log("This is executed second, Error 404")
            reject()
        }
    }, 2000)
    
})

const getStudent = () => {
    return p
}

getStudent().then(student => {
    console.log(student.name, student.age)
})

console.log("This is executed first")





