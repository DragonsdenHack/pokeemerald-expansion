RocketHideout_FiveIsland_Meadow_MapScripts::
	.byte 0



RocketHideoutFiveIslanMeadow23English::
lock
faceplayer
msgbox RocketHideoutFiveIslandMeadow_Text_English, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslanMeadow23Spanish::
lock
faceplayer
msgbox RocketHideoutFiveIslandMeadow_Text_Spanish, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslanMeadow22::     
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_22, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_English:
.string "Text in english.$"

RocketHideoutFiveIslandMeadow_Text_Spanish:
.string "Texto en ingles.$"


RocketHideoutFiveIslandMeadow_Text_22:     
 .string "Take charge of doing your job GRUNT,\n"
    .string "the kind of things that we do here, are\l"
    .string "too complicated for you.$"



RocketHideoutFiveIslanMeadow21:: 
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_21, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_21: 
	.string "Indeed, our CHRONO ISLAND WAREHOUSE has\n"
	.string "this hidden basement. Here, we first\l"
	.string "examine the stolen POKÉMON before\l"
	.string "exporting them to KANTO.$"


RocketHideoutFiveIslanMeadow20:: 
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_20, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_20: 
 .string "Feel lucky, now you will be working for\n"
    .string "TEAM ROCKET!$"



RocketHideoutFiveIslanMeadow19:: 
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_19, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_19: 
.string "Don't you have a job to do? What are you\n"
    .string "waiting for? You are losing efficiency\l"
    .string "and we don't tolerate it here!$"



RocketHideoutFiveIslanMeadow15::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_15, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_15:
.string "…\n"
.string "…\l"
.string "… … (It contains a KINGLER inside,\l"
.string "it's better not to touch it...)$"



RocketHideoutFiveIslanMeadow16::
lock
faceplayer
setflag FLAG_SYS_POKEMON_GET
checkitem ITEM_POKE_BALL
goto_if_eq VAR_RESULT, FALSE, Parte2
msgbox MagikarpNo1, MSGBOX_DEFAULT
release
end

Parte2::
checkitem2 ITEM_POKE_BALL
goto_if_eq VAR_RESULT, FALSE, Parte3
msgbox MagikarpNo2, MSGBOX_DEFAULT
release
end 

Parte3::
checkpcitem ITEM_POKE_BALL
goto_if_eq VAR_RESULT, FALSE, Parte4
msgbox MagikarpNo3, MSGBOX_DEFAULT
release
end

Parte4::
checkpcitem2 ITEM_POKE_BALL
goto_if_eq VAR_RESULT, FALSE, Parte5
msgbox MagikarpNo4, MSGBOX_DEFAULT
release
end

Parte5::
msgbox MagikarpSi_Text, MSGBOX_DEFAULT
giveitem ITEM_POKE_BALL
release
end 


MagikarpSi_Text:
.string "Toma una pokeball"
.string "$"

MagikarpNo1:
.string "¡No te doy nada,\n lo tienes en la mochila!$"

MagikarpNo2:
.string "¡No te doy nada,\n lo tienes equipado!$"

MagikarpNo3:
.string "¡No te doy nada,\n lo tienes en pc!$"

MagikarpNo4:
.string "¡No te doy nada,\n lo tienes en pc equipado!$"


RocketHideoutFiveIslanMeadow17::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_17, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_17:
.string "…\n"
.string "…\l"
.string "… … (It contains a NIDORINO inside,\l"
    .string "it's better not to touch it...)$"




RocketHideoutFiveIslanMeadow12::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_12, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_12:
    .string "A few know that this WAREHOUSE is\n"
    .string "actually our main source of POKEMON\l"
    .string "traffic, we also carry out various\l"
    .string "experiments, although in KANTO we have\l"
    .string "better laboratories, from CHRONO ISLAND\l"
    .string "we got very interesting conclusions\l"
    .string "about the manipulation of radio\l"
    .string "waves, for example...$"


RocketHideoutFiveIslanMeadow10::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_10, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_10: 
    .string "Poor unfortunate recruit… There is\n"
    .string "nothing that irritates our best\l"
    .string "ADMINISTRATOR more than the\l"
    .string "attitudes resulting from law of least\l"
    .string "effort. Did you really expect us to\l"
    .string "give him a DRATINI out of nowhere? We\l"
    .string "are a criminal organization, not an NGO!$"



RocketHideoutFiveIslandMeadowDocumento_100::
msgbox RocketHideoutFiveIslandMeadowDocumento_Text_100, MSGBOX_SIGN   
end

RocketHideoutFiveIslandMeadowDocumento_Text_100:
.string "ROCKETS MORAL CODE\n"
    .string"AND CONDUCT\p"
    .string "1.- My presence in the organization is a\n"
    .string "privilege, not a right, and I must gain\l"
    .string "it in action. 2.- The loyalty and total\l"
    .string "commitment of the organization are\l"
    .string "undeniable. 3.- Insubordination and\l"
    .string "betrayal are sentenced to death. 4.-\l"
    .string "We act as a single body, unity above\l"
    .string "individuality, but also... 5.- Does not\l"
    .string "mean that every ROCKET must have\l"
    .string "their own initiative, an attitude of\l"
    .string "constant search and improvement to\l"
    .string "become a better trainer. 6.- Arrive,\l"
    .string "analyze, adapt and win. 7.- Every\l"
    .string "member of the organization counts,\l"
    .string "from the most basic GRUNT to the\l"
    .string "highest positions, we function as a\l"
    .string "huge mechanism where no one is left\l"
    .string "behind.$"




RocketHideoutFiveIslandMeadowDocumento_101::
msgbox RocketHideoutFiveIslandMeadowDocumento_Text_101, MSGBOX_SIGN   
end

RocketHideoutFiveIslandMeadowDocumento_Text_101:
    .string "...\n"
	.string "...\l"
	.string "… … (It contains a NIDORINO inside,\l"
    .string "it's better not to touch it...)$"




RocketHideoutFiveIslandMeadowDocumento_102::
msgbox RocketHideoutFiveIslandMeadowDocumento_Text_102, MSGBOX_SIGN   
end

RocketHideoutFiveIslandMeadowDocumento_Text_102:
    .string "...\n"
	.string "...\l"
	.string "… … (It contains a RHYHORN inside,\l"
    .string "it's better not to touch it...)$"


RocketHideoutFiveIslanMeadowAbajo::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Movement_Abajo
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Abajo, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_Abajo:     
.string "(Everyone is in their places, I can't\n"
    .string "leave now)$"




RocketHideoutFiveIslanMeadowEnd::
release
end


Movement_Abajo:
walk_down
step_end

RocketHideoutFiveIslanMeadowDerecha::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Movement_Derecha
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Derecha, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_Derecha:     
.string "(Everyone is in their places, I can't\n"
    .string "leave now)$"



Movement_Derecha:
walk_right
step_end

RocketHideoutFiveIslanMeadowIzquierda::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Movement_Izquierda
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Izquierda, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_Izquierda:     
.string "(Everyone is in their places, I can't\n"
    .string "leave now)$"




Movement_Izquierda:
walk_left
step_end

RocketHideoutFiveIslanMeadowAtlas::     
lock     
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd  
setvar VAR_UNUSED_0x40F7, 1
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas, MSGBOX_NPC
applymovement 1, Move1
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas2, MSGBOX_NPC
applymovement 1, Move2
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas3, MSGBOX_NPC
applymovement 5, Move3
applymovement 1, Move4
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas4, MSGBOX_NPC
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas5, MSGBOX_NPC
applymovement 1, Move5
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas6, MSGBOX_NPC
applymovement 1, Move6
waitmovement 0x0
applymovement 23, Move7
applymovement 22, Move7
waitmovement 0x0
applymovement 5, Move8
playse SE_M_VICEGRIP
waitmovement 0x0
applymovement 23, Move9
applymovement 22, Move9
applymovement 5, Move9
waitmovement 0x0

removeobject 5
playse SE_EXIT
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas7, MSGBOX_NPC
applymovement 1, Move10
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas8, MSGBOX_NPC
applymovement 0x1, Move11
waitmovement 0x0
playse SE_EXIT
applymovement 23, Move12
applymovement 22, Move12
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas9, MSGBOX_NPC
waitmovement 0x0
applymovement 13, Move13
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas10, MSGBOX_NPC
applymovement 12, Move14
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas11, MSGBOX_NPC
applymovement 10, Move15
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas12, MSGBOX_NPC
applymovement OBJ_EVENT_ID_PLAYER, Move16
waitmovement 0x0
removeobject 2
removeobject 24
removeobject 4
removeobject 5
removeobject 17
removeobject 6
removeobject 8
removeobject 3
applymovement OBJ_EVENT_ID_PLAYER, Move16b
waitmovement 0x0
setflag FLAG_UNUSED_0x26E
setflag FLAG_UNUSED_0x26F
clearflag FLAG_NUEVA_854
release     
end

RocketHideoutFiveIslandMeadow_Text_Atlas:
.string "ARCHER: Ok, we're all here.$"



RocketHideoutFiveIslandMeadow_Text_Atlas2:
.string "ARCHER: For those who haven't heard,\n"
    .string "you are now part of TEAM ROCKET,\l"
    .string "with everything that means.\l"
    .string "Im ARCHER, GIOVANNI'S right hand, main\l"
    .string "administrator and leader in the SEVII\l"
    .string "ISLANDS.$"

RocketHideoutFiveIslandMeadow_Text_Atlas3:
    .string "Most of you will be inmediately\n"
    .string "transferred to KANTO, do not expect\l"
    .string "friendly treatment from its citizens,\l"
    .string "you will be seen as the scum of the\l"
    .string "region. Meanwhile, let's give you\l"
    .string "your starter pokemon, You belong to\l"
    .string "the fourth platoon, so each of you will\l"
    .string "receive a ZUBAT imported directly from\l"
    .string "MT. MOON. Any questions?$"



RocketHideoutFiveIslandMeadow_Text_Atlas4:
.string "Sir, I couldn't help but see all those\n"
    .string "powerful POKEMON in the background,\l"
    .string "and I was wondering how our leader\l"
    .string "GIOVANNI wants us to perform our role\l"
    .string "in the best possible way, if he doesn't\l"
    .string "give us the appropriate tools to do so?$"
    .string "Not to criticize, but ZUBAT is not\n"
    .string "exactly a good tool, maybe a NIDOR...$"



RocketHideoutFiveIslandMeadow_Text_Atlas5:
    .string "ARCHER: Enough.$"



RocketHideoutFiveIslandMeadow_Text_Atlas6:
    .string "ARCHER: Let's see... You have\n"
    .string "prejudged the decisions of our LEADER\l"
    .string "GIOVANNI, and you are not happy with\l"
    .string "our policy towards new grunts. So...\l"
    .string "there is no reason for you to continue\l"
    .string "belonging to our organization... I hope\l"
    .string "for your sake that you don't say a\l"
    .string "single word about you may have seen\l"
    .string "here. GUARDS!! Take him off the base!$"

RocketHideoutFiveIslandMeadow_Text_Atlas7:
    .string "ARCHER: The last thing TEAM ROCKET\n"
    .string "needs is well-off people claiming\l"
    .string "privileges before they have proven\l"
    .string "anything.$"



RocketHideoutFiveIslandMeadow_Text_Atlas8:
    .string "ARCHER: A ZUBAT, although many of you\n"
    .string "would consider it useless, it can\l"
    .string "become one of the best POKEMON if you\l"
    .string "take care of it, a GOLBAT is a POKEMON\l"
    .string "worthy of a ROCKET ADMIN, and even a\l"
    .string "member of the ELITE 4, AGATHA, has one\l"
    .string "in her posession, a CROBAT is already\l"
    .string "one of the 5 best poison-type POKEMON\l"
    .string "that exist…. Agile as an AERODACTYL,\l"
    .string "resistant and lethal with its SLUDGE\l"
    .string "BOMB, and you are going to reject that\l"
    .string "opportunity because you have to go\l"
    .string "through the process of training a\l"
    .string "ZUBAT first?$"



RocketHideoutFiveIslandMeadow_Text_Atlas9:
.string "Here we will provide you with the initial\n"
    .string "tool from which you will be able to build\l"
    .string "better tools, that's what GIOVANNI\l"
    .string "expects, that you learn to climb\l"
    .string "starting from the lowest, let's start\l"
    .string "with the delivery of your initials.\l"
    .string "GRUNT NUMBER 1!!$"




RocketHideoutFiveIslandMeadow_Text_Atlas10:
.string "GRUNT NUMBER 2!!$"



RocketHideoutFiveIslandMeadow_Text_Atlas11:
.string "GRUNT NUMBER 3!!$"


RocketHideoutFiveIslandMeadow_Text_Atlas12:
.string "GRUNT NUMBER 4!!$"

Move1:
walk_up
walk_up
walk_up
face_left
face_right
face_down
step_end

Move2:
walk_right
walk_up
walk_in_place_slow_down
step_end

Move3:
walk_in_place_slow_down
step_end

Move4:
walk_in_place_up
step_end

Move5:
walk_up
walk_right
walk_right
face_up
step_end

Move6:
walk_left
walk_left
walk_left
face_down
step_end

Move7:
walk_up
walk_up
walk_right
walk_up
walk_up
walk_right
walk_up
walk_up
walk_right
walk_up
face_right
step_end

Move8:
face_Left
delay_4
delay_4
face_right
delay_4
delay_4
jump_in_place_left
step_end

Move9:
delay_1
face_right
delay_2
walk_slow_right
walk_slow_right
walk_slow_right
walk_right
walk_right
walk_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

Move10:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_down
face_left
delay_1
delay_2
delay_4
face_right
delay_1
delay_2
delay_4
walk_in_place_down
step_end



Move11:
walk_slow_down
walk_slow_right
walk_slow_down
face_left
delay_1
delay_2
delay_4
walk_down
walk_down
walk_right
walk_right
face_up
step_end



Move12:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_left
walk_down
walk_down
walk_left
walk_down
walk_down
walk_left
walk_down
walk_down
face_up
step_end



Move13:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_up
walk_slow_up
walk_slow_up
walk_up
walk_up
walk_up
walk_up
walk_right
face_down
step_end



Move14:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_up
walk_slow_up
walk_slow_up
walk_up
walk_up
walk_up
walk_up
walk_left
face_down
step_end



Move15:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_up
walk_slow_up
walk_slow_up
walk_up
walk_up
walk_up
walk_up
walk_right
face_down
step_end

Move16:
walk_down
walk_down
walk_down
walk_down
step_end

Move16b:
walk_down
walk_down
walk_down
step_end



RocketHideoutFiveIslanMeadowIzquierda2::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 1
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Move17
applymovement 1, MoveAbajo
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Vuelveatupuesto, MSGBOX_DEFAULT
applymovement 0x1, MoveArriba
applymovement OBJ_EVENT_ID_PLAYER, Movement_Izquierda
waitmovement 0
release     
end

RocketHideoutFiveIslanMeadowDerecha2::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 1
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Move17
applymovement 1, MoveAbajo
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Vuelveatupuesto, MSGBOX_DEFAULT
applymovement 0x1, MoveArriba
applymovement OBJ_EVENT_ID_PLAYER, Movement_Derecha
waitmovement 0
release     
end

RocketHideoutFiveIslanMeadowAbajo2::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 1
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Move17
applymovement 1, MoveAbajo
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Vuelveatupuesto, MSGBOX_DEFAULT
applymovement 1, MoveArriba
applymovement OBJ_EVENT_ID_PLAYER, Movement_Abajo
waitmovement 0
release     
end

RocketHideoutFiveIslandMeadow_Text_Vuelveatupuesto:     
    .string "GRUNT NUMBER 4!! You're not on the\n"
    .string "blacklist yet and I hope I don't have\l"
    .string "to include you on the first day! Pick up\l"
    .string "your initial, return to your place and\l"
    .string "don't waste any more time!$"



Move17:
walk_in_place_up
step_end

MoveAbajo:
face_down
step_end

MoveArriba:
face_up
step_end


RocketHideoutFiveIslanMeadowZubat::     
lock        
compare VAR_UNUSED_0x40F7, 1
goto_if_gt RocketHideoutFiveIslanMeadowCajaZubat
lock     
setvar VAR_UNUSED_0x40F7, 2
showmonpic SPECIES_ZUBAT, 10, 3  
playmoncry SPECIES_ZUBAT, CRY_MODE_ENCOUNTER 
msgbox Zubat_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Zubat_No
msgbox Zubat_Text_Yes, MSGBOX_DEFAULT
hidemonpic
goto RocketHideoutFiveIslanMeadowPostZubat
release
end

Zubat_No::
msgbox Zubat_Text_No, MSGBOX_DEFAULT
hidemonpic
goto RocketHideoutFiveIslanMeadowPostZubat
release
end

RocketHideoutFiveIslanMeadowPostZubat::
    playfanfare MUS_OBTAIN_TMHM
	msgbox RocketHideoutFiveIslanMeadow_Text_MensajeZubat, MSGBOX_NPC
	givemon SPECIES_ZUBAT, 5, ITEM_NONE
	waitfanfare
	applymovement 1, MovePostZubat1
    applymovement OBJ_EVENT_ID_PLAYER, MovePostZubat2
    waitmovement 0x0
	addobject 7
	removeobject 15
	removeobject 21
	removeobject 9
	removeobject 11
	removeobject 16
	addobject 2
	addobject 24
	addobject 4
	addobject 17
	addobject 6
	addobject 8
	addobject 3

	applymovement OBJ_EVENT_ID_PLAYER, MovePostZubat2b
	waitmovement 0x0
	fadescreen 1
	delay 40
	fadescreen 0
	applymovement OBJ_EVENT_ID_PLAYER, MovePostZubat2.1 
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat2 MSGBOX_NPC
	applymovement 1, MovePostZubat3
    waitmovement 0x0
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat3 MSGBOX_NPC
	applymovement 3 MovePostZubat4
    applymovement 8 MovePostZubat4
    applymovement 7 MovePostZubat4
    applymovement 6 MovePostZubat4
    applymovement 17 MovePostZubat4
    waitmovement 0x0
	delay 40
	applymovement 2 MovePostZubat5
    applymovement 24 MovePostZubat5
    applymovement 4 MovePostZubat5
    waitmovement 0x0
    delay 40
	applymovement 3 MovePostZubat6
    applymovement 8 MovePostZubat6
    applymovement 7 MovePostZubat6
    applymovement 6 MovePostZubat6
    applymovement 17 MovePostZubat6
    applymovement 2 MovePostZubat6
    applymovement 24 MovePostZubat6
    applymovement 17 MovePostZubat6
	applymovement 4 MovePostZubat6
    waitmovement 0x0
	delay 40
	playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat4 MSGBOX_NPC
	applymovement 1, MovePostZubat7
    waitmovement 0x0
	playse SE_EXIT
	delay 40
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	fadescreen 1
	removeobject 1
	removeobject 22
	removeobject 23
	removeobject 2
	removeobject 24
	removeobject 4
	removeobject 3
	removeobject 8
	removeobject 7
	removeobject 6
	removeobject 17
	delay 40
	fadescreen 0
	delay 20
    applymovement 13, MovePostZubat8
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat5 MSGBOX_NPC
	applymovement 10, MovePostZubat9
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat6 MSGBOX_NPC
	fadescreen 1
	removeobject 13
	removeobject 10
	removeobject 12
	delay 40
	fadescreen 0
	setflag FLAG_SYS_POKEMON_GET
	release
	end

Zubat_Text_YesNo:
.string "So do you want ZUBAT, the PLAGUE\n"
    .string "POKEMON, as your starter?$"


Zubat_Text_Yes:
   .string "Doesn't seem like this POKEMON have\n"
    .string "much energy.$"


Zubat_Text_No:
.string "No? Too bad, it's your unique option\n"
    .string "anyway.$"

RocketHideoutFiveIslanMeadow_Text_MensajeZubat:
   .string "{PLAYER} received a ZUBAT!$"

RocketHideoutFiveIslanMeadow_Text_PostZubat2:
.string "Well, now that you all have a POKEMON,\n"
    .string "let's proceed to explain your roles on\l"
    .string "our organization, and I will be short\l"
    .string "explaining, basically you will be the\l"
    .string "ones who have to do the dirty work:\l"
    .string "extortion, theft, settling scores, you\l"
    .string "will clean the land and you will obtain\l"
    .string "all the ilegal money possible for TEAM\l"
    .string "ROCKET, collaborating in the financing\l"
    .string "of the projects. While you cant prove\l"
    .string "otherwise, to me and the rest of the\l"
    .string "world, you are as low as possible, if you\l"
    .string "are competent and do your job\l"
    .string "correctly, you will gain respect,\l"
    .string "rewards and accolades, not before\l"
    .string "that.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat3:
.string "grunts from 5 to 13, the last two\n"
    .string "rows, will be transferred immediately\l"
    .string "to KANTO, right now there is a boat in\l"
    .string "CHRONO ISLANDs port waiting, prepare\l"
    .string "your things, you will set sail in one\l"
    .string "hour. Now get out of my sight!$"


RocketHideoutFiveIslanMeadow_Text_PostZubat4:
.string "Well, there are 4 of you left, it's a\n"
    .string "tradition to keep some of the grunts\l"
    .string "we exported to KANTO from CHRONO ISLAND,\l"
    .string "at least for a short period of time, and\l"
    .string "you are lucky, this way you will delay\l"
    .string "witnessing the circus that the region\l"
    .string "has become. Come to my office and I will\l"
    .string "give you details of your mission,\l"
    .string "meanwhile, show off your new POKEMON,\l"
    .string "for sure, WAREHOUSE grunts will be\l"
    .string "happy to fight with you.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat5:
    .string "GRUNT 1: So we will stay on CHRONO ISLAND\n"
    .string "for a while, that ARCHER doesn't fool\l"
    .string "around, thats why people say that just\l"
    .string "GIOVANNI is above him, have you seen\l"
    .string "that GRUNT's face when ARCHER got\l"
    .string "closer to answer him? I doubt if he can\l"
    .string "live in peace after this.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat6:
    .string "GRUNT 3: I doubt he's alive, although\n"
    .string "he hasn't seen much, he's seen enough\l"
    .string "to get menaced, as for us, as ARCHER said,\l"
    .string "we're now part from TEAM ROCKET, we'd\l"
    .string "better go to his office soon and see\l"
    .string "what exactly he wants of us, there\l"
    .string "aren't exactly a lot of things to do on\l"
    .string "this island.$"




RocketHideoutFiveIslanMeadowCajaZubat::
   msgbox RocketHideoutFiveIslandMeadow_Text_CajaZubat, MSGBOX_DEFAULT
   release
   end

RocketHideoutFiveIslandMeadow_Text_CajaZubat:
.string "If ARCHER catches me trying to steal\n"
    .string "any other POKEMON, GIOVANNI is going\l"
    .string "to punish me with his NIDOKING$"



MovePostZubat1:
 face_up
 step_end

MovePostZubat2:
 walk_up
 walk_up
 walk_up
 step_end

MovePostZubat2b:
walk_up
walk_up
 walk_up
 walk_up
 face_down
 step_end

MovePostZubat3:
walk_slow_left
walk_slow_right
walk_slow_right
walk_slow_left
walk_in_place_up
step_end

MovePostZubat4:
walk_in_place_up
walk_slow_up
face_right
step_end

MovePostZubat5:
walk_in_place_down
walk_slow_down
face_right
step_end

MovePostZubat6:
delay_1
delay_2
delay_4
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end


MovePostZubat7:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

MovePostZubat8:
face_left
delay_1
walk_in_place_slow_left
step_end

MovePostZubat9:
face_right
step_end

MovePostZubat2.1:
face_down
walk_in_place_down
step_end

Curacion_Guarida_Rocket::
lock
faceplayer
msgbox Curacion_Curacion_Guarida_Rocket_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox Curacion_Centros_Pokemon_Johto_Texto_2 MSGBOX_AUTOCLOSE
release
end

Curacion_Curacion_Guarida_Rocket_Texto_1:
.string "Welcome to the ROCKET\n"
	.string "PKMN CENTER...$"

