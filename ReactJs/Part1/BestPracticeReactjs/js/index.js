//babel
function Person(props){
  return(    
      <div className="person">
        
        <h1>{props.name}</h1>
        <p>Your Age: {props.age}</p>
      </div>
    );
}

var app = (
  <div>
    <Person name="Mohamed" age="23" />
    <Person name="Khaled" age="50" />
  </div>
);

ReactDOM.render(app , document.querySelector('#app'));






