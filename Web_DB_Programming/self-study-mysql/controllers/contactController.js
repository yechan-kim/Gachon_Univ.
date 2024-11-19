const asyncHandler = require('express-async-handler');
const dbConnect = require('../config/dbConnect');

const getAllContacts = asyncHandler(async (req, res) => {
    dbConnect.query('SELECT id, name, email, phone FROM Contacts', function (error, results, fields) {
        if (error) throw new Error("All Contacts not read");
        res.render("index", {contacts: results});
    });
});

const createContact = asyncHandler(async (req, res) => {
    console.log(req.body);
    const {name, email, phone} = req.body;

    if (!name || !email || !phone) {
        return res.status(400).send("필수값이 입력되지 않았습니다.");
    }

    dbConnect.query('INSERT INTO Contacts (name, email, phone) VALUES (?, ?, ?)', [name, email, phone], function (error, results) {
        if (error) throw new Error("Contact not created");
        res.redirect("/contacts");
    });
});

const getContact = asyncHandler(async (req, res) => {
    const id = req.params.id;

    dbConnect.query('SELECT id, name, email, phone FROM Contacts WHERE id = ?', [id], function (error, results) {
        if (error) throw new Error("Contact not read");
        if (results.length > 0) {
            res.render("update", {contact: results[0]});
        } else {
            console.log('연락처 없음');
        }
    });
});

const updateContact = asyncHandler(async (req, res) => {
    const id = req.params.id;
    const { name, email, phone } = req.body;

    dbConnect.query('UPDATE Contacts SET name = ?, email = ?, phone = ? WHERE id = ?', [name, email, phone, id], function (error, results) {
        if (error) throw new Error("Contact not updated");
        res.redirect("/contacts");
    });
});

const deleteContact = asyncHandler(async (req, res) => {
    const id = req.params.id;

    dbConnect.query('DELETE FROM Contacts WHERE id = ?', [id], function (error, results) {
        if (error) throw new Error("Contact not deleted");
        res.redirect("/contacts");
    });
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
