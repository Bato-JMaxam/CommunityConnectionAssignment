const express = require('express')
const bodyParser = require('body-parser')
const app = express()
app.use(express.static('public'))
app.use(bodyParser.urlencoded({ extended: false }))
app.use(bodyParser.json())

var server = app.listen(3000,()=>{
    console.log('Server started on port ' + server.address().port) 
    console.log('started')
})
<hi> im not too sure this is what you ment by Adding Janis but here ya go </hi> 
app.get('/order',(req,res)=>{

    if (req.query.name===undefined) res.send ("<h1>'Can you see me' input undefined</h1>")
    else
    if (req.query.email===undefined) res.send ("<h1>'email' input undefined</h1>")
    else
    if (req.query.phone===undefined) res.send ("<h1>'phone' input undefined</h1>")
    else
    if (req.query.address===undefined) res.send ("<h1>'address' input undefined</h1>")
    else
    if (req.query.city===undefined) res.send ("<h1>'city' input undefined</h1>")
    else
    if (req.query.province===undefined) res.send ("<h1>'province' input undefined</h1>")
    else
    if (req.query.size===undefined) res.send ("<h1>'size' input undefined</h1>")
    else
    if (req.query.toppings===undefined && req.query.specialty===undefined) 
        res.send ("<h1>Choose 'specialty' or 'toppings' </h1>")
    else
    res.send ("<h1>Correct - all required request parameters have been received</h1>")
})
<hi> i Hope this counts as two addions... or is it addition? </hi>
app.post('/order',(req,res)=>{

    let html="<h1>Correct</h1>"
    if (req.body.name===undefined) res.send ("<h1>'name' input undefined</h1>")
    else
    if (req.body.email===undefined) res.send ("<h1>'email' input undefined</h1>")
    else
    if (req.body.phone===undefined) res.send ("<h1>'phone' input undefined</h1>")
    else
    if (req.body.address===undefined) res.send ("<h1>'address' input undefined</h1>")
    else
    if (req.body.city===undefined) res.send ("<h1>'city' input undefined</h1>")
    else
    if (req.body.province===undefined) res.send ("<h1>'province' input undefined</h1>")
    else
    if (req.body.size===undefined) res.send ("<h1>'size' input undefined</h1>")
    else
    if (req.body.toppings===undefined && req.body.specialty===undefined) 
        res.send ("<h1>Choose 'specialty' or 'toppings' </h1>")
    else
    res.send (html)
})