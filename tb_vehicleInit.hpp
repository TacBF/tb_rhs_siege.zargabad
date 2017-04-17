class TB_vehicleInit {
	class HellfireRemove {
		code = "if (local _this) then { _this removeweapon 'missiles_ASRAAM'; _this removeweapon 'missiles_SCALPEL'; };";
	};
	class Attach {
		code = "if (local _this) then {[_this] execVM 'functions\OffroadAUG.sqf'};";
	};
};
