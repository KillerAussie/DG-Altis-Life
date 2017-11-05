#define SAFE_ZONES [["sz_kav", 40]]
#define COP_ZONES [["sz_kavCop", 65]]

_bullet = _this select 6;
_shooter = _this select 7;

if ({((_shooter distance _x select 0) < _x select 1)} count SAFE_ZONES > 0) then {
   deleteVehicle _bullet;
   titleText ["Stop Shooting In The Safezone!", "PLAIN"];
};

if ({((_shooter distance _x select 0) < _x select 1)} count COP_ZONES > 0) then {
   deleteVehicle _bullet;
   titleText ["Stop Shooting In The Safezone!", "PLAIN"];
};