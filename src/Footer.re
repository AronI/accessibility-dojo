[@react.component]
let make = _ =>
  <footer className="footer">
    <nav className="col-4">
      <a className="navBarItem" href="/">
        {ReasonReact.string(
           Js.String.fromCharCode(169) ++ " Accessibility Haters",
         )}
      </a>
    </nav>
  </footer>;