var buttons = document.querySelectorAll(".colour")
for(var i=0;i<buttons.length;i++)
{
    var R=Math.random();
    R=Math.floor(R*255);
    var G=Math.random();
    G=Math.floor(G*255)
    var B=Math.random();
    B=Math.floor(B*255);
    document.querySelectorAll("button")[i].style.backgroundColor = `rgb(${R},${G},${B})`;
}

var i=Math.floor(Math.random()*6);
console.log(i)
var x=document.querySelectorAll("button")[i].style.backgroundColor;
document.getElementById("Colour-value").innerText=x;

function check(val)
{var y=document.querySelectorAll("button")[val-1].style.backgroundColor;
    if(x===y)
            {
            document.getElementById('result').innerText="Correct Guess";
            }
        else{
            document.getElementById('result').innerText="Try again";
        }
}

for(var i=0;i<buttons.length;i++)
{       
    document.querySelectorAll("button")[i].addEventListener("click",function (){
        var val=this.getAttribute('data-value');
        if(val==1)
        {
            check(val);
        }

        else if(val==2)
        {
            check(val);
        }

        else if(val==3)
        {
            check(val);
        }

        else if(val==4)
        {
            check(val);
        }

        else if(val==5)
        {
            check(val);
        }

        else if(val==6)
        {
            check(val);
        }
      });
}
