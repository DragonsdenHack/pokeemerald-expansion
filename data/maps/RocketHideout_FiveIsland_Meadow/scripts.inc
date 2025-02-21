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
.string "…{PAUSE 15}\n"
.string "…{PAUSE 15}\l"
.string "…{PAUSE 15} …{PAUSE 15} (It contains a KINGLER inside,\l"
.string "it's better not to touch it…)$"



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
.string "…{PAUSE 15}\n"
.string "…{PAUSE 15}\l"
.string "…{PAUSE 15} …{PAUSE 15} (It contains a NIDORINO inside,\l"
    .string "it's better not to touch it…)$"




RocketHideoutFiveIslanMeadow12::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_12, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_12:
    .string "A few know that this WAREHOUSE is\n"
    .string "actually our main source of POKÉMON\l"
    .string "traffic, we also carry out various\l"
    .string "experiments, although in KANTO we have\l"
    .string "better laboratories, from CHRONO ISLAND\l"
    .string "we got very interesting conclusions\l"
    .string "about the manipulation of radio\l"
    .string "waves, for example…$"


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
    .string "it in action.{PAUSE 15} 2.- The loyalty and total\l"
    .string "commitment of the organization are\l"
    .string "undeniable.{PAUSE 15} 3.- Insubordination and\l"
    .string "betrayal are sentenced to death.{PAUSE 15} 4.-\l"
    .string "We act as a single body, unity above\l"
    .string "individuality, but also…{PAUSE 25} 5.- Does not\l"
    .string "mean that every ROCKET must have\l"
    .string "their own initiative, an attitude of\l"
    .string "constant search and improvement to\l"
    .string "become a better trainer.{PAUSE 15} 6.- Arrive,\l"
    .string "analyze, adapt and win.{PAUSE 15} 7.- Every\l"
    .string "member of the organization counts,\l"
    .string "from the most basic GRUNT to the\l"
    .string "highest positions, we function as a\l"
    .string "huge mechanism where no one is left\l"
    .string "behind.$"




RocketHideoutFiveIslandMeadowDocumento_101::
msgbox RocketHideoutFiveIslandMeadowDocumento_Text_101, MSGBOX_SIGN   
end

RocketHideoutFiveIslandMeadowDocumento_Text_101:
    .string "…{PAUSE 15}\n"
	.string "…{PAUSE 15}\l"
	.string "…{PAUSE 15} …{PAUSE 15} (It contains a NIDORINO inside,\l"
    .string "it's better not to touch it…)$"




RocketHideoutFiveIslandMeadowDocumento_102::
msgbox RocketHideoutFiveIslandMeadowDocumento_Text_102, MSGBOX_SIGN   
end

RocketHideoutFiveIslandMeadowDocumento_Text_102:
    .string "…{PAUSE 15}\n"
	.string "…{PAUSE 15}\l"
	.string "…{PAUSE 15} …{PAUSE 15} (It contains a RHYHORN inside,\l"
    .string "it's better not to touch it…)$"


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

RocketHideoutFiveIslandMeadow_Move_1:
walk_in_place_down
step_end

RocketHideoutFiveIslandMeadow_Move_2:
emote_exclamation_mark
step_end

RocketHideoutFiveIslanMeadowAtlas::     
lock     
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd
special StartWallClock
waitstate  
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
delay 10
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas5, MSGBOX_NPC
playse SE_PIN
applymovement 5, RocketHideoutFiveIslandMeadow_Move_2
waitmovement 0x0
waitse
delay 15
applymovement 1, Move5
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas6, MSGBOX_NPC
delay 10
applymovement 1, RocketHideoutFiveIslandMeadow_Move_1
waitmovement 0x0
playse SE_BREAKABLE_DOOR
waitse
delay 10
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas6.1, MSGBOX_NPC
delay 10
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
delay 10
applymovement 1, Move11.1
waitmovement 0x0
delay 10
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas8.1, MSGBOX_NPC
delay 10
applymovement 1, Move11.2
waitmovement 0x0
delay 10
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas8.2, MSGBOX_NPC
playse SE_BREAKABLE_DOOR
delay 10
applymovement 1, Move11.3
waitmovement 0x0
waitse
delay 10
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas8.3, MSGBOX_NPC
delay 10
applymovement 1, Move11
waitmovement 0x0
delay 10
playse SE_EXIT
applymovement 23, Move12
applymovement 22, Move12
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas9, MSGBOX_NPC
delay 15
applymovement 1, Move11.3
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas9.1, MSGBOX_NPC
delay 15
waitmovement 0x0
applymovement 13, Move13
waitmovement 0x0
applymovement 1, Move11.3
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas10, MSGBOX_NPC
applymovement 12, Move14
waitmovement 0x0
applymovement 1, Move11.3
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas11, MSGBOX_NPC
applymovement 10, Move15
waitmovement 0x0
applymovement 1, Move11.3
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
    .string "your starter POKÉMON, You belong to\l"
    .string "the fourth platoon, so each of you will\l"
    .string "receive a ZUBAT imported directly from\l"
    .string "MT. MOON. Any questions?$"



RocketHideoutFiveIslandMeadow_Text_Atlas4:
.string "Sir, I couldn't help but see all those\n"
    .string "powerful POKÉMON in the background,\l"
    .string "and I was wondering how our leader\l"
    .string "GIOVANNI wants us to perform our role\l"
    .string "in the best possible way, if he doesn't\l"
    .string "give us the appropriate tools to do so?$"
    .string "Not to criticize, but ZUBAT is not\n"
    .string "exactly a good tool, maybe a NIDOR…$"



RocketHideoutFiveIslandMeadow_Text_Atlas5:
    .string "ARCHER: Enough.$"



RocketHideoutFiveIslandMeadow_Text_Atlas6:
    .string "ATLAS: Esto es lo que haremos: ya\n"
	.string "que has prejuzgado las decisiones\l"
	.string "de GIOVANNI, y no estás conforme\l"
	.string "para con la política hacia nuevos\l"
	.string "reclutas, no hay ningún motivo\l"
	.string "para que sigas perteneciendo a\l"
	.string "nuestra organización{PAUSE 25}…{PAUSE 25}\l"
	.string "Espero por tu bien que no digas\l"
	.string "una sola palabra de lo que aquí\l"
	.string "hayas podido ver.$"

RocketHideoutFiveIslandMeadow_Text_Atlas6.1:
	.string "¡¡GUARDIAS!!\l"
	.string "¡Lleváoslo fuera de la BASE!$"



RocketHideoutFiveIslandMeadow_Text_Atlas7:
    .string "ATLAS: {PAUSE 25}…{PAUSE 25}\n"
	.string "Lo último que necesita esta\l"
	.string "organización es gente acomodada\l"
	.string "que reclama privilegios antes de\l"
	.string "haber demostrado nada.$"


RocketHideoutFiveIslandMeadow_Text_Atlas8:
    .string "Un ZUBAT, aunque muchos lo\n"
	.string "consideréis inútil, puede\l"
	.string "convertirse en uno de los mejores\l"
	.string "POKÉMON si lo cuidáis.$"
	
RocketHideoutFiveIslandMeadow_Text_Atlas8.1:
	.string "GOLBAT es ya un POKÉMON digno\n"
	.string "de todo un ADMIN.ROCKET; la\l"
	.string "mismísima miembro de la ÉLITE 4,\l"
	.string "AGATHA, lo tiene en sus filas.$"
	
RocketHideoutFiveIslandMeadow_Text_Atlas8.2:
	.string "CROBAT es ya uno de los 5 mejores\n"
	.string "POKÉMON TIPO VENENO que existen{PAUSE 25}…{PAUSE 25}\l"
	.string "Ágil como un AERODACTYL,\l"
	.string "resistente pero también letal.$"

RocketHideoutFiveIslandMeadow_Text_Atlas8.3:
	.string "¿Y váis a rechazar esa oportunidad\n"
	.string "solo por tener que pasar por el\l"
	.string "proceso de entrenar a un ZUBAT?$"


RocketHideoutFiveIslandMeadow_Text_Atlas9:
    .string "Aquí os proporcionamos la\n"
	.string "herramienta inicial a partir de la\l"
	.string "cual podréis construir mejores\l"
	.string "herramientas, esa es la voluntad\l"
	.string "de GIOVANNI, que aprendáis a\l"
	.string "escalar comenzando desde lo más\l"
	.string "bajo.\l"
	.string "Comencemos con la\l"
	.string "entrega de iniciales.$"

RocketHideoutFiveIslandMeadow_Text_Atlas9.1:
    .string "ATLAS: ¡¡RECLUTA NÚMERO 1!!$"


RocketHideoutFiveIslandMeadow_Text_Atlas10:
.string "GRUNT NUMBER 2!!$"



RocketHideoutFiveIslandMeadow_Text_Atlas11:
.string "GRUNT NUMBER 3!!$"


RocketHideoutFiveIslandMeadow_Text_Atlas12:
.string "GRUNT NUMBER 4!!$"

Move1:
walk_slow_up
walk_slow_up
walk_slow_up
delay_16
delay_8
face_left
delay_16
delay_8
face_right
delay_16
delay_8
face_down
delay_16
delay_8
walk_in_place_down
step_end

Move2:
walk_slow_right
delay_16
delay_8
walk_slow_up
delay_16
delay_8
walk_in_place_slow_down
step_end

Move3:
walk_in_place_slow_down
step_end

Move4:
delay_16
walk_in_place_up
delay_8
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
delay_16
face_right
delay_16
walk_in_place_down
delay_16
step_end

Move11.1:
walk_slow_down
delay_8
walk_slow_right
delay_8
walk_slow_down
step_end

Move11.2:
delay_16
face_left
delay_16
delay_8
walk_slow_down
walk_slow_down
delay_16
face_right
delay_16
face_up
step_end

Move11.3:
walk_in_place_up
step_end

Move11:
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

MovePostZubat8.1:
delay_16
face_right
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
	delay 15
	playse SE_BREAKABLE_DOOR
	applymovement 1, Move17
	waitmovement 0x0
	waitse
	delay 10
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat3.1 MSGBOX_NPC
	delay 5
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
	delay 15
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat4.1 MSGBOX_NPC
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
	waitmovement 0x0
	applymovement OBJ_EVENT_ID_PLAYER, MovePostZubat8.1
	applymovement 12, MovePostZubat8.1
	applymovement 10, MovePostZubat8.1
	waitmovement 0x0
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat5 MSGBOX_AUTOCLOSE
	applymovement 10, MovePostZubat9
	waitmovement 0x0
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat6 MSGBOX_AUTOCLOSE
	fadescreen 1
	removeobject 13
	removeobject 10
	removeobject 12
	delay 40
	fadescreen 0
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEMON_GET
	release
	end

Zubat_Text_YesNo:
.string "So do you want ZUBAT, the PLAGUE\n"
    .string "POKÉMON, as your starter?$"


Zubat_Text_Yes:
   .string "Doesn't seem like this POKÉMON have\n"
    .string "much energy.$"


Zubat_Text_No:
.string "No? Too bad, it's your unique option\n"
    .string "anyway.$"

RocketHideoutFiveIslanMeadow_Text_MensajeZubat:
   .string "{PLAYER} received a ZUBAT!$"

RocketHideoutFiveIslanMeadow_Text_PostZubat2:
    .string "Bien, ahora que todos contáis con\n"
	.string "un POKÉMON, procedamos a explicar\l"
	.string "cual será vuestra función en\l"
	.string "nuestra organización.\l"
	.string "Seré breve, básicamente estáis\l"
	.string "aquí para hacer el trabajo sucio:\l"
	.string "extorsión, robo, ajustes de\l"
	.string "cuentas; limpiaréis el terreno y\l"
	.string "obtendréis todo el dinero en negro\l"
	.string "posible.\l"
	.string "Ahora mismo, para mí y el resto del\l"
	.string "mundo sois lo más bajo posible.\l"
	.string "Si sois competentes, vais mejorando\l"
	.string "y hacéis bien vuestro trabajo, poco\l"
	.string "a poco os ganaréis el respeto, las\l"
	.string "recompensas y los galones, no\l"
	.string "antes.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat3:
    .string "Reclutas del 5 al 13, las dos\n"
	.string "últimas filas, seréis trasladados\l"
	.string "inmediatamente a KANTO.\l"
	.string "Hay un barco en el puerto de\l"
	.string "ISLA INTA esperando, preparad\l"
	.string "vuestras cosas, zarpáis en 1H.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat3.1:
	.string "¡Ahora fuera mi vista!$"

RocketHideoutFiveIslanMeadow_Text_PostZubat4:
    .string "Bien, quedáis vosotros 4.\n"
	.string "Es tradición mantener varios de\l"
	.string "los nuevos ROCKET que exportamos a\l"
	.string "KANTO desde ISLA INTA, al menos para\l"
	.string "hacer trabajos aquí; y estáis\l"
	.string "de suerte, así retrasaréis el\l"
	.string "presenciar el circo en el que se\l"
	.string "ha convertido esa región.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat4.1:
	.string "Pasaos por mi despacho y os daré\n"
	.string "detalles de vuestra misión,\l"
	.string "mientras, estrenad vuestros\l"
	.string "POKÉMON, los reclutas del ALMACÉN\l"
	.string "estarán encantados de luchar con\l"
	.string "vosotros.$"

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
    .string "any other POKÉMON, GIOVANNI is going\l"
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
delay_16
walk_in_place_left
step_end

MovePostZubat9:
delay_16
walk_in_place_right
delay_16
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
	.string "PKMN CENTER…$"

