// let t=new Date;
// document.writeln(t);
// year=t.getFullYear();
// document.writeln(year);
// hr=t.getHours();
// min=t.getMinutes();
// sec=t.getSeconds();

function clock() {
  let t = new Date();
  let hr = t.getHours();
  let min = t.getMinutes();
  let sec = t.getSeconds();
  let meri = "AM";

  if (hr > 12) {
    hr = hr - 12;
    meri = "PM";
  }

  if (hr == 12) {
    hr = 12;
  }

  if (min < 10) {
    min = "0" + min;
  }
  if (sec < 10) {
    sec = "0" + sec;
  }
  if (hr < 10) {
    hr = "0" + hr;
  }

  let watch = hr + ":" + min + ":" + sec + " " + meri;
  document.getElementById("clock1").innerHTML = watch;
}
setInterval(clock, 1000);
