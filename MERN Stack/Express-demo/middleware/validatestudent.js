const validatestudent=(req,res,next)=>{
    const {name,course,age}=req.body;

    if(!name || !course || !age){
        return res.status(400).json({error:"All fields are required"});
    }

    if(typeof name !== 'string' || name.trim().length ===0){
    return res.status(400).json({error:"Name must be a valid string"});
    }

    if(!Number.isInteger(age) || age<=0){
        return res.status(400).json({error:"Age must be a positive integer"});
    }

    if(typeof course !== 'string' || course.trim().length ===0){
        return res.status(400).json({error:"Course must be a valid string"});
    }
};
export default validatestudent;
 
