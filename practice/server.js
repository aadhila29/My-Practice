
const express = require('express');
const app = express();

app.use(express.json());

let products = [
    { id: 1, name: "Laptop", price: 50000 },
    { id: 2, name: "Mouse", price: 1500 }
];

// GET
app.get('/products', (req, res) => {
    res.json(products);
});

// GET by ID
app.get('/products/:id', (req, res) => {
    const id = Number(req.params.id);
    const product = products.find(p => p.id === id);

    res.json(product);
});

// POST
app.post('/products', (req, res) => {
    products.push(req.body);
    res.status(201).json(products);
});

app.listen(3000, () => {
    console.log("Server running!");
});
