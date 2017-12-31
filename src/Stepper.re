type state = {
  value: int
};
/* here */
type action =
  | Increase
  | Decrease;

let component = ReasonReact.reducerComponent("Stepper");

let make = (children) => ({
  ...component,
  initialState: () => {
    value: 0
  },
  reducer: (action, state) => {
    /* and here */
    switch action {
    | Decrease => ReasonReact.Update({value: state.value - 1})
    | Increase => ReasonReact.Update({value: state.value + 1})
    };
  },
  render: (self) =>
    <div>
      /* last one */
      <button onClick={self.reduce((evt) => Decrease)}>(ReasonReact.stringToElement("-"))</button>
      <span>(ReasonReact.stringToElement(string_of_int(self.state.value)))</span>
      <button onClick={self.reduce((evt) => Increase)}>(ReasonReact.stringToElement("+"))</button>
    </div>
});
