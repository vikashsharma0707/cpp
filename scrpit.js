// // How to check if an object is an array or not? Provide some code. 

// const arr=[2,5,8,5];
// const isArray=Array.isArray(arr);
// console.log(isArray);

// let ar=[40,8,8,9];
// const nik=Array.isArray(ar);
// document.getElementById("demo").innerHTML=nik;


// // Q2. Write the JavaScript code to change the content and color of the HTML element below when we click button?
// //        <h1 id="demo">May the code be with you.</h1>     

// // document.getElementById("demo2").style.color="red";

// function change(){
//  document.getElementById("demo2").style.color="red";
    
// }

// function change2(){
//     document.getElementById("demo2").style.color="black";
       
//    }



// //    Q3. Write a function that takes the base and height of a triangle and return its area.                                                                                                                                   4
// function area(){
//    let x=prompt("what is base");
//    let y=prompt("what is height");
//     // console.log(.5*x*y);
//     document.getElementById("demo3").innerHTML=.5*x*y;
// }



// // Q4. Write a JavaScript program to find the maximum number in an array.       

// const array=[12,45,21,85];
// const maxi=Math.max.apply(null,array);
// console.log(maxi);

// let x=[45,78,65,49,99];
// console.log(Math.max.apply(null,x));


// // Q5. Write a JavaScript function that reverses a number.				   6
// // Example x = 32243;
// // Expected Output : 34223

// // const rev=[4545,784,459,];
// // let revv=rev.reverse();
// // console.log(revv);

// const num1=32243;
// let result=num1.toString().split('').reverse().join('');
// console.log(result);

// let num2=123456789;
// console.log(num2.toString().split('').reverse().join(''));


// // const d = new Date();
// // console.log(d.toUTCString());



// // Q6. Write a JavaScript program to calculate multiplication and division of two numbers (input from the user).  

// function change3(){
//     let x = document.getElementById("one").value;
//     let y = document.getElementById("two").value;
//     document.getElementById("demo4").innerHTML=x*y;
// }


// function change3(){
//     let x=document.getElementById("one").value;
//     let y=document.getElementById("two").value;

//    let c=x/y;
//    document.getElementById("demo4").innerHTML=Math.floor(c);
// }

// // function change4(){
// //     let c=document.getElementById("one").value;
// //     let u=document.getElementById("two").value;
// //     document.getElementById("demo4").innerHTML=c+u;
// // }


// // Q7. Write a JavaScript program to display the current day and time in the  following format.										6
// // Today is : Tuesday.
// // Current time is : 10 PM : 30 : 38


// const date= new Date();
// const date1=date.getDate();
// console.log(date1);






// // const birthday = new Date('August 19, 1975 23:15:30');
// // const date1 = birthday.getDate();
// // // const time=getTime();
// // console.log(time);


// // Write a Java Script Program  to  create 10-character  random password  generator. 		

// function generator(){
//     let pass=" ";
//     let str="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

//     for(let i=1;i<=8;i++){
//         let char=Math.floor(Math.random()*str.length+1);
//         pass += str.charAt(char);

//     }
//     return pass;
// }
// function display(){
// document.getElementById("demo5").innerHTML=generator();
// }



// // Q9. How to check if an object is a string or not? Provide some code. 	

// // function isString(obj) {
// //     return typeof obj === "string";
// //   }
  
// //   console.log(isString("hello")); // true
// //   console.log(isString(10)); // false




//   function st(nik){
//   return typeof nik==="string";
//   }
//   console.log(st("hello"));
//   console.log(st(10));
//   console.log(st=[5,8,9]);



// let o="nikesh";
// console.log(typeof(o))




// // Q10. Write a JavaScript program to compute the sum and product of an array of integers.

// let arr3=[1,2,3,4,5,6,8];
// let s=0;
// let p=1;

// for(let i=0;i<arr3.length;i++){
//    s+=arr3[i];
//    p*=arr3[i];
// }
// console.log('Sum : ' + s + ' Product :  ' + p);



// let num=[1,2,3,4,5,6,8];
// let su=0;
// let po=1;
// let l=num.length;


// for(let i=0;i<l;i++){
//     // su+=num[i];
//     su=su+num[i];
//     // po*=num[i];
//     po=po*num[i];
// }

// console.log(su,po);


// // Q11. Write a JavaScript program to calculate area of  circle when the radius of the circle will be supplied by the user.						                       


// function radius(){
//     let r =document.getElementById("rad").value;
//     document.getElementById("demo6").innerHTML=3.14159265359*r*r;
// }


// // . Write a JavaScript program to check the given number is positive or not.  

// // const n=prompt("enter the number");
// // if(n>0){
// //     console.log("number is postive")
// // }
// // else
// // console.log("nuber is negative")


// function postive(){
//     // let nn=prompt("enter the number");
//     if(nn>0){
//         document.getElementById("demo7").innerHTML="Number is postive";
//     }
//     else
//     document.getElementById("demo7").innerHTML="Number is negative";
// }




// // Q13. Write a JavaScript function that returns the Fibonacci sequence up to a given number of terms. 


// // function Fibonacci(n){
// //     if(n==1) return 0;
// //     if(n==2) return 1;
// //     return Fibonacci(n-1)+Fibonacci(n-2);
// // }

// // const n=prompt("enter the nummber");
// // const fb =[];
// // for(let i=1;i<n;i++){
// //     fb.push(Fibonacci(i));
// // }
// // document.getElementById("demo7").innerHTML=fb;


// // function Fibonacci(n){
// //     if(n==1) return 0;
// //     if(n==2) return 1;
// //     return Fibonacci(n-1) + Fibonacci(n-2);
// // }

// // const n=prompt("enter the number ");
// // const fb=[];
// // for(let i=1;i<n;i++){
// //     fb.push(Fibonacci(i));
// // }
// // console.log(fb);




// // Q14. Write a JavaScript conditional statement to find the sign of product of three numbers. Display an alert box with the specified sign




// function postivee(){
//     let x =document.getElementById("x").value;
//     let y =document.getElementById("y").value;

//     let z =document.getElementById("z").value;

//     let product =x*y*z;
// let sign;

// if(product>0){
//     sign="postive";
// }
// else if(product<0){
//     sign="negative";
// }
// else
// sign="zero";

// // return sign;
// console.log(sign);
// document.getElementById("demo9").innerHTML=sign;


// }


// Q16. Write a java script program using nested loop to print following pattern in console.											6
// 4   3   2   1
// 4   3   2
// 4   3
// 4

// const n=5;

// for(let i=n;i>=n;i--){
//     let n='';
//     for(let j=1;j<=i;j++){
//         n+=j+'';
//     }
//     // document.getElementById("demo9").innerHTML=n;
//     console.log("n");
// }

function printInvertedHalfPyramid(rows) {
let rows=document.getElementById("rows").value;
    
    for (let i = rows; i >= 1; i--) {
        let row = '';
        for (let j = 1; j <= i; j++) {
            row += j + ' ';
        }
        console.log(row);
    }
}