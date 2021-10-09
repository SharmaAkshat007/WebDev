function Drums(name, char) {
  this.name = name;
  this.char = char;
}

d1 = new Drums("tom-1.mp3", "w");
d2 = new Drums("tom-2.mp3", "a");
d3 = new Drums("tom-3.mp3", "s");
d4 = new Drums("tom-4.mp3", "d");
d5 = new Drums("snare.mp3", "j");
d6 = new Drums("crash.mp3", "k");
d7 = new Drums("kick-bass.mp3", "l");

// document.querySelector("button") is target here and

// document.querySelector("button").addEventListener("click",function ()
// {  alert("I got clicked");})

var dr = document.querySelectorAll(".drum");
for (var i = 0; i < dr.length; i++) {
  dr[i].addEventListener("click", handleclick);
}

function handleclick() {
  makesound(this.innerHTML);
  annimate(this.innerHTML);
}

document.addEventListener("keypress",function(event){
  makesound(event.key);
  annimate(event.key);
})

function makesound(key) {
  switch (key) {
    case "w":
      var audio = new Audio("./sounds/" + d1.name);
      break;
    case "a":
      var audio = new Audio("./sounds/" + d2.name);
      break;
    case "s":
      var audio = new Audio("./sounds/" + d3.name);
      break;
    case "d":
      var audio = new Audio("./sounds/" + d4.name);
      break;
    case "j":
      var audio = new Audio("./sounds/" + d5.name);
      break;
    case "k":
      var audio = new Audio("./sounds/" + d6.name);
      break;
    case "l":
      var audio = new Audio("./sounds/" + d7.name);
      break;
    default:
      var x=1;
      console.log(key);
  }
  if(x!==1)
  {audio.play();}
}
function annimate(key){
var btt=  document.querySelector("."+key);
btt.classList.add("pressed");
setTimeout(function(){
  btt.classList.remove("pressed");
},100)
// var dd = document.querySelectorAll(".drum");
// for (var i = 0; i < dd.length; i++)
// {
//   if(dd[i].innerHTML!==key){
//     // console.log(dd[i].innerHTML);
//     document.querySelector("."+dd[i].innerHTML).classList.remove("pressed");
//   }
// }
}
