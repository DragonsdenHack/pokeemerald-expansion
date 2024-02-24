MtEmber_B5F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, MtEmber_B5F_OnFrame
	.byte 0

MtEmber_B5F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 97, MtEmber_B5F_Encuentro_Magno
	.2byte 0

MtEmber1FPath_3::
lock
faceplayer
msgbox MtEmber1FPath_3_Texto_1 MSGBOX_NPC
release
end

MtEmber1FPath_3_Texto_1:
	.string "There's no turning back; soon the world\n"
	.string "will witness the power of GROUDON, and\l"
	.string "you'll be just another spectator.$"

MtEmber_B5F_Encuentro_Magno::
lock
setmetatile 7, 3, 0x2D9, FALSE
setmetatile 7, 2, 0x299, TRUE
setmetatile 7, 1, 0x2C4, TRUE
special DrawWholeMapView
applymovement OBJ_EVENT_ID_PLAYER, MtEmber_B5F_Encuentro_Magno_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtEmber_B5F_Encuentro_Magno_Move_2
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MtEmber_B5F_Encuentro_Magno_Move_3
waitmovement 0x0
special RemoveCameraObject
playse MUS_ENCOUNTER_MAGMA
msgbox MtEmber_B5F_Encuentro_Magno_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox MtEmber_B5F_Encuentro_Magno_Texto_2 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_4
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 1
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_4.1
waitmovement 0x0
delay 15
msgbox MtEmber_B5F_Encuentro_Magno_Texto_3 MSGBOX_AUTOCLOSE
msgbox MtEmber_B5F_Encuentro_Magno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_5
waitmovement 0x0
msgbox MtEmber_B5F_Encuentro_Magno_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_5
waitmovement 0x0
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 7, 4, 0
waitfieldeffect FLDEFF_SPARKLE
playfanfare MUS_AWAKEN_LEGEND
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
delay 75
removeobject 1
waitfanfare
playse SE_BANG
setmetatile 7, 3, 0x284, FALSE
setmetatile 7, 2, 0x294, FALSE
setmetatile 7, 1, 0x28C, TRUE
special DrawWholeMapView
delay 25
playse SE_PIN
applymovement 2, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 3, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 5, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 6, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 7, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 8, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 9, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 10, MtEmber_B5F_Encuentro_Magno_Move_2
waitmovement 0x0
delay 40
msgbox MtEmber_B5F_Encuentro_Magno_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_5
waitmovement 0x0
msgbox MtEmber_B5F_Encuentro_Magno_Texto_6.1 MSGBOX_AUTOCLOSE
applymovement 9, MtEmber_B5F_Encuentro_Magno_Move_14
waitmovement 0x0
playse SE_EXIT
removeobject 9
applymovement 8, MtEmber_B5F_Encuentro_Magno_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 8
applymovement 10, MtEmber_B5F_Encuentro_Magno_Move_16
waitmovement 0x0
playse SE_EXIT
removeobject 10
applymovement 7, MtEmber_B5F_Encuentro_Magno_Move_17
waitmovement 0x0
playse SE_EXIT
removeobject 7
applymovement 6, MtEmber_B5F_Encuentro_Magno_Move_18
waitmovement 0x0
playse SE_EXIT
removeobject 6
applymovement 5, MtEmber_B5F_Encuentro_Magno_Move_19
waitmovement 0x0
playse SE_EXIT
removeobject 5
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MtEmber_B5F_Encuentro_Magno_Move_6
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, MtEmber_B5F_Encuentro_Magno_Move_7
waitmovement 0x0
playse SE_PIN
applymovement 2, MtEmber_B5F_Encuentro_Magno_Move_8
applymovement 3, MtEmber_B5F_Encuentro_Magno_Move_8
waitmovement 0x0
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_9
waitmovement 0x0
msgbox MtEmber_B5F_Encuentro_Magno_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, MtEmber_B5F_Encuentro_Magno_Move_10
waitmovement 0x0
msgbox MtEmber_B5F_Encuentro_Magno_Texto_8 MSGBOX_AUTOCLOSE
msgbox MtEmber_B5F_Encuentro_Magno_Texto_9 MSGBOX_AUTOCLOSE
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_11
waitmovement 0x0
setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
removeobject 4
playse SE_EXIT
applymovement 3, MtEmber_B5F_Encuentro_Magno_Move_12
waitmovement 0x0
removeobject 3
playse SE_EXIT
applymovement 2, MtEmber_B5F_Encuentro_Magno_Move_13
waitmovement 0x0
msgbox MtEmber_B5F_Encuentro_Magno_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_DANA, MtEmber_B5F_Encuentro_Magno_Texto_11
msgbox MtEmber_B5F_Encuentro_Magno_Texto_12 MSGBOX_AUTOCLOSE                         
clearflag FLAG_HIDE_LEGEND_MON_CAVE_OF_ORIGIN                      
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE                           
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE                            
clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE                   
clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE                   
clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD                       
clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS             
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER              
clearflag FLAG_HIDE_GRANITE_CAVE_STEVEN                            
clearflag FLAG_HIDE_ROUTE_128_STEVEN                              
clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY                      
clearflag FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT            
clearflag FLAG_HIDE_ROUTE_110_BIRCH                                 
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA    
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1                            
clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN                     
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN             
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO                      
clearflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY                    
clearflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST                          
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT                 
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE                    
clearflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD  
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW                        
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL        
clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP                  
clearflag FLAG_HIDE_ROUTE_119_RIVAL                                 
clearflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS                       
clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON                        
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS                        
clearflag FLAG_HIDE_SKY_PILLAR_WALLACE                              
clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE                            
clearflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS                    
clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE                    
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL                   
clearflag FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL                          
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA        
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN            
setvar VAR_UNUSED_0x40F7, 98
release
end


MtEmber_B5F_Encuentro_Magno_Move_19:
walk_up
walk_up
walk_right
walk_right
face_up
step_end

MtEmber_B5F_Encuentro_Magno_Move_18:
walk_up
walk_up
walk_left
walk_left
face_up
step_end

MtEmber_B5F_Encuentro_Magno_Move_17:
walk_up
walk_right
walk_right
face_up
step_end

MtEmber_B5F_Encuentro_Magno_Move_16:
walk_up
walk_left
walk_left
face_up
step_end

MtEmber_B5F_Encuentro_Magno_Move_14:
walk_left
walk_left
face_up
step_end

MtEmber_B5F_Encuentro_Magno_Move_15:
walk_right
walk_right
face_up
step_end

MtEmber_B5F_Encuentro_Magno_Texto_1:
	.string "MAXIE: This is the place, the location\n"
	.string "of the RUBY doesn't deceive, behind\l"
	.string "these walls rests GROUDON.$"

MtEmber_B5F_Encuentro_Magno_Texto_2:
.string "...$"

MtEmber_B5F_Encuentro_Magno_Texto_3:
	.string "That foolish scientist from this\n"
	.string "island's POKÉMON CENTER, named CELIO\l"
	.string "wanted, to obtain the RUBY to use it in\l"
	.string "that crude project of interregional\l"
	.string "connection. Such sacrilege would only\l"
	.string "have matched by his ignorance.$"

MtEmber_B5F_Encuentro_Magno_Texto_4:
	.string "Fortunately, this RUBY has fallen into\n"
	.string "the right hands; we will give it the true\l"
	.string "use, the purpose, for which it was\l"
	.string "created. Watch!$"

MtEmber_B5F_Encuentro_Magno_Texto_5:
	.string "If we combine both objects, the RED ORB\n"
	.string "and the RUBY, within this place, the\l"
	.string "reaction is as follows...$"

MtEmber_B5F_Encuentro_Magno_Texto_6:
	.string "At last, GROUDON, there's not much time\n"
	.string "left; your power has been restrained\l"
	.string "for a long time, but no more...$"

MtEmber_B5F_Encuentro_Magno_Texto_6.1:
	.string "All inside, now!$"

MtEmber_B5F_Encuentro_Magno_Texto_7:
	.string "MAXIE: You again, I warned you once,\n"
	.string "and I won't do it again. I have more\l"
	.string "important things to do than deal with\l"
	.string "you. HIGH RANK KAREN! Don't let him go\l"
	.string "past this point!$"

MtEmber_B5F_Encuentro_Magno_Texto_8:
	.string "HR.KAREN: I won't let him touch you, sir.$"

MtEmber_B5F_Encuentro_Magno_Texto_9:
	.string "MAXIE: You stay there, GROUDON awaits,\n"
	.string "even if you could get to me, by the time\l"
	.string "you do, it would already be too late.$"

MtEmber_B5F_Encuentro_Magno_Texto_10:
	.string "Everything has gone as planned; at this\n"
	.string "point, no one can do anything to\l"
	.string "prevent GROUDON's awakening. You have\l"
	.string "two options: either run away from here\l"
	.string "before everything explodes, or be the\l"
	.string "first to become cannon fodder when\l"
	.string "GROUDON wakes up!$"

MtEmber_B5F_Encuentro_Magno_Texto_11:
	.string "My defeat has ensured our final\n"
	.string "victory.$"

MtEmber_B5F_Encuentro_Magno_Texto_12:
	.string "There's no turning back; soon the world\n"
	.string "will witness the power of GROUDON, and\l"
	.string "you'll be just another spectator.$"

MtEmber_B5F_Encuentro_Magno_Move_1:
face_left
step_end

MtEmber_B5F_Encuentro_Magno_Move_2:
emote_exclamation_mark
step_end

MtEmber_B5F_Encuentro_Magno_Move_3:
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
step_end

MtEmber_B5F_Encuentro_Magno_Move_4:
walk_up
step_end

MtEmber_B5F_Encuentro_Magno_Move_4.1:
walk_down
walk_in_place_up
step_end

MtEmber_B5F_Encuentro_Magno_Move_5:
walk_in_place_up
step_end

MtEmber_B5F_Encuentro_Magno_Move_6:
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
step_end

MtEmber_B5F_Encuentro_Magno_Move_7:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_left
walk_in_place_up
step_end

MtEmber_B5F_Encuentro_Magno_Move_8:
emote_exclamation_mark
face_down
step_end

MtEmber_B5F_Encuentro_Magno_Move_9:
face_down
step_end

MtEmber_B5F_Encuentro_Magno_Move_10:
walk_left
walk_in_place_down
step_end

MtEmber_B5F_Encuentro_Magno_Move_11:
walk_up
face_up
step_end

MtEmber_B5F_Encuentro_Magno_Move_12:
walk_up
walk_right
walk_up
step_end

MtEmber_B5F_Encuentro_Magno_Move_13:
walk_in_place_down
step_end
