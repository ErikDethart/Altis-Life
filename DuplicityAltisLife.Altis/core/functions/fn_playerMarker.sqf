/*
    File: fn_playerMarker.sqf
    Author: Erik

    Description: Mark yourself on the map.
*/

private _color = switch (playerSide) do {
	case west: {"ColorWEST"};
	case independent: {"ColorGUER"};
	case civilian: {"ColorCIV"};
};

//Create marker
_marker = createMarkerLocal ["player_marker",visiblePosition player];
_marker setMarkerColorLocal _color;
_marker setMarkerTypeLocal "mil_arrow2";
_marker setMarkerTextLocal "You";
_marker setMarkerDirLocal (direction player);

//Update marker
while {visibleMap} do {
	_marker setMarkerPosLocal (visiblePosition player);
	_marker setMarkerDirLocal (direction player);
	sleep 0.02;
};

//Clean up
deleteMarkerLocal _marker;