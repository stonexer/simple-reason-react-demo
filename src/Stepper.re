type state = {
  value: int
};

let component = ReasonReact.reducerComponent("Stepper");

let make = (children) => ({
  ...component,
  initialState: () => {
    value: 0
  },
  reducer: ((), state) => ReasonReact.NoUpdate,
  render: (self) =>
    <div>
      <div>(ReasonReact.stringToElement(string_of_int(self.state.value)))</div>
    </div>
});
