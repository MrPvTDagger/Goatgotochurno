// by ALIAS
// STORM SCRIPT 
// Tutorial: https://www.youtube.com/user/aliascartoons


================================================================================================================================
>>>>> MONSOON Parameters =======================
================================================================================================================================

null = [direction_monsoon, duration_monsoon, effect_on_objects] execvm "AL_monsoon\al_monsoon.sqf";

direction_monsoon	- integer, from 0 to 360, direction towards the wind blows expressed in compass degrees
duration_monsoon	- integer, life time of the monsoon expressed in seconds
effect_on_objects	- boolean, if is true occasionally a random object will be thrown in the air