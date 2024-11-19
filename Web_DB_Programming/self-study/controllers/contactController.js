const asyncHandler = require('express-async-handler');
const Contact = require('../config/contactModel');

const getAllContacts = asyncHandler(async (req, res) => {
    const contacts = await Contact.find();
    res.render("index", {contacts: contacts});
});

const createContact = asyncHandler(async (req, res) => {
    console.log(req.body);
    const {name, email, phone} = req.body;
    if (!name || !email || !phone) {
        return res.status(400).send("필수값이 입력되지 않았습니다.");
    }
    const contact = await Contact.create({
        name,
        email,
        phone,
    });
    res.redirect("/contacts");
});

const getContact = asyncHandler(async (req, res) => {
    const contact = await Contact.findById(req.params.id);
    res.render("update", {contact: contact});
});

const updateContact = asyncHandler(async (req, res) => {
    const id = req.params.id;
    const contact = await Contact.findByIdAndUpdate(id, req.body, {new: true});
    res.redirect("/contacts");
});

const deleteContact = asyncHandler(async (req, res) => {
    const id = req.params.id;
    await Contact.findByIdAndDelete(id);
    res.redirect("/contacts");
});

const addContactForm = (req, res) => {
    res.render("add");
};

module.exports = {
    getAllContacts,
    createContact,
    getContact,
    updateContact,
    deleteContact,
    addContactForm
};
