const express = require("express");

const service = require("../services/order.service");

const order = express.Router();

order.get("/get-order/:id", async(request, response) => response.send(service.get({ _id: request.params.id })));

order.get("/get-all-orders/", async(request, response) => response.send(await service.get(null)));

order.post("/add-order/", async(request, response) => response.send(await service.add(request.body)));

order.delete("/delete-order/:id", async(request, response) => response.send(await service.remove(request.params.id)));

module.exports = order;