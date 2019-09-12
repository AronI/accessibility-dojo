[@bs.config {jsx: 3}];

[%bs.raw {| require('./success.css') |}];

[@react.component]
let make = () => {
  <img className="img-success" src="https://i.imgflip.com/3acpdu.jpg" alt="success med sød hund"/>;
};
