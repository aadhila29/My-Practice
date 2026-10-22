//file wite
// const fs=require("fs");
// fs.writeFileSync("student.text","name:ahamed");
// console.log("file created Succesfully");

//file Read
/*const fs=require("fs");
const data=fs.readFileSync("student.text","utf8");
console.log(data);*/

//append data
/*const fs=require("fs");
fs.appendFileSync("student.text","\n courses:MERN Stack");
console.log("Data Added Successfully");*/

//Delete File 
/*const fs=require("fs");
fs.unlinkSync("student.text");*/

//synchronus file operation
// const fs=require("fs");
// const data=fs.readFileSync("student.text","utf8");

// console.log(data);
// console.log("Next Operation");

//Asynchronous
/*const fs=require("fs");
fs.readFileSync("Student.text","utf8",(err,data)=>
{
    if(err)
    {
        console.log("error reading file");
        return;
    }

    console.log(data);
});

console.log("Next Operation");*/
