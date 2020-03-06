var q = 15;
var port = 18;
var land=61;
var rolemodel = 62;
var p = 3;
var pan = 7;

//only quotes
  setInterval(function(){
    var n= Math.floor(Math.random() * q + 1);
     document.getElementById("quote1").style.backgroundImage ="url(images/quotes/q"+n+".png)";
   }, 20000);
   setInterval(function(){
     var n= Math.floor(Math.random() * q + 1);
      document.getElementById("quote2").style.backgroundImage ="url(images/quotes/q"+n+".png)";
    }, 20100);
    setInterval(function(){
      var n= Math.floor(Math.random() * q + 1);
       document.getElementById("quote3").style.backgroundImage ="url(images/quotes/q"+n+".png)";
     }, 20200);
     setInterval(function(){
       var n= Math.floor(Math.random() * q + 1);
        document.getElementById("quote4").style.backgroundImage ="url(images/quotes/q"+n+".png)";
      }, 20300);

//misc. pictures
      setInterval(function(){
        var n= Math.floor(Math.random() * port + 1);
         document.getElementById("picture1").style.backgroundImage ="url(images/pics/port"+n+".jpg)";
       }, 10000);
       setInterval(function(){
         var n= Math.floor(Math.random() * land + 1);
          document.getElementById("picture2").style.backgroundImage ="url(images/pics/land"+n+".jpg)";
        }, 10500);
      setInterval(function(){
  var n= Math.floor(Math.random() * pan + 1);
   document.getElementById("panorama1").style.backgroundImage ="url(images/pics/pan"+n+".jpg)";
 }, 10300);

//poems and song lyrics
setInterval(function(){
var n= Math.floor(Math.random() * p + 1);
document.getElementById("poem1").style.backgroundImage ="url(images/poems/poem"+n+".png)";
}, 60400);

//rolemodels
setInterval(function(){
var n= Math.floor(Math.random() * rolemodel + 1);
document.getElementById("rolemodel").style.backgroundImage ="url(images/rolemodel/rolemodel"+n+".png)";
}, 10200);
