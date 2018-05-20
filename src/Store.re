type actions =
  | ChangeName(string);

type state = {employee: Employee.employee};

let updateEmployeeName = (send, name) => send(ChangeName(name));

let component = ReasonReact.reducerComponent("Store");

let make = _children => {
  ...component,
  initialState: () => {employee: Employee.defaultEmployee},
  reducer: (action, _state) =>
    switch (action) {
    | ChangeName(newName) => ReasonReact.Update({
                                employee: {
                                  name: newName,
                                },
                              })
    },
  render: self =>
    <EmployeeView
      updateEmployeeName=(
        newName => self.ReasonReact.send(ChangeName(newName))
      )
      employee=self.state.employee
    />,
};