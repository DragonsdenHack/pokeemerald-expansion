SkyPillar_4F_MapScripts::
	@map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_4F_SetHoleWarp
	.byte 0

SkyPillar_4F_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_SKY_PILLAR_3F
	end

