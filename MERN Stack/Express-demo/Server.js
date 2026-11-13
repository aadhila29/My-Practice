
import express from "express";
import morgan from "morgan";
import studentRoutes from "./Routes/student Routes.js";

const app = express();

// EJS Configuration
app.set("view engine", "ejs");
app.set("views", "./views");

// Middleware
app.use(express.json());
app.use(express.urlencoded({ extended: true }));
app.use(morgan("dev"));
app.use(express.static("public"));

// Temporary student data for EJS pages
let students = [
    { id: 1, name: "John", age: 20, course: "ME" },
    { id: 2, name: "Alice", age: 20, course: "SE" },
    { id: 3, name: "Risu", age: 20, course: "IT" }
];

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
        course: "Node.js",
        title: "Welcome Page"
    });
});

// Student info EJS route
app.get("/student-info", (req, res) => {
    res.render("student-info", {
        name: "John",
        course: "Node.js",
        email: "john@example.com",
        title: "Student Information"
    });
});

// About page EJS
app.get("/about", (req, res) => {
    res.render("about", {
        title: "About Us"
    });
});

// Registration form page
app.get("/register", (req, res) => {
    res.render("register", {
        title: "Student Registration Form"
    });
});

// Handle registration form submission
app.post("/register", (req, res) => {

    const { name, age, course } = req.body;

    // Server-side validation
    const parsedAge = Number(age);

    if (
        typeof name !== "string" || name.trim() === "" ||
        !Number.isInteger(parsedAge) || parsedAge <= 0 ||
        typeof course !== "string" ||
        !["SE", "CS", "IT"].includes(course)
    ) {
        return res.status(400).send("Invalid input data");
    }

    // Create new student
    const newstudent = {
        id: Math.max(0, ...students.map(s => s.id)) + 1,
        name: name.trim(),
        age: parsedAge,
        course: course
    };

    // Add student to array
    students.push(newstudent);

    // Redirect to student page
    res.redirect("/student-page");
});

// Contact page
app.get("/contact", (req, res) => {
    res.render("contact", {
        title: "Contact Us"
    });
});

// Contact form submission
app.post("/contact", (req, res) => {

    const { name, email, message } = req.body;

    if (
        typeof name !== "string" || name.trim() === "" ||
        typeof email !== "string" || email.trim() === "" ||
        typeof message !== "string" || message.trim() === ""
    ) {
        return res.status(400).send("Please enter all details");
    }

    res.send(`
        <h1>Thank You!</h1>
        <p>Your message has been received.</p>
        <a href="/contact">Go Back</a>
    `);
});

// Student page EJS
app.get("/student-page", (req, res) => {

    res.render("student", {
        students: students,
        title: "Student List"
    });

});

// Start server
app.listen(3000, () => {
    console.log("Server running on port 3000");
});
