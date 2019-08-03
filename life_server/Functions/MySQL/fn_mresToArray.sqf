/*
    File: fn_mresToArray.sqf
    Author: Bryan "Tonic" Boardwine";

    Description:
    Acts as a mres (MySQL Real Escape) for arrays so they
    can be properly inserted into the database without causing
    any problems. The return method is 'hacky' but it's effective.
*/
params [
    ["_array", "", [""]]
];
if (_array isEqualTo "") exitWith {[]};
_array = toArray(_array);

_array = _array - [34];

{
    if (_x isEqualTo 96) then {
        _array set [_forEachIndex, 34];
    };
} forEach _array;

_array = toString(_array);
_array = call compile _array;
_array;
