const date = () => new Date() // date de création de l'ordre

const get = (id) => {
    if(!id){
        return "you try to get all orders"
    }else{
        return "you try to get the order "+ id._id;
    }
};

const add = (order) => {
    return "you try to add a new order"+ id;
    date = Date();
}

const remove = (id) => {
    return "you try to delete order" + id;
}

module.exports = {
    get,
    add,
    remove
};