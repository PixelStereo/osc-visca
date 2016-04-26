	
/*
	properties of the patcher
*/

outlets = 1;
setoutletassist(0,"patcher filepath and more");

function bang()
{
	if (max.isruntime == 1) 
		outlet(0, max.apppath + "/")
else
	outlet(0, patcher.filepath)
}