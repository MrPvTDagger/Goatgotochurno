removeAllItems player;
removeAllAssignedItems player;
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_CableTie";};
player addItemToUniform "ACE_MapTools";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 4 do {player addItemToVest "SmokeShell";};
player addItemToVest "SmokeShellRed";
player addItemToVest "SmokeShellGreen";
player addItemToVest "SmokeShellBlue";
player addItemToVest "ACE_M84";
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 6 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 100 do {player addItemToBackpack "ACE_elasticBandage";};
player addItemToBackpack "ACE_surgicalKit";
player addItemToBackpack "ACE_personalAidKit";
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_salineIV";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_tourniquet";};
player addWeapon "Binocular";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "tf_microdagr";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
[] call life_fnc_saveGear;
hint format ["%1 you have loaded the Medic Loadout",player ]