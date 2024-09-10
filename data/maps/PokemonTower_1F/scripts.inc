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
.string "Soy una exorcista, siento la\n"
.string "presencia de espíritus malvados en\l"
.string "lo alto de esta torre{PAUSE 5}…{PAUSE 5}$"



PokemonTower1F_2::
lock     
faceplayer     
msgbox PokemonTower1F_Text_2, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_2:
.string "La TORRE POKÉMON fue construida en\n"
.string "memoria de los POKÉMON que\l"
.string "fallecieron.$"



PokemonTower1F_3::
lock     
faceplayer     
msgbox PokemonTower1F_Text_3, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_3:
.string "Mi GROWLITHE…\n"
.string "¿Por qué moriste?$"



PokemonTower1F_4::
lock     
faceplayer     
msgbox PokemonTower1F_Text_4, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_4:
.string "¿Un ROCKET presentando sus\n"
.string "respetos a los difuntos?\l"
.string "¡Nadie se cree ese cuento!$"



PokemonTower1F_5::
lock     
faceplayer     
msgbox PokemonTower1F_Text_5, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_5:
.string "¡No tenéis ni respeto, ni memoria,\n"
.string "ni vergüenza!\l"
.string "¡Sucios criminales!$"

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
setvar VAR_UNUSED_0x40F9, 2
release
end

PokemonTower1F_Agatha_Move_5:
face_right
step_end

PokemonTower1F_Agatha_Move_3:
face_up
step_end

PokemonTower1F_Agatha_Move_4:
walk_in_place_up
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
	.string "La historia de TORRE POKÉMON es casi\n"
	.string "tan antigua como la propia KANTO.$"

PokemonTower1F_Agatha_Texto_2:
	.string "Su resistencia al paso del tiempo es\n"
	.string "admirable, pero la realidad es que solo\l"
	.string "vemos una fracción de todo lo que este\l"
	.string "lugar fue.$"

PokemonTower1F_Agatha_Texto_3:
	.string "En eso puedo ayudarte. Antes de la\n"
	.string "guerra los pisos subterráneos estaban\l"
	.string "abiertos al público, pero…$"

PokemonTower1F_Agatha_Texto_4:
	.string "Esas zonas se volvieron cada vez más y\n"
	.string "más inestables, hasta el punto de que\l"
	.string "fueron cerradas.$"

PokemonTower1F_Agatha_Texto_5:
	.string "Con el paso de los años, muchos se\n"
	.string "olvidaron de su existencia.$"

PokemonTower1F_Agatha_Texto_6:
	.string "A día de hoy, incluso las exorcistas\n"
	.string "evitan entrar.$"

PokemonTower1F_Agatha_Texto_7:
	.string "Pero tú… tú eres el CAMPEÓN. Te has\n"
	.string "ganado el derecho a desvelar todo\l"
	.string "secreto cuanto se te cruce.$"

PokemonTower1F_Agatha_Texto_8:
	.string "Si pones atención, verás que este pilar\n"
	.string "está hueco. Debajo hay unas escaleras\l"
	.string "que conducen al sótano.$"

PokemonTower1F_Agatha_Texto_9:
	.string "Yo me retiro, {PLAYER}.$"

PokemonTower1F_Agatha_Texto_10:
	.string "A mi edad, estos misterios\n"
	.string "ya me quedan grandes.$"

PokemonTower1F_Agatha_Texto_11:
	.string "Y, honestamente, prefiero centrarme en\n"
	.string "añadir nuevos matices a lo que ya sé.$"

PokemonTower1F_Agatha_Texto_12:
	.string "Después de todo, vivimos confinados en\n"
	.string "una pequeña parcela, ya de por sí\l"
	.string "inabarcable. ¡Jo, jo, jo!$"

PokemonTower1F_Activador_Entrada::
compare VAR_UNUSED_0x40F9, 2
goto_if_gt PokemonTower1F_Activador_Entrada_Pasa
release
end

PokemonTower1F_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox PokemonTower1F_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_POKEMON_TOWER_S1, 20, 8
release
end

PokemonTower1F_Activador_Entrada_Pasa_Text_YesNo:
	.string "Este pilar está hueco. Debajo hay unas\n"
	.string "escaleras que llevan a pisos inferiores.\l"
	.string "¿Quieres pasar?$"

