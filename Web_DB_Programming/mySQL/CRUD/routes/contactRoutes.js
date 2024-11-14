const express = require("express");
const router = express.Router();//

const {
  getAllContacts,
  createContact,
  getContact,
  updateContact,
  deleteContact,
  addContactForm,
} = require("../controllers/contactController");

router.route("/").get(getAllContacts); /// .post(createContact); 아래로 옮김
router.route("/add").get(addContactForm).post(createContact); // post를 이곳으로 옮김
router.route("/:id").get(getContact).put(updateContact).delete(deleteContact);

module.exports = router;
