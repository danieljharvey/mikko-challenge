/* This is the basic component. */
let component = ReasonReact.statelessComponent("Employee");

let inputEventToText = (event: ReactEventRe.Form.t) : string => ReactDOMRe.domElementToObj(
                                                                   ReactEventRe.Form.target(
                                                                    event,
                                                                   ),
                                                                 )##value;

let make = (~employee: Employee.employee, ~updateEmployeeName, _children) => {
  ...component,
  render: self =>
    <div>
      <h1> (ReasonReact.string("Employee Record")) </h1>
      <p> (ReasonReact.string(employee.name)) </p>
      <input
        name="employeeName"
        value=employee.name
        onChange=(event => updateEmployeeName(inputEventToText(event)))
      />
    </div>,
};