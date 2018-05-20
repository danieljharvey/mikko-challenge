/* This is the basic component. */
let component = ReasonReact.statelessComponent("Employee");

let make = (~employee: Employee.employee, _children) => {
  ...component,
  render: self => <div> (ReasonReact.stringToElement(employee.name)) </div>,
};