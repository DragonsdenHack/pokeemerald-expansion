PokemonTower_1F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, PokemonTower_1F_OnResume
	.byte 0

PokemonTower_1F_OnResume:
	call PokemonTower_1F_SetupEscapeWarp
	end

PokemonTower_1F_SetupEscapeWarp::
	setescapewarp MAP_LAVENDER_TOWN, 18, 7
	return

PokemonTower1F_1::
lock     
faceplayer     
msgbox PokemonTower1F_Text_1, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_1:
.string "Ich bin eine EXORZISTIN!\p"
    .string "Die Geister hier stiften Unruhe!$"



PokemonTower1F_2::
lock     
faceplayer     
msgbox PokemonTower1F_Text_2, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_2:
	.string "Der POKéMON-TURM wurde im Andenken\n"
	.string "an verblichene POKéMON errichtet.$"



PokemonTower1F_3::
lock     
faceplayer     
msgbox PokemonTower1F_Text_3, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_3:
.string "FUKANO…\n"
    .string "Warum hast du mich verlassen?$"



PokemonTower1F_4::
lock     
faceplayer     
msgbox PokemonTower1F_Text_4, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_4:
	.string "Einer von TEAM ROCKET, der den\n"
	.string "Verstorbenen Respekt zollt?\p"
	.string "Das kauft dir keiner ab!$"



PokemonTower1F_5::
lock     
faceplayer     
msgbox PokemonTower1F_Text_5, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_5:
	.string "Ihr besitzt weder Respekt, noch\n"
	.string "Anstand oder Scham! Dreckige\l"
	.string "Verbrecher!$"

PokemonTower_1F_SetFlags::
lock
setflag FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY
clearflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM               
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM                
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM                    
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM      
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK              
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK 
clearflag FLAG_HIDE_MAUVILLE_CITY_SCOTT                               
clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT                            
clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT                 
clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE                       
clearflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE                     
clearflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE                         
clearflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE                        
clearflag FLAG_HIDE_PETALBURG_GYM_NORMAN
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM          
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM              
clearflag FLAG_HIDE_ROUTE_119_SCOTT                                   
clearflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT                              
clearflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT                              
clearflag FLAG_HIDE_FANCLUB_OLD_LADY                                  
clearflag FLAG_HIDE_FANCLUB_BOY                                       
clearflag FLAG_HIDE_FANCLUB_LITTLE_BOY                                
clearflag FLAG_HIDE_FANCLUB_LADY                                      
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT               
clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL                             
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH                             
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1                          
clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1                          
clearflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1                          
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3 
clearflag FLAG_HIDE_HO_OH                                             
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER                    
clearflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER                   
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLY                               
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE                        
clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY                
clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND                   
clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND     
clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE         
clearflag FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT                           
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL     
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE      
clearflag FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN                     
clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL                               
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL     
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE                           
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL       
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL           
clearflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA                              
clearflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE                        
clearflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE         
clearflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE         
clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA     
clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE                                               
setvar VAR_UNUSED_0x40F7, 45
release
end  

PokemonTower1F_Agatha::
lock
delay 10
msgbox PokemonTower1F_Agatha_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower1F_Agatha_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, PokemonTower1F_Agatha_Move_1
waitmovement 0x0
msgbox PokemonTower1F_Agatha_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, PokemonTower1F_Agatha_Move_2
waitmovement 0x0
msgbox PokemonTower1F_Agatha_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, PokemonTower1F_Agatha_Move_3
waitmovement 0x0
msgbox PokemonTower1F_Agatha_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, PokemonTower1F_Agatha_Move_4
waitmovement 0x0
msgbox PokemonTower1F_Agatha_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PokemonTower1F_Agatha_Move_1
waitmovement 0x0
msgbox PokemonTower1F_Agatha_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, PokemonTower1F_Agatha_Move_3
waitmovement 0x0
msgbox PokemonTower1F_Agatha_Texto_8 MSGBOX_AUTOCLOSE
applymovement 6, PokemonTower1F_Agatha_Move_1
waitmovement 0x0
msgbox PokemonTower1F_Agatha_Texto_9 MSGBOX_AUTOCLOSE
applymovement 6, PokemonTower1F_Agatha_Move_5
waitmovement 0x0
msgbox PokemonTower1F_Agatha_Texto_10 MSGBOX_AUTOCLOSE
applymovement 6, PokemonTower1F_Agatha_Move_1
waitmovement 0x0
msgbox PokemonTower1F_Agatha_Texto_11 MSGBOX_AUTOCLOSE
applymovement 6, PokemonTower1F_Agatha_Move_4
waitmovement 0x0
msgbox PokemonTower1F_Agatha_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_675
fadescreen 1
delay 20
removeobject 6
fadescreen 0
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
setflag FLAG_HOENN_90
setflag FLAG_HOENN_91
setflag FLAG_HOENN_92
setflag FLAG_HOENN_93
setflag FLAG_HOENN_94
setflag FLAG_HOENN_95
setflag FLAG_HOENN_96
setflag FLAG_HOENN_97
setflag FLAG_HOENN_98
setflag FLAG_HOENN_99
clearflag FLAG_HOENN_640
clearflag FLAG_HOENN_641
clearflag FLAG_HOENN_642
clearflag FLAG_HOENN_643
clearflag FLAG_HOENN_644
clearflag FLAG_HOENN_645
clearflag FLAG_HOENN_646
clearflag FLAG_HOENN_647
clearflag FLAG_HOENN_648
clearflag FLAG_HOENN_649
setvar VAR_UNUSED_0x40F8, 13
release
end

PokemonTower1F_Agatha_Move_5:
face_right
step_end

PokemonTower1F_Agatha_Move_3:
face_up
step_end

PokemonTower1F_Agatha_Move_4:
delay_16
face_up
delay_16
step_end

PokemonTower1F_Agatha_Move_2:
delay_16
face_left
delay_16
face_player
delay_16
step_end

PokemonTower1F_Agatha_Move_1:
face_player
step_end

PokemonTower1F_Agatha_Texto_1:
	.string "The history of this tower is as old as\n"
	.string "KANTO itself.$"

PokemonTower1F_Agatha_Texto_2:
	.string "Seine Widerstandsfähigkeit ist\n"
	.string "bemerkenswert, doch in Wahrheit ist\l"
	.string "das, was wir hier sehen, nur ein\l"
	.string "Bruchteil dessen, was er einst war.$"

PokemonTower1F_Agatha_Texto_3:
	.string "Früher, noch vor dem Krieg, waren die\n"
	.string "unteren Etagen für jedermann\l"
	.string "zugänglich. Aber…$"

PokemonTower1F_Agatha_Texto_4:
	.string "Diese Bereiche wurden nach und nach\n"
	.string "instabiler, bis sie schließlich\l"
	.string "geschlossen werden mussten.$"

PokemonTower1F_Agatha_Texto_5:
	.string "Die Jahre vergingen und die meisten\n"
	.string "vergaßen sie schließlich.$"

PokemonTower1F_Agatha_Texto_6:
	.string "Selbst die Exorzistinnen meiden\n"
	.string "mittlerweile diese Bereiche.$"

PokemonTower1F_Agatha_Texto_7:
	.string "Aber du… du bist der CHAMP. Du hast das\n"
	.string "Recht, jedem Geheimnis und Rätsel auf\l"
	.string "den Grund zu gehen, das dir auf deinem\l"
	.string "Weg begegnet.$"

PokemonTower1F_Agatha_Texto_8:
	.string "Wenn du genau hinschaust, wirst du\n"
	.string "erkennen, dass dieser Pfeiler hohl ist.\p"
	.string "Unter ihm findest du eine Treppe, die\n"
	.string "dich nach unten führt.$"

PokemonTower1F_Agatha_Texto_9:
	.string "Nun verlasse ich dich, {PLAYER}.$"

PokemonTower1F_Agatha_Texto_10:
	.string "Wenn du erst mal so alt bist wie ich,\n"
	.string "wirst du verstehen, dass diese Art von\l"
	.string "Dingen nicht für jedermann sind.$"

PokemonTower1F_Agatha_Texto_11:
	.string "Und um ehrlich zu sein, würde ich meine\n"
	.string "Energie lieber darauf verwenden, mich in\l"
	.string "dem zu verbessern, was ich bereits\l"
	.string "beherrsche.$"

PokemonTower1F_Agatha_Texto_12:
	.string "Schließlich existieren wir alle in einer\n"
	.string "begrenzten Sphäre - jedoch in einer,\l"
	.string "die sich nicht so einfach bändigen\l"
	.string "lässt. Ho, ho, ho!$"

PokemonTower1F_Activador_Entrada::
compare VAR_UNUSED_0x40F8, 12
goto_if_gt PokemonTower1F_Activador_Entrada_Pasa
release
end

PokemonTower1F_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower1F_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
delay 10
warp MAP_POKEMON_TOWER_S1, 20, 8
delay 10
release
end

PokemonTower1F_Activador_Entrada_Pasa_Text_YesNo:
	.string "Dieser Pfeiler ist hohl. Unter ihm führt\n"
	.string "eine Treppe zu den unteren\l"
	.string "Stockwerken.\p"
	.string "Möchtest du sie benutzen?$"

PokemonTowerS3_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTowerS3_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox PokemonTowerS3_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
delay 15
warp MAP_LAVENDER_SECTA_PASADIZO_2 , 4, 3
delay 50
release
end

PokemonTowerS3_Activador_Entrada_Pasa_Move_1:
emote_exclamation_mark
step_end

PokemonTowerS3_Activador_Entrada_Pasa_Text_YesNo:
	.string "Dieses Grab verbirgt etwas. Darunter\n"
	.string "führen alte Treppen tiefer hinab.\p"
	.string "Möchtest du sie benutzen?$"

