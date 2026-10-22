const http=require("http");
const server=http.createServer((req,res)=>
{
  res,writeHead(200,
    {
        "content-type":"text"
    });
  
    res.end("Hello From Node.js Server!");
})

server.listen(3000,()=>
{
    console.log("server runnig at http://localhost:3000")
})