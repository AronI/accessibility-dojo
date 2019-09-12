[@bs.config {jsx: 3}];

[%bs.raw {| require('./conf.css') |}];

[@react.component]
let make = _ => {
  <div className="main-conf">
    <div className="card">
      <form>
        <div className="container">
          <h2> {ReasonReact.string("Accessibility Haters 2019")} </h2>
          <div className="trip-selector">
            <label>
              <input type_="radio" name="tType" value="0" />
              {ReasonReact.string(" One Ticket")}
            </label>
            <label>
              <input type_="radio" name="tType" value="1" />
              {ReasonReact.string(" Two Tickets")}
            </label>
            <label>
              <input type_="radio" name="tType" value="2" />
              {ReasonReact.string(" More Tickets")}
            </label>
          </div>
          <div className="row">
            <label htmlFor="fName"> {ReasonReact.string("Full Name")} </label>
            <input type_="text" name="fName" id="fName" />
          </div>
          <div className="row">
            <label htmlFor="address">
              {ReasonReact.string("Enter your address")}
            </label>
            <textarea id="address" name="addressTxt" />
          </div>
          <div className="row">
            <div className="inline-control col-1">
              <label htmlFor="seatType">
                {ReasonReact.string("Seat Type")}
              </label>
              <input
                type_="text"
                list="seatTypes"
                name="seatType"
                id="seatType"
              />
              <datalist id="seatTypes">
                <option value="Amazing" />
                <option value="Meh" />
                <option value="Ouch after like 30 minutes" />
                <option value="The back killer" />
                <option
                  value="There might be a nail in the middle of my seat"
                />
              </datalist>
            </div>
            <div className="inline-control col-1">
              <label htmlFor="annoying">
                {ReasonReact.string("What annoys you?")}
              </label>
              <input
                type_="text"
                list="annoyingList"
                name="annoying"
                id="annoying"
              />
              <datalist id="annoyingList">
                <option value="Accessibility" />
                <option value="Accessibility" />
                <option value="Accessibility" />
                <option value="Accessibility" />
                <option value="Accessibility" />
              </datalist>
            </div>
            <div className="inline-control col-1">
              <label htmlFor="dDate">
                {ReasonReact.string("Arrival Date")}
              </label>
              <input type_="date" name="dDate" id="dDate" />
            </div>
            <div className="inline-control col-1">
              <label htmlFor="rDate">
                {ReasonReact.string("First Hate Date")}
              </label>
              <input type_="date" name="rDate" id="rDate" />
            </div>
          </div>
          <div className="row">
            <div className="inline-control col-2">
              <label htmlFor="at">
                {ReasonReact.string("Least favourite assistive technology")}
              </label>
              <select name="at" id="at">
                <option value="0">
                  {ReasonReact.string("Screen readers")}
                </option>
                <option value="1">
                  {ReasonReact.string("Voice recognition")}
                </option>
                <option value="2">
                  {ReasonReact.string("Automatic page turners")}
                </option>
              </select>
            </div>
            <div className="inline-control sign-up col-1">
              <label>
                <input type_="checkbox" name="jLetter" />
                {ReasonReact.string(" Bringing a pet?")}
              </label>
            </div>
            <div className="inline-control submit-form col-1">
              <button type_="submit" id="submitBtn">
                {ReasonReact.string("Buy")}
              </button>
            </div>
          </div>
        </div>
      </form>
    </div>
  </div>;
};
