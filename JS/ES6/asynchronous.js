const getStudent = callback => {
    setTimeout(() => {
       callback ({ name: 'Mohamed', age: 23 })
    }, 2000)
}

getStudent(student => {
    console.log("This is executed second")
    console.log(student.name, student.age)
})

console.log("This is executed first")