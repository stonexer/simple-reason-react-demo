let component = ReasonReact.statelessComponent("Stepper");

let make = (children) => ({
  ...component,
  render: (self) =>
    <div>
      <div>(ReasonReact.stringToElement("I'm a Stepper! "))</div>
    </div>
});
