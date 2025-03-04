PewterCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
	.byte 0

PewterCity_OnTransition::
setflag FLAG_VISITED_PEWTER_CITY
end

PewterCity1::
end

PewterCity2::
lock     
faceplayer     
msgbox PewterCity_Text1, MSGBOX_DEFAULT
release     
end

PewterCity_Text1:
	.string "I don't want to deal with you, bastard!\n"
	.string "Do not you dare even make eye contact\l"
	.string "with me!$"

PewterCity3::
end


PewterCity4::
lock     
faceplayer     
msgbox PewterCity_Text4, MSGBOX_DEFAULT
release     
end

PewterCity_Text4:
	.string "You are so lucky, not long ago this\n"
	.string "place was full of police. They'll catch\l"
	.string "you next time!$"


PewterCity5::
lock     
faceplayer     
msgbox PewterCity_Text5, MSGBOX_DEFAULT
release     
end

PewterCity_Text5:
	.string "CLEFAIRY came from the moon. That's\n"
	.string "what the rumor is. They appeared after\l"
	.string "MOON STONES fell on MT. MOON.$"


PewterCity6::
end



PewterCityDocumento_100::
msgbox PewterCityDocumento_Text_100, MSGBOX_SIGN   
end

PewterCityDocumento_Text_100:
.string "PEWTER MUSEUM OF SCIENCE$"




PewterCityDocumento_101::
msgbox PewterCityDocumento_Text_101, MSGBOX_SIGN   
end

PewterCityDocumento_Text_101:
.string "PEWTER CITY POKÉMON GYM\n"
    .string "LEADER: BROCK\l"
    .string "The Rock-Solid POKÉMON TRAINER!$"



PewterCityDocumento_102::
msgbox PewterCityDocumento_Text_102, MSGBOX_SIGN   
end

PewterCityDocumento_Text_102:
.string "NOTICE!\p"
    .string "Thieves have been stealing POKÉMON\n"
    .string "fossils from MT. MOON.\p"
    .string "Please call the PEWTER POLICE if\n"
    .string "you have any information.$"



PewterCityDocumento_103::
msgbox PewterCityDocumento_Text_103, MSGBOX_SIGN   
end

PewterCityDocumento_Text_103:
	.string "PEWTER CITY\n"
    .string "A Stone Gray City$"



PewterCityDocumento_104::
msgbox PewterCityDocumento_Text_104, MSGBOX_SIGN   
end

PewterCityDocumento_Text_104:
.string "TRAINER TIPS\p"
    .string "All POKÉMON that appear in battle,\n"
    .string "however briefly, earn EXP Points.$"



PewterCity_3::
lock
faceplayer
msgbox PewterCity_3_Text_3YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_3No
msgbox PewterCity_3_Text_3Yes, MSGBOX_NPC
goto PewterCity_3_Cazabichos
release
end



PewterCity_3_Text_3YesNo:
.string "Psssst!\n"
    .string "Do you know what I'm doing?$"


PewterCity_3No::
msgbox PewterCity_3_Text_3No, MSGBOX_NPC
goto PewterCity_3_Cazabichos
release
end


PewterCity_3_Text_3Yes:
.string "That's right!\n"
    .string "It's hard work!$"



PewterCity_3_Text_3No:
.string "I'm spraying REPEL to keep wild\n"
    .string "POKÉMON out of my garden!$"

PewterCity_3_Cazabichos_Move_1:
emote_exclamation_mark
step_end

PewterCity_3_Cazabichos_Move_2:
face_up
delay_16
delay_8
face_player
delay_8
step_end

PewterCity_3_Cazabichos_Move_3:
face_up
step_end

PewterCity_3_Cazabichos_Move_4:
delay_16
face_player
delay_16
face_up
delay_16
delay_8
walk_in_place_up
step_end

PewterCity_3_Cazabichos_Move_5:
face_player
step_end

PewterCity_3_Cazabichos::
lockall
delay 15
msgbox PewterCity_3_Texto_1 MSGBOX_NPC
delay 15
msgbox PewterCity_3_Texto_2 MSGBOX_NPC
playse SE_PIN
applymovement 3, PewterCity_3_Cazabichos_Move_1
waitmovement 0x0
msgbox PewterCity_3_Texto_3 MSGBOX_NPC
delay 10
msgbox PewterCity_3_Texto_4 MSGBOX_NPC
faceplayer
lockall
msgbox PewterCity_3_Texto_5, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_3_Cazabichos_No
msgbox PewterCity_3_Texto_7 MSGBOX_NPC
applymovement 3, PewterCity_3_Cazabichos_Move_2
waitmovement 0x0
msgbox PewterCity_3_Texto_8 MSGBOX_NPC
delay 10
applymovement 3, PewterCity_3_Cazabichos_Move_3
waitmovement 0x0
delay 10
msgbox PewterCity_3_Texto_9 MSGBOX_NPC
delay 10
applymovement 3, PewterCity_3_Cazabichos_Move_4
waitmovement 0x0
delay 10
msgbox PewterCity_3_Texto_10 MSGBOX_NPC
delay 15
msgbox PewterCity_3_Texto_11 MSGBOX_NPC
delay 10
applymovement 3, PewterCity_3_Cazabichos_Move_5
waitmovement 0x0
delay 10
msgbox PewterCity_3_Texto_12 MSGBOX_NPC
delay 15
msgbox PewterCity_3_Texto_13 MSGBOX_NPC
setflag FLAG_HOENN_86
fadescreen 1
delay 20
removeobject 3
fadescreen 0
clearflag FLAG_HOENN_673
setvar VAR_SCOTT_STATE, 1
release
end

PewterCity_3_Cazabichos_No::
msgbox PewterCity_3_Texto_6 MSGBOX_NPC
release
end

PewterCity_3_Texto_1:
	.string "… …$"

PewterCity_3_Texto_2:
	.string "Oh, hold up.$"

PewterCity_3_Texto_3:
	.string "You're from TEAM ROCKET!$"

PewterCity_3_Texto_4:
	.string "And you look like a big fish. Ain't you?$"

PewterCity_3_Texto_5:
	.string "Now, mind helping me with some\n"
	.string "business?$"

PewterCity_3_Texto_6:
	.string "Mmm… I see. Anyway, I don't think this is\n"
	.string "a one-man job.$"

PewterCity_3_Texto_7:
	.string "Seriously, man? I can't believe it!\n"
	.string "Now that's the ticket.$"

PewterCity_3_Texto_8:
	.string "Okay, listen up. A few days back, I had\n"
	.string "this job in VERMILION. I had this garden\n"
	.string "that drawfed the one here, and it was\l"
	.string "sprawling with weird berries and spices.$"

PewterCity_3_Texto_9:
	.string "I used to sell them for a big cut, and\n"
	.string "everyone liked my products.$"

PewterCity_3_Texto_10:
	.string "But everything changed when that\n"
	.string "LANCE took control.$"

PewterCity_3_Texto_11:
	.string "His government expropriated my lands,\n"
	.string "then got some goons from JOHTO to\n"
	.string "regulate them.$"

PewterCity_3_Texto_12:
	.string "Now they're harvesting the actual\n"
	.string "fruits of my labor to export them\n"
	.string "outside the region for record-breaking\l"
	.string "profits.$"

PewterCity_3_Texto_13:
	.string "I'll catch you in VERMILLION. The place\n"
	.string "is connected directly to ROUTE 6.$"


PewterCity_Petrel_2::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1.1
goto PewterCity_Petrel

PewterCity_Petrel_3::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1.2
goto PewterCity_Petrel

PewterCity_Petrel_4::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
goto PewterCity_Petrel

PewterCity_Petrel_5::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1.3
waitmovement 0x0
goto PewterCity_Petrel

PewterCity_Petrel::
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
delay 20
msgbox PewterCity_Petrel_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_3
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_4
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_5
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_6
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_4
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Petrel_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PewterCity_Petrel_Move_7
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Petrel_Texto_8.1 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Petrel_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Petrel_Texto_9.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PewterCity_Petrel_Move_7
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_10 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_8
waitmovement 0x0
setflag FLAG_NUEVA_839
setflag FLAG_HIDE_FANCLUB_BOY
removeobject 6
setvar VAR_UNUSED_0x40F7, 57
release
end

PewterCity_Petrel_Texto_1:
	.string "PETREL: What a surprise to see you\n"
	.string "around here, {PLAYER}!$"

PewterCity_Petrel_Texto_2:
	.string "So an important mission at PALLET TOWN,\n"
	.string "you are tireless, eh? GIOVANNI already\l"
	.string "told me that you are doing an excellent\l"
	.string "job there.$"

PewterCity_Petrel_Texto_3:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10}$"

PewterCity_Petrel_Texto_4:
.string "PETREL: -NOTICE!\p"
    .string "Thieves have been stealing POKÉMON\n"
    .string "fossils from MT. MOON.\p"
    .string "Please call the PEWTER POLICE if\n"
    .string "you have any information-.$"

PewterCity_Petrel_Texto_5:
	.string "Obviously, with -thieves-, it refers to\n"
	.string "our organization, it's funny, I enjoy\l"
	.string "the double standard in this region. I\l"
	.string "love the double standard in this region.$"

PewterCity_Petrel_Texto_6:
	.string "If a scientist takes a FOSSIL at\n"
	.string "MT.MOON, no problem, it is for his\l"
	.string "investigation.$"

PewterCity_Petrel_Texto_7:
.string "Si un par de niños malcriados\n"
	.string "limpian la cueva de FÓSILES, nadie dice\l"
	.string "nada, puesto que, por supuesto, no\l"
	.string "pueden quedarse sin completar sus\l"
	.string "POKÉDEX, de añadir uno más a su\l"
	.string "-colección-, como si los POKÉMON fueran\l"
	.string "cromos intercambiables.$"

PewterCity_Petrel_Texto_7.1:
    .string "¡Ridículo!$"

PewterCity_Petrel_Texto_8:
.string "Pero si un grupo privado, como nosotros,\n"
	.string "decide recolectar FÓSILES para\l"
	.string "satisfacer una demanda local, somos\l"
	.string "unos ladrones y la peor escoria.$"

PewterCity_Petrel_Texto_8.1:
	.string "Como si esos FÓSILES perteneciesen\n"
	.string "a alguien, cuando cualquier idiota\l"
	.string "puede tomarlos en cualquier momento\l"
	.string "si es que los encuentra.$"

PewterCity_Petrel_Texto_9:
.string "Hablando de FÓSILES, he venido\n"
	.string "hasta aquí a visitar a un viejo\l"
	.string "amigo, que tiene la suerte de ser\l"
	.string "uno de los peces gordos del MUSEO\l"
	.string "DE LA CIENCIA DE CIUDAD PLATEADA.$"

PewterCity_Petrel_Texto_9.1:
	.string "Al parecer han encontrado un\n"
	.string "ejemplar de ÁMBAR VIEJO, que\l"
	.string "contiene el FÓSIL más poderoso y\l"
	.string "valioso de nuestra región.$"
	
PewterCity_Petrel_Texto_9.2:
	.string "Sé que con la correcta negociación,\n"
	.string "podría convencerlo de que nos lo preste\l"
	.string "para investigarlo; hemos desarrollado\l"
	.string "un sistema de clonación que podría\l"
	.string "replicar ese ÁMBAR VIEJO a un costo\l"
	.string "inferior a su precio de mercado, así que\l"
	.string "no podemos dejar pasar esta oportunidad.$"

PewterCity_Petrel_Texto_10:
.string "Si te animas, estás invitado a esa\n"
	.string "reunión: estaremos en la caseta\l"
	.string "trasera al MUSEO oficial abierto\l"
	.string "al público.\l"
	.string "Allí te espero, si decides venir.$"

PewterCity_Petrel_Move_1:
walk_in_place_left
step_end

PewterCity_Petrel_Move_1.1:
walk_down
walk_down
walk_in_place_left
step_end

PewterCity_Petrel_Move_1.2:
walk_down
walk_in_place_left
step_end

PewterCity_Petrel_Move_1.3:
walk_up
walk_in_place_left
step_end

PewterCity_Petrel_Move_2:
emote_exclamation_mark
walk_in_place_right
step_end

PewterCity_Petrel_Move_3:
walk_right
walk_right
walk_right
step_end

PewterCity_Petrel_Move_4:
face_up
step_end

PewterCity_Petrel_Move_5:
walk_left
walk_in_place_up
step_end

PewterCity_Petrel_Move_6:
walk_right
walk_in_place_right
step_end

PewterCity_Petrel_Move_7:
walk_in_place_up
walk_in_place_right
step_end

PewterCity_Petrel_Move_8:
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PewterCity_Ayuda::
lock
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Ayuda_Move_1
waitmovement 0x0
msgbox PewterCity_Ayuda_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Ayuda_Move_2
waitmovement 0x0
release
end

PewterCity_Ayuda_Move_2:
walk_slow_down
step_end

PewterCity_Ayuda_Move_1:
walk_in_place_up
step_end



PewterCity_Ayuda_Texto_1:
	.string "(I should assist to PETRELs meeting at\n"
	.string "the other stand)$"
