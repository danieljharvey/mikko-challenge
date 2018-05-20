/* This is the basic component. */
let component = ReasonReact.statelessComponent("Employee");

let make = (~employee: Employee.employee, _children) => {
  ...component,
  render: self =>
    <div>
      <h1> (ReasonReact.string("Employee Record")) </h1>
      <p> (ReasonReact.string(employee.name)) </p>
    </div>,
};