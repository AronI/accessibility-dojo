[@bs.config {jsx: 3}];

// This is some lol logic
// You don't have to do anything here
let isFormFilledOut = (searchPath: string) => {
  Js.String.split("=", searchPath)->Array.length >= 10;
};

[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();
  <>
    <Header />
    {switch (url.path) {
     | ["conf", ..._rest] =>
       let searchPath = url.search;
       if (searchPath->Js.String.length == 0) {
         <> <div className="container2" /> <Conference /> </>;
       } else if (isFormFilledOut(searchPath)) {
         <Success />;
       } else {
         <Failed />;
       };
     | _ => <Home />
     }}
    <Footer />
  </>;
};
