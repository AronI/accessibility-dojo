[@bs.config {jsx: 3}];

[%bs.raw {| require('./failed.css') |}];

[@react.component]
let make = () => {
  <div className="img-failed" />;
};
