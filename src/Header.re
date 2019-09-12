[@react.component]
let make = _ =>
  <div className="header">
    <div className="container">
      <div className="navBarItem" onClick={_ => ReasonReactRouter.push("/")}>
        <div className="logoText">
          {ReasonReact.string("Accessibility ")}
          <span className="logoText2"> {ReasonReact.string("Haters")} </span>
        </div>
      </div>
      <div className="navBar">
        <div
          className="navBarItem"
          onClick={_ => ReasonReactRouter.push("/conf")}>
          {ReasonReact.string("AccHaters Conf 2019!")}
        </div>
        <div
          className="navBarItem" onClick={_ => ReasonReactRouter.push("/")}>
          {ReasonReact.string("About us")}
        </div>
      </div>
    </div>
  </div>;
