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
.string "I am a CHANNELER.\p"
    .string "There are spirits up to mischief.\n"
    .string "I sense them high in the TOWER.$"



PokemonTower1F_2::
lock     
faceplayer     
msgbox PokemonTower1F_Text_2, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_2:
.string "POKÉMON TOWER was erected in the\n"
    .string "memory of POKÉMON that died.$"



PokemonTower1F_3::
lock     
faceplayer     
msgbox PokemonTower1F_Text_3, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_3:
.string "My GROWLITHE…\n"
    .string "Why did you die?$"



PokemonTower1F_4::
lock     
faceplayer     
msgbox PokemonTower1F_Text_4, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_4:
	.string "A ROCKET paying respects to the\n"
	.string "departed? No one buys that story!$"



PokemonTower1F_5::
lock     
faceplayer     
msgbox PokemonTower1F_Text_5, MSGBOX_DEFAULT
release     
end

PokemonTower1F_Text_5:
	.string "You have no respect, nor memory, nor\n"
	.string "shame! Dirty criminals!$"

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
