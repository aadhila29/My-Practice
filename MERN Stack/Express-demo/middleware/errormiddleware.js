const errorhandlre =(err,req,res,next)=>{
    console.log
};

export const getStudentById = (req, res, next) => {

    const id = Number(req.params.id);

    const student = students.find((s) => s.id === id);

    if (!student) {

        const error = new Error("Student not found");

        error.status = 404;

        return next(error);
    }

    res.status(200).json(student);
};

