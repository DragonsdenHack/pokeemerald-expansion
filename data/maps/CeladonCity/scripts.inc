CeladonCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonCity_Frame
	.byte 0

CeladonCity_OnTransition::
setflag FLAG_VISITED_CELADON_CITY
end

CeladonCity_Frame:
map_script_2 VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 0,CeladonCity3
.2byte 0

CeladonCity1::
end


CeladonCity2::
end


CeladonCity3::
setvar VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT,1 
special Special_DoPlayerNamingScreen
waitstate
callnative ForcedSaveGame
waitstate  
end

CeladonCity3_1::
lock     
faceplayer
msgbox CeladonCity_Text3, MSGBOX_DEFAULT
release
end

CeladonCity_Text3:
.string "This is my trusted pal, POLIWRATH.\p"
    .string "It evolved from a POLIWHIRL when\n"
    .string "I used a WATER STONE.$"

CeladonCity4::
lock     
faceplayer     
msgbox CeladonCity_Text4, MSGBOX_DEFAULT
release 
end

CeladonCity_Text4:
.string "We will destroy all who dares to stand in\n"
	.string "our way!$"


CeladonCity5::
lock     
faceplayer     
msgbox CeladonCity_Text5, MSGBOX_DEFAULT
release     
end

CeladonCity_Text5:
.string "Ahem… Wouldn't you have been the funny\n"
	.string "one who stole a copy of SCOPE SILPH\l"
	.string "from us, right?$"


CeladonCity6::
end


CeladonCity7::
lock     
faceplayer     
msgbox CeladonCity_Text7, MSGBOX_DEFAULT
release     
end

CeladonCity_Text7:
.string "What 's up, comrade?\n"
.string "A lot of hustle from those missions?$"


CeladonCity8::
lock     
faceplayer     
msgbox CeladonCity_Text8, MSGBOX_DEFAULT
release     
end

CeladonCity_Text8:
.string "Moan…\n"
    .string "I blew it all at the slots!\p"
    .string "I knew I should have cashed in my\n"
    .string "COINS for prizes!$"


CeladonCity9::
end


CeladonCity10::
lock     
faceplayer     
msgbox CeladonCity_Text10, MSGBOX_DEFAULT
release     
end

CeladonCity_Text10:
.string "Aaaagh, ow…\n"
    .string "I scalded my tongue!\p"
    .string "This nice old lady in the MANSION\n"
    .string "gave me some TEA.\p"
    .string "But it was boiling hot!\n"
    .string "Gotta cool it to drink it.$"


CeladonCity11::
end


CeladonCity12::
lock
msgbox CeladonCity12_Texto_1, MSGBOX_DEFAULT
release
end

CeladonCity12_Texto_1:
.string "Heheh! This GYM is great!\n"
    .string "It's full of women!$"


CeladonCity13::
lock     
faceplayer     
msgbox CeladonCity_Text13, MSGBOX_DEFAULT
release     
end

CeladonCity_Text13:
.string "I got my KOFFING in CINNABAR.\p"
    .string "It's usually nice, but it breathes\n"
    .string "poison when it's angry.$"


CeladonCity14::
lock     
faceplayer     
msgbox CeladonCity_Text14, MSGBOX_DEFAULT
release     
end

CeladonCity_Text14:
.string "Nobody wants you here ROCKET. You are\n"
	.string "destroying with your stupid CASINO all\l"
	.string "our attempts to keep this city clean!$"



CeladonCityDocumento_100::
msgbox CeladonCityDocumento_Text_100, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_100:
 .string "CELADON CITY POKÉMON GYM\n"
    .string "LEADER: ERIKA\l"
    .string "The Nature-Loving Princess!$"



CeladonCityDocumento_101::
msgbox CeladonCityDocumento_Text_101, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_101:
.string "Find what you need at the\n"
    .string "CELADON DEPT. STORE!$"



CeladonCityDocumento_102::
msgbox CeladonCityDocumento_Text_102, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_102:
	.string "CELADON CITY\n"
    .string "The City of Rainbow Dreams$"



CeladonCityDocumento_103::
msgbox CeladonCityDocumento_Text_103, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_103:
.string "CELADON MANSION$"



CeladonCityDocumento_104::
msgbox CeladonCityDocumento_Text_104, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_104:
.string "TRAINER TIPS\p"
    .string "GUARD SPEC. protects POKÉMON\n"
    .string "from status-reduction moves during\l"
    .string "battle.\p"
    .string "Get your items at the\n"
    .string "CELADON DEPT. STORE!$"



CeladonCityDocumento_105::
msgbox CeladonCityDocumento_Text_105, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_105:
.string "ROCKET GAME CORNER\n"
    .string "The playground for grown-ups!$"



CeladonCityDocumento_106::
msgbox CeladonCityDocumento_Text_106, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_106:
.string "COINS exchanged for prizes!\n"
    .string "PRIZE EXCHANGE$"



CeladonCityDocumento_107::
msgbox CeladonCityDocumento_Text_107, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_107:
.string "TRAINER TIPS\p"
    .string "X ACCURACY boosts the accuracy of\n"
    .string "techniques.\p"
    .string "DIRE HIT jacks up the likelihood\n"
    .string "of critical hits.\p"
    .string "Get your items at the CELADON\n"
    .string "DEPT. STORE!$"

Barrera_Tiendas::
compare VAR_UNUSED_0x40F7, 30
goto_if_lt Barrera_Tiendas_2
compare VAR_UNUSED_0x40F7, 94
goto_if_gt Barrera_Tiendas_2
applymovement OBJ_EVENT_ID_PLAYER, Barrera_Tiendas_Move_1
waitmovement 0x0
msgbox Barrera_Tiendas_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Barrera_Tiendas_Move_2
waitmovement 0x0
release
end

Barrera_Tiendas_Texto_1:
.string "(ROCKETS are forbidden to buy articles\n"
	.string "on KANTO public markets. It's better not\l"
	.string "to tempt luck.)$"

Barrera_Tiendas_2::
release
end

Barrera_Tiendas_Move_1:
walk_in_place_up
step_end

Barrera_Tiendas_Move_2:
walk_slow_down
step_end

CeladonCity_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE124_STATE, 0
goto_if_gt CeladonCity_Entrenador_Especial_3
msgbox CeladonCity_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox CeladonCity_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt CeladonCity_Entrenador_Especial_2
msgbox CeladonCity_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

CeladonCity_Entrenador_Especial_2::
msgbox CeladonCity_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox CeladonCity_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CeladonCity_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox CeladonCity_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LLAMASFERA, CeladonCity_Entrenador_Especial_Texto_8
msgbox CeladonCity_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_FLAME_ORB
msgbox CeladonCity_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox CeladonCity_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE124_STATE, 1
release
end


CeladonCity_Entrenador_Especial_2_No::
msgbox CeladonCity_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end


CeladonCity_Entrenador_Especial_3::
msgbox CeladonCity_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end

CeladonCity_Entrenador_Especial_Texto_1.1:
.string "You obtained FLAME ORB from OLD MAN!$"

CeladonCity_Entrenador_Especial_Texto_1:
.string "Pollution in CELADON is getting worse,\n"
	.string "something underground must be the\l"
	.string "problem. If my grandson got back here\l"
	.string "and saw the situation… Ah, I wish I\l"
	.string "could remember the good ol' days with a\l"
	.string "true combat.$"

CeladonCity_Entrenador_Especial_Texto_2:
.string "...\n"
	.string "...$"

CeladonCity_Entrenador_Especial_Texto_3:
.string "No, I don't think my POKÉMON could even\n"
	.string "warm-up with yours.$"

CeladonCity_Entrenador_Especial_Texto_4:
	.string "The FLAME ORB automatically burns the\n"
	.string "POKÉMON that holds it, unless the\l"
	.string "POKÉMON is a FIRE type or has the\l"
	.string "ability WATER VEIL. It might seem\l"
	.string "useless, but those POKÉMON with the\l"
	.string "ability GUTS will become a threat. If\l"
	.string "you combine it with FACADE, you'll\l"
	.string "create a unique offensive combo!$"

CeladonCity_Entrenador_Especial_Texto_5:
	.string "Wow! Trainers with all the BADGES don't\n"
	.string "come by every day! You must have a\l"
	.string "formidable team. If you honor me with a\l"
	.string "battle and manage to defeat me, I'll\l"
	.string "give you helpful stuff.$"

CeladonCity_Entrenador_Especial_Texto_6:
.string "So, do you accept the challenge?$"

CeladonCity_Entrenador_Especial_Texto_7:
	.string "I'll see if the young trainers from\n"
	.string "KANTO are as good as they used to be!$"

CeladonCity_Entrenador_Especial_Texto_8:
.string "Yes, you have something special, guy.\n"
	.string "I hope you get far.$"

CeladonCity_Entrenador_Especial_Texto_9:
	.string "I wish my grandson reach your level\n"
	.string "sooner or later; take this, you'll make a\l"
	.string "good use of it.$"

CeladonCity_Entrenador_Especial_Texto_10:
.string "Refusing combat to an old man…\n"
	.string "Who'd have told it…$"
