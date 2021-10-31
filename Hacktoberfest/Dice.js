var number=Math.random();
ans1=(Math.floor(number*6)+1);
number=Math.random();
var number=Math.random();
ans2=(Math.floor(number*6)+1);
document.querySelector(".nav .ans span").innerHTML  = ans1;
document.querySelector(".nav .ans1 span").innerHTML  = ans2;
if(ans1 > ans2)
{
    document.querySelector(".header h1").innerHTML  = "Player 1 Wins!🔥";
    
}

else if(ans2 > ans1)
{
    document.querySelector(".header h1").innerHTML = "Player 2 Wins!🔥";
}
else if(ans2 == ans1)
{
    document.querySelector(".header h1").innerHTML = "Draw";
 
}

