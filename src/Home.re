[%bs.raw {| require('./home.css') |}];

[@react.component]
let make = _ => {
  <div className="main" tabIndex={-1}>
    <div className="home-container">
      <div className="offscreen"> {ReasonReact.string("Top story")} </div>
      <div className="article">
        <div className="main-story">
          <img className="pull-right" src="https://bit.ly/2kuIbh3" alt="Arena with conf guests"/>
          <div className="info">
            <div className="headline">
              {ReasonReact.string("Accessibility Haters Conf 2019!")}
            </div>
            <p>
              {ReasonReact.string(
                 "It's already been a year and boy are we excited to announce the 2019 Accessibility Haters Conference!
               Last year 50.000 extremely angry people came together and experienced probably the biggest hate conference in the world!
               This year we're aiming for bigger and darker things, as we're moving to break the last 50k entry!
               To make that happen we're going to offer early bird tickets for a random amount, so just enter your credit card info and you might get lucky!
               ",
               )}
              <a href="conf">
                {ReasonReact.string("Get your early bird tickets here!")}
              </a>
            </p>
          </div>
        </div>
      </div>
      <div className="side-by-side">
        <div className="column">
          <div className="tier-header">
            <div> {ReasonReact.string("In the news")} </div>
          </div>
          <div className="article">
            <div className="headline">
              {ReasonReact.string("Study shows dyslexia is FAKE NEWS!!!!! ")}
              <a href="https://www.dyslexicadvantage.org/fake-news/">
                {ReasonReact.string("Read More About Fake News on Dyslexia")}
              </a>
            </div>
            <img className="img-news" src="https://bit.ly/2kuIPet" alt="fake news"/>
          </div>
        </div>
        <div className="column">
          <div className="article">
            <div>
              <img src="https://bit.ly/2kaN4vi" alt="color blindness test dots"/>
              <div className="info">
                <div className="headline">
                  {ReasonReact.string("Color blindness is a lie!")}
                </div>
                <p>
                  {ReasonReact.string(
                     "Researchers say that it's actually impossible to see how people see colors. ",
                   )}
                  <a
                    href="https://www.color-blindness.com/2007/07/05/pretending-color-blindness-how-to-uncover-it/">
                    {ReasonReact.string("Read more on color blindness")}
                  </a>
                </p>
              </div>
            </div>
          </div>
        </div>
      </div>
      <div className="three-col">
        <div className="tier-header">
          <div> {ReasonReact.string("Recommended")} </div>
        </div>
        <div className="columns">
          <div className="article">
            <img className="img-recommended" src="https://bit.ly/2lM98gp" alt="grimacing man holding ears"/>
            <div className="info">
              <div className="headline">
                {ReasonReact.string(
                   "VoiceOver proven to cause extreme headaches and nausea ",
                 )}
                <a
                  href="https://www.webmd.com/migraines-headaches/migraines-headaches-basics#1">
                  {ReasonReact.string(
                     "Read more on VoiceOver causing headaches",
                   )}
                </a>
              </div>
            </div>
          </div>
          <div className="article">
            <img className="img-recommended" src="https://bit.ly/2lKUoOI" alt="LOL"/>
            <div className="info">
              <div className="headline">
                {ReasonReact.string(
                   "The newest fad in the accessibility world is something called a screen reader. ",
                 )}
                <a href="https://en.wikipedia.org/wiki/Screen_reader">
                  {ReasonReact.string("Read More")}
                </a>
              </div>
            </div>
          </div>
          <div className="article">
            <img className="img-recommended" src="https://bit.ly/2kHTNgr" alt="content not available"/>
            <div className="info">
              <div className="headline">
                {ReasonReact.string(
                   "Location, location, location! It's not our fault you are in the wrong place! ",
                 )}
                <a href="https://en.wikipedia.org/wiki/Location">
                  {ReasonReact.string("Read More about location")}
                </a>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>;
};
