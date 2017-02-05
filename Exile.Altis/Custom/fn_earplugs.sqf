/*

 Author - Seth Campbell
 Yeah I know its shitty

*/
private _handled = false;
if ((_this select 0) == 59) then
{
    if (soundVolume == 1) exitWith
    {
        0 fadeSound 0.8;
        hintSilent "80%";
    };
 
    if (soundVolume == 0.8) exitWith
    {
        0 fadeSound 0.6;
        hintSilent "60%";
    };
   
    if (soundVolume == 0.6) exitWith
    {
        0 fadeSound 0.4;
        hintSilent "40%";
    };
   
    if (soundVolume == 0.4) exitWith
    {
        0 fadeSound 0.2;
        hintSilent "20%";
    };
    0 fadeSound 1;
    _handled = true;
};
 
_handled