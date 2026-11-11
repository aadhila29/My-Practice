
import express from "express";
import morgan from "morgan";
import studentRoutes from "./Routes/student Routes.js";

const app = express();

// EJS Configuration
app.set("view engine", "ejs");
app.set("views", "./views");

// Middleware
app.use(express.json());
app.use(morgan("dev"));
app.use(express.static("public"));

// Custom middleware
const requestlogger = (req, res, next) => {
    console.log("Request Method:", req.method);
    console.log("Request URL:", req.url);
    console.log("Request Time:", new Date().toLocaleString());
    next();
};

app.use(requestlogger);

// Student API routes
app.use("/api/students", studentRoutes);

// Home route
app.get("/", (req, res) => {
    res.send("Welcome to Student API");
});

// Welcome EJS route
app.get("/welcome", (req, res) => {
    res.render("welcome", {
        name: "John",
        course: "Node.js"
    });
});

// Student info EJS route
app.get("/student-info", (req, res) => {
    res.render("student-info", {
        name: "John",
        course: "Node.js",
        email: "john@example.com"
    });
});

//About page EJS
app.get("/about", (req, res) => {
    res.render("about", {
        title: "About us"
    });
});

// Student page EJS
app.get("/student-page", (req, res) => {

    const students = [
        { id: 1, name: "John", age: 20, course: "SE" },
        { id: 2, name: "Halo", age: 21, course: "CS" },
        { id: 3, name: "Alice", age: 17, course: "IT" }
    ];

    res.render("student", { students });

});

// Start server
app.listen(3000, () => {
    console.log("Server running on port 3000");
});
