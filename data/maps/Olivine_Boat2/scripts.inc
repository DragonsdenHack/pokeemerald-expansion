Olivine_Boat2_MapScripts::
	.byte 0

OlivineBoat2_1::
lock         
msgbox OlivineBoat2_Text_1, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_1:
	.string "Can we stop talking about\n"
	.string "FIGHTING-TYPE just for a moment? Have\l"
	.string "you seen WEEZING? With that DEFENSE,\l"
	.string "it withstands all your attacks.$"



OlivineBoat2_2::
lock        
msgbox OlivineBoat2_Text_2, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_2:
	.string "They said that CHUCK would come to the\n"
	.string "party. I knew it. He's probably training\l"
	.string "right now.$"



OlivineBoat2_3::
lock        
msgbox OlivineBoat2_Text_3, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_3:
	.string "ROXANNE's ACADEMY? How boring! I'd\n"
	.string "rather the SILPH scientists teach me!\l"
	.string "They really know about strong POKÉMON\l"
	.string "and how to manipulate them! Just look\l"
	.string "at BILL!$"



OlivineBoat2_4::
lock        
msgbox OlivineBoat2_Text_4, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_4:
	.string "Fifty years ago, in this city, there were\n"
	.string "no more than four or five families of\l"
	.string "humble fishermen. Look at us now.$"



OlivineBoat2_5::
lock         
msgbox OlivineBoat2_Text_5, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_5:
	.string "How OLIVINE CITY has changed. And what\n"
	.string "we have yet to see. Isn't that right,\l"
	.string "dear?$"



OlivineBoat2_6::
lock       
msgbox OlivineBoat2_Text_6, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_6:
	.string "Have you heard? In a couple of months,\n"
	.string "the OLIVINE-SLATEPORT line will be\l"
	.string "ready. You'll go to RUSTBORO CITY to\l"
	.string "study in ROXANNE's ACADEMY.$"



OlivineBoat2_7::
lock     
faceplayer   
msgbox OlivineBoat2_Text_7, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_7:
	.string "Do you know about the WHIRL ISLANDS?\n"
	.string "Ships avoid getting close to them, not\l"
	.string "only because of all the rocks that\l"
	.string "protrude from the surface, but also\l"
	.string "because of the strong tides that\l"
	.string "surround them.$"



OlivineBoat2_8::
lock     
faceplayer     
msgbox OlivineBoat2_Text_8, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_8:
	.string "The CAPTAIN is at the ceremony\n"
	.string "starting the expansion of the PORT to\l"
	.string "other regions. Until he returns, nobody\l"
	.string "can enter his cabin.$"



OlivineBoat2_9::
end



OlivineBoat2_10::
lock     
faceplayer     
msgbox OlivineBoat2_Text_10, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_10:
.string "There is an agreement indeed, though\n"
.string "you won't benefit from it.\l"
.string "I always win, one way or another.\l"
.string "…\l"
.string "…\l"
.string "Oh, sorry, I thought you\l"
.string "were someone else.$"



OlivineBoat2_11::
end



OlivineBoat2_12::
lock     
faceplayer     
msgbox OlivineBoat2_Text_12, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_12:
	.string "After establishing a permanent\n"
	.string "connection with VERMILLION CITY, we\l"
	.string "will establish the connection with\l"
	.string "SLATEPORT CITY in HOENN. NORMAN and\l"
	.string "his family will move there as soon as\l"
	.string "the connection is available.$"



OlivineBoat2_13::
lock     
faceplayer     
msgbox OlivineBoat2_Text_13, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_13:
	.string "I know. A BUG CATCHER like me has\n"
	.string "nothing to do in a place like this. I only\l"
	.string "came because there are some rumors\l"
	.string "that the CAPTAIN has an extremely\l"
	.string "strange BUG-TYPE POKEMON in his team.\l"
	.string "Do you have a problem?$"



OlivineBoat2_14::
end



OlivineBoat2_EventScript_Rico::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_8, OlivineBoat2_Text_RicoIntro, OlivineBoat2_Text_RicoDefeated
	msgbox OlivineBoat2_Text_RicoPostBattle, MSGBOX_AUTOCLOSE
	end



OlivineBoat2_EventScript_Marinero::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_9, OlivineBoat2_Text_MarineroIntro, OlivineBoat2_Text_MarineroDefeated
	msgbox OlivineBoat2_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end



OlivineBoat2_EventScript_Guay::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_10, OlivineBoat2_Text_GuayIntro, OlivineBoat2_Text_GuayDefeated
	msgbox OlivineBoat2_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end

Olivine_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
msgbox Olivine_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 145
setflag FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1           
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2
clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN  
clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
clearflag FLAG_HIDE_FALLORBOR_POKEMON_CENTER_LANETTE
clearflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
clearflag FLAG_HIDE_ROUTE_111_PLAYER_DESCENT
clearflag FLAG_HIDE_ROUTE_111_DESERT_FOSSIL
clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
clearflag FLAG_HIDE_RUSTURF_TUNNEL_BRINEY
clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
clearflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
clearflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
clearflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1
clearflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2
clearflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
clearflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
clearflag FLAG_HIDE_BATTLE_TOWER_OPPONENT
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
clearflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
clearflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2
release
end

Olivine_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: So you've defeated four of\n"
	.string "the eight LEADERS, huh, {PLAYER}?\l"
	.string "We've analyzed the data of the OLIVINE\l"
	.string "LEADER's SKARMORY: they are\l"
	.string "astonishing. Its PHYSICAL DEFENSE,\l"
	.string "despite being FLYING TYPE, is close to\l"
	.string "CLOYSTER's. Not to mention its immunity\l"
	.string "to the ELECTRIC TYPE-according to our\l"
	.string "scientists-due to the stainless steel\l"
	.string "layer that covers it. … … I'm on my way to\l"
	.string "GOLDENROD, {PLAYER}. I'll be busy\l"
	.string "sorting out the meeting at RADIO TOWER,\l"
	.string "but I'll send someone to inform you when\l"
	.string "you must be present in GOLDENROD.\l"
	.string "That's all for now. There's another GYM in\l"
	.string "CIANWOOD. Maybe you'll find another\l"
	.string "DEEP BOND POKÉMON there.$"
