[@react.component]
let make = _ =>
  <div className="footer">
    <div className="container">
      <div className="col-4">
        <div
          className="navBarItem" onClick={_ => ReasonReactRouter.push("/")}>
          {ReasonReact.string(
             Js.String.fromCharCode(169) ++ " Accessibility Haters",
           )}
        </div>
      </div>
    </div>
  </div>;
