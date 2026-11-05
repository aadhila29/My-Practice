import express from "express";
import morgan from "morgan";

import studentRoutes from "./Routes/student Routes.js";

const app = express();

// Middleware
app.use(express.json());
app.use(morgan("dev"));

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

app.listen(3000, () => {
    console.log("Server running on port 3000");
});