// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var ReasonReactRouter = require("reason-react/src/ReasonReactRouter.js");

function Header(Props) {
  return React.createElement("div", {
              className: "header"
            }, React.createElement("div", {
                  className: "container"
                }, React.createElement("div", {
                      className: "navBarItem",
                      onClick: (function (param) {
                          return ReasonReactRouter.push("/");
                        })
                    }, React.createElement("div", {
                          className: "logoText"
                        }, "Accessibility ", React.createElement("span", {
                              className: "logoText2"
                            }, "Haters"))), React.createElement("div", {
                      className: "navBar"
                    }, React.createElement("div", {
                          className: "navBarItem",
                          onClick: (function (param) {
                              return ReasonReactRouter.push("/conf");
                            })
                        }, "AccHaters Conf 2019!"), React.createElement("div", {
                          className: "navBarItem",
                          onClick: (function (param) {
                              return ReasonReactRouter.push("/");
                            })
                        }, "About us"))));
}

var make = Header;

exports.make = make;
/* react Not a pure module */
