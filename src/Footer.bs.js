// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var ReasonReactRouter = require("reason-react/src/ReasonReactRouter.js");

function Footer(Props) {
  return React.createElement("div", {
              className: "footer"
            }, React.createElement("div", {
                  className: "container"
                }, React.createElement("div", {
                      className: "col-4"
                    }, React.createElement("div", {
                          className: "navBarItem",
                          onClick: (function (param) {
                              return ReasonReactRouter.push("/");
                            })
                        }, String.fromCharCode(169) + " Accessibility Haters"))));
}

var make = Footer;

exports.make = make;
/* react Not a pure module */
