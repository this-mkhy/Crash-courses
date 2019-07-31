//babel
function Person(props){
  return(    
      <div className="person">
        
        <h1>{props.name}</h1>
        <p>Your Age: {props.age}</p>
      </div>
    );
}

ReactDOM.render(<Person name="Mohamed" age="23" />, document.querySelector('#p1'));

ReactDOM.render(<Person name="Khaled" age="50" />, document.querySelector('#p2'));






