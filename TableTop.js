//Joshua Maxam//
function todaysDate()
{
	var rightNow =  new Date();
	var month = 0, todaysDate = "";
	
	 function getMonthName(month)
	{
	switch(month)
	{

		case 7:  mName="July"; break;
		case 8:  mName="August"; break;	
		case 9:  mName="September"; break;
		case 10: mName="October"; break;	
		case 11: mName="November"; break;	
		case 12: mName="December"; break;				
	}
	return (mName);
	}

}

function changeTable()
{
	document.body.style.color = "green";
	document.body.style.borderWidths = "0.3em";
	document.body.style.borderStyle = "dotted";
	document.body.style.borderColor = "yellow";
}