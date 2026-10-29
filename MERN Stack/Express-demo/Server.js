/*import express from "express";
const app=express();
app.get("/",(req,res)=>
{
  res.send("Heloooo hii");
});
app get("/about",(req,res)=>
{
    res.send("This is the about page")
});

app.get("/contact",(req,res)=>
{
    res.send("aadhila.tech@gmail.com")
});

app.get("/students/:id,courses/course",(req,res)=>
{
    res.json({
        studentId:req.params.id,
        courseName:params.course
});

app.get("/search",(req,res)=>
{
    res.send(req.query.keyword);
});

})

app.get("/api/student",(req,res)=>
{
    res.json({
        message:"students retrived Successfully",
        student:[
            {id:102,name:"raja"},
        {id:102,name:"raja"}]
    });
})
*/


const express = require('express');

const app = express();

app.get('/', (req, res) => {
    res.send('Hello! Server is working!');
});

let students=[
    {id:1,name:"raja",age:20,course:"SE"},
    {id:2,name:"kumar",age:22,course:"IT"},
    {id:2,name:"kumar",age:22,course:"IT"}
];

//GET
app.get("/students-demo",(req,res)=>
{
    res.status(200).json(students);
});

app.get("/students-demo/:id",(req,res)=>
{
    const id=Number(req.params.id);

    const student=students.find((s)=> s.id ===id);

    if(!student)
    {return res.status(404).json({
    message:"student not found"
    
});
}

res.status(200).json(student);
});

app.post("/students-demo",(req,res)=>
{
    const newstudent=req.body

    students.push(newstudent);

    escape.status(201).json(
        {message:"student added",
            student:newstudent
        }
    );
});

app.put("/student-demo/:id",(req,res)=>
{
    const id=Number(req.paramas.id);
    const index=students.findIndex((s)=> s.id===id);

    if(index===-1){
        return res.status(404).json(
            {
                message:"student not found"
            }
        );
    }
     students[index]={id,...req.body};
     
     res.status(200).json({
        message:"student replaced",
        student:students[index]
     });
});

//PATCH

app.listen(3000, () => {
    console.log('Server running on port 3000');
});
