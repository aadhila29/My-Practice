//player1
var  randomnumber1=Math.floor(Math.random()*6) +1;   //1-6
var randomdiceimage="dice" +randomnumber1+".png";    //dice1.png-dice6.png
var randomimagesource="images/"+  randomdiceimages;  //images/dice1.png-images/dice6.png
var images1=document.querySelectorAll("img")[0];
 image1.setAttribute("src", randomimagesource);


//player2
var  randomnumbe2=Math.floor(Math.random()*6) +1;       //1-6
var randomdiceimage2="dice" +randomnumber1+".png";     //dice1.png-dice6.png
var randomimagesource="images/"+  randomdiceimages;   //images/dice1.png-images
var images2=document.querySelectorAll("img")[1];
 image2.setAttribute("src", randomimagesource);


 //Finding the Winner
 
 

