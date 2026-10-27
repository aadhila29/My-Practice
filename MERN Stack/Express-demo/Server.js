import express from "express";
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
app.listen(3000()=>
{
    console.log("server running");
})