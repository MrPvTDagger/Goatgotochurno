player removeItem "HandGrenade";
player removeItem "HandGrenade";
player removeItem "ACE_M84";
player removeItem "SmokeShell";
player removeItem "SmokeShell";
player removeItem "SmokeShellRed";
player removeItem "SmokeShellGreen";
removeAllItems player;
removeAllAssignedItems player;
player addItemToUniform "ACE_Kestrel4500";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_DAGR";
player addItemToUniform "ACE_ATragMX";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_RangeCard";
for "_i" from 1 to 4 do {player addItemToVest "ACE_CableTie";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShellRed";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShellGreen";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_tourniquet";};
player addItemToBackpack "ACE_SpottingScope";
player addItemToBackpack "ACE_surgicalKit";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_salineIV";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_packingBandage";};
for "_i" from 1 to 6 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 6 do {player addItemToBackpack "ACE_epinephrine";};
player addItemToBackpack "ACE_Banana";
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_quikclot";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_IR_Strobe_Item";};
player addItemToBackpack "NVGoggles_OPFOR";
player addWeapon "ACE_VectorDay";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "tf_microdagr";
player linkItem "tf_anprc152_1";
player linkItem "ItemGPS";
[] call life_fnc_saveGear;
hint format ["%1 you have loaded the Spotter Loadout",player ]