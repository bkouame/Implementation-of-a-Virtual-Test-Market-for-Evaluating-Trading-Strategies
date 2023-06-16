const express = require("express");
const orderRoute = require("./routes/order.route");
const app = express();
const port = 3000;

app.use("/order",orderRoute)

app.listen(port, function () {
  console.log(`Example app listening on port ${port}!`);
});
