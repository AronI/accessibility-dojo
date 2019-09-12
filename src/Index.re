[@bs.config {jsx: 3}];

[%bs.raw {| require('./reset.css') |}];
[%bs.raw {| require('./app.css') |}];
[%bs.raw {| require('./header.css') |}];

ReactDOMRe.renderToElementWithId(<App />, "index");
