[@react.component]
let make = _ =>
  <header className="header">
  <nav>
    <a className="navBarItem" href="/">
      <div className="logoText">
        {ReasonReact.string("Accessibility ")}
        <span className="logoText2"> {ReasonReact.string("Haters")} </span>
      </div>
    </a>
    <a
      className="navBarItem" href="/conf">
      {ReasonReact.string("AccHaters Conf 2019!")}
    </a>
    <a className="navBarItem" href="/">
      {ReasonReact.string("About us")}
    </a >
    </nav>
  </header>;