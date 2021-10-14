a<-vector(length=11)
x<-c(0:10)
payoff<-(x^2)-(7*x)
probofHead <- dbinom(x,10,0.6)
print(probofHead)
print(payoff)
plot(payoff)
sum<-0
for(i in 1:11)
{
  sum=sum+(probofHead[i]*payoff[i])
}
print(sum)
if(sum>=0)
{
  print("Good Bet")
}else
{
  print("Bad Bet")
}