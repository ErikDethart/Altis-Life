#include "..\..\script_macros.hpp"
/*
    File: fn_dataQuery.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the 'authentication' process and sends a request out to
    the server to check for player information.
*/
if (life_session_completed) exitWith {}; //Why did this get executed when the client already initialized? Fucking arma...

cutText[format ["Sending request to server for player information UID [%1]", (getPlayerUID player)],"BLACK FADED"];
0 cutFadeOut 999999999;

[player] remoteExec ["DB_fnc_queryRequest",RSERV];