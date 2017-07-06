// by ALIAS
// SNOW STORM SCRIPT DEMO- For vanilla terrains
// Tutorial: https://www.youtube.com/user/aliascartoons

/*
================================================================================================================================
>>>>> SNOW STORM Parameters =======================
================================================================================================================================

null = [direction_storm,duration_storm,effect_on_objects,ambient_sounds_al,breath_vapors] execvm "AL_snowstorm\al_snow.sqf";

direction_storm		- integer, from 0 to 360, direction towards the wind blows expressed in compass degrees
duration_storm		- integer, life time of the SNOW STORM expressed in seconds
effect_on_objects	- boolean, if is true occasionally a random object will be thrown in the air
ambient_sounds_al	- seconds/number, a random number will be generated based on your input value and used to set the frequency for played ambient sounds
					- also determines interval at which snow gusts are generated
					- i recommend a value of 120 or higher
breath_vapors		- boolean, if true you will see breath vapors for all units, however if you have many units in your mission you should set this false to diminish the impact on frames
*/

>>>>>>>>>> EXAMPLE

// without breath vapors
null = [80,240,false,40,false] execvm "AL_snowstorm\al_snow.sqf";


// with breath vapors
null = [80,240,false,40,true] execvm "AL_snowstorm\al_snow.sqf";