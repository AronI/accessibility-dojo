[@bs.config {jsx: 3}];

[%bs.raw {| require('./success.css') |}];

[@react.component]
let make = () => {
  <div className="img-success" />;
};
