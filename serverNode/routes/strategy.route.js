const express = require("express");

const service = require("../services/strategy.service");

const strategy = express.Router();

strategy.get("/get-strategy/:id", async(request, response) => response.send(service.get({ _id: request.params.id })));

strategy.get("/get-all-strategies/", async(request, response) => response.send(await service.get(null)));

strategy.post("/add-strategy/", async(request, response) => response.send(await service.add(request.body)));

strategy.put("/update-strategy/:id", async(request, response) => response.send(await service.update(request.params.id, request.body)));

strategy.delete("/delete-strategy/:id", async(request, response) => response.send(await service.remove(request.params.id)));

module.exports = strategy;