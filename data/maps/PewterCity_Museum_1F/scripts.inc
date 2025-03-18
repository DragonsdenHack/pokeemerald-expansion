PewterCity_Museum_1F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, PewterCity_Museum_1F_OnFrame
	.byte 0

PewterCity_Museum_1F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 57, PewterCity_Museum_1F_Miguel
	.2byte 0

PewterMuseum1::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 57
goto_if_gt PewterMuseum1_2
msgbox PewterMuseum1_Texto_1 MSGBOX_NPC
release
end

PewterMuseum1_2::
msgbox PewterMuseum1_Texto_2 MSGBOX_NPC
release
end

PewterMuseum1_Texto_2:
	.string "It is clear that appearances deceives,\n"
	.string "in the name of PEWTER MUSEUM, I thank\l"
	.string "you for the things you have done. You\l"
	.string "can enter for free whenever you want.$"

PewterMuseum1_Texto_1:
	.string "Why didn't you pay the entrance fee? We\n"
	.string "know that you don't pay the entrance\l"
	.string "fee anyway, but don't worry, you'll pay\l"
	.string "for everything at once when your time\l"
	.string "comes.$"



PewterMuseum2::
lock     
faceplayer     
msgbox PewterCity_Museum1F_Text_2, MSGBOX_DEFAULT
release     
end

PewterCity_Museum1F_Text_2:
	.string "I must be grateful for my long life. I\n"
	.string "never thought I would live this long to\l"
	.string "see the bones of a dragon!$"



PewterMuseum3::
lock     
faceplayer     
msgbox PewterCity_Museum1F_Text_3, MSGBOX_DEFAULT
release     
end

PewterCity_Museum1F_Text_3:
	.string "Thank you so much for helping us get rid\n"
	.string "of that opportunistic thief.$"



PewterMuseum5::
end



PewterMuseumDocumento_100::
msgbox PewterMuseumDocumento_Text_100, MSGBOX_SIGN   
end

PewterMuseumDocumento_Text_100:
.string "POKÉMON JOURNAL\p"
	.string "Special Feature: PEWTER GYM\n"
	.string "LEADER BROCK!\p"
	.string "BROCK rarely laughs, but is said to\n"
	.string "be unable to stop if he starts.$"



PewterMuseumDocumento_101::
showmonpic SPECIES_AERODACTYL_SKEL, 10, 3   
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
msgbox PewterMuseumDocumento_Text_101, MSGBOX_SIGN  
hidemonpic 
end

PewterMuseumDocumento_Text_101:
.string "AERODACTYL Fossil\n"
    .string "A primitive and rare POKÉMON.$"



PewterMuseumDocumento_102::
showmonpic SPECIES_KABUTOPS_SKEL, 10, 3   
playmoncry SPECIES_KABUTOPS, CRY_MODE_ENCOUNTER
msgbox PewterMuseumDocumento_Text_102, MSGBOX_SIGN  
hidemonpic 
end

PewterMuseumDocumento_Text_102:
	.string "KABUTOPS Fossil\n"
    .string "A primitive and rare POKÉMON.$"

PewterCity_Museum_1F_Miguel::
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_1
waitmovement 0x0
delay 10
playse MUS_RG_POKE_MANSION
msgbox PewterCity_Museum_1F_Miguel_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 7, PewterCity_Museum_1F_Miguel_Move_3
waitmovement 0x0
waitse
msgbox PewterCity_Museum_1F_Miguel_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PewterCity_Museum_1F_Miguel_Move_4
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PewterCity_Museum_1F_Miguel_Move_5
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_4.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, PewterCity_Museum_1F_Miguel_Move_5
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, PewterCity_Museum_1F_Miguel_Move_6
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_7 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_8.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6.1
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_8.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6.2
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_8.4 MSGBOX_AUTOCLOSE
applymovement 7, PewterCity_Museum_1F_Miguel_Move_7
waitmovement 0x0
delay 10
applymovement 6, PewterCity_Museum_1F_Miguel_Move_6.3
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_9 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_10 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6.2
waitmovement 0x0
waitse
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6
waitmovement 0x0
trainerbattle_no_intro TRAINER_CMIGUEL_2, PewterCity_Museum_1F_Miguel_Texto_11
msgbox PewterCity_Museum_1F_Miguel_Texto_12 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_13 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_WARP_OUT
msgbox PewterCity_Museum_1F_Miguel_Texto_14 MSGBOX_AUTOCLOSE
delay 20
removeobject 7
fadescreen 0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_15 MSGBOX_AUTOCLOSE
applymovement 3, PewterCity_Museum_1F_Miguel_Move_8
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox PewterCity_Museum_1F_Miguel_Texto_17 MSGBOX_DEFAULT
givemon SPECIES_OMANYTE, 30, ITEM_MYSTIC_WATER
waitfanfare
applymovement 3, PewterCity_Museum_1F_Miguel_Move_9
waitmovement 0x0
applymovement 6, PewterCity_Museum_1F_Miguel_Move_4
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_4.1
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PewterCity_Museum_1F_Miguel_Move_10
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_4.2
applymovement 6, PewterCity_Museum_1F_Miguel_Move_5
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_19 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 6, PewterCity_Museum_1F_Miguel_Move_3
waitmovement 0x0
waitse
msgbox PewterCity_Museum_1F_Miguel_Texto_20 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Museum_1F_Miguel_Move_11
waitmovement 0x0
delay 40
removeobject 4
delay 40
msgbox PewterCity_Museum_1F_Miguel_Texto_21 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Museum_1F_Miguel_Move_12
waitmovement 0x0
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_POISON_BARB
waitfanfare
msgbox PewterCity_Museum_1F_Miguel_Texto_22 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_4.3
applymovement 6, PewterCity_Museum_1F_Miguel_Move_13
waitmovement 0x0
clearflag FLAG_NUEVA_839
setflag FLAG_HIDE_FANCLUB_LITTLE_BOY
removeobject 6
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 58
release
end

PewterCity_Museum_1F_Miguel_Move_4.3:
delay_16
face_left
delay_16
delay_8
face_down
step_end

PewterCity_Museum_1F_Miguel_Move_4.2:
delay_8
face_up
delay_8
step_end

PewterCity_Museum_1F_Miguel_Move_4.1:
delay_8
face_left
delay_8
step_end

PewterCity_Museum_1F_Miguel_Move_6.1:
face_down
step_end

PewterCity_Museum_1F_Miguel_Move_6.2:
walk_in_place_down
step_end

PewterCity_Museum_1F_Miguel_Move_6.3:
walk_in_place_up
step_end

PewterCity_Museum_1F_Miguel_Texto_1:
	.string "????: So rumors were true, there is an\n"
	.string "OLD AMBER in this place.$"

PewterCity_Museum_1F_Miguel_Texto_2:
.string "S.MIGUEL: YOU!$"

PewterCity_Museum_1F_Miguel_Texto_3:
.string "PETREL: Con que este es el canalla\n"
	.string "que nos la jugó en el MT.MOON.\l"
	.string "Creí que más tarde le diste su\l"
	.string "merecido en el TÚNEL ROCA.$"

PewterCity_Museum_1F_Miguel_Texto_4:
.string "C.MIGUEL: Y así fue, os asegurásteis de\n"
	.string "que no volviera, arrebatándome todos\l"
	.string "mis POKÉMON.$"
	
PewterCity_Museum_1F_Miguel_Texto_4.1:
	.string "Pero para vuestra desgracia, uno de\n"
	.string "los mandamases de esta región se\l"
	.string "interesó por mi historia y me hizo\l"
	.string "su cómplice.$"

PewterCity_Museum_1F_Miguel_Texto_4.2:
	.string "Ahora tengo incluso mejores POKÉMON\n"
	.string "que en el TÚNEL ROCA.\l"
	.string "¡Nada te salvará esta vez, {PLAYER}!$"

PewterCity_Museum_1F_Miguel_Texto_5:
.string "El temido AERODACTYL, el depredador\n"
	.string "más fiero de la prehistoria{PAUSE 15} …{PAUSE 15}\l"
	.string "Dicen que su forma en estado salvaje era\l"
	.string "aún más poderosa que la obtenida por los\l"
	.string "métodos de resurrección actuales.$"

PewterCity_Museum_1F_Miguel_Texto_5.1:
	.string "El mismísimo LANCE lo incluye en su\n"
	.string "ejército de dragones{PAUSE 5}…{PAUSE 5}$"

PewterCity_Museum_1F_Miguel_Texto_6:
.string "Con un POKÉMON así, con el rey\n"
	.string "de los FÓSILES de KANTO{PAUSE 15}…{PAUSE 15}\l"
	.string "Mi equipo daría un salto de calidad,\l"
	.string "¡me convertiría en una eminencia y\l"
	.string "la envidia de los POKÉMANÍACOS!$"

PewterCity_Museum_1F_Miguel_Texto_7:
.string "C.MUSEO: ¡Eres una vergüenza para\n"
	.string "la comunidad científica!$"

PewterCity_Museum_1F_Miguel_Texto_8:
.string "C.MIGUEL: ¿Y qué esperas que haga,\n"
	.string "quedarme mirando cómo la región\l"
	.string "se cae a pedazos?$"

PewterCity_Museum_1F_Miguel_Texto_8.1:
	.string "Siempre los mismos CUBONE, SLOWPOKE,\n"
	.string "RHYHORN o a lo sumo LICKITUNG, los\l"
	.string "entrenadores que tienen un mísero\l"
	.string "PIDGEOTTO o un NIDORINO ya son\l"
	.string "considerados superiores a la\l"
	.string "media.$"

PewterCity_Museum_1F_Miguel_Texto_8.2:
	.string "En esta KANTO, si quieres tener POKÉMON\n"
	.string "fuertes de verdad, las únicas vías son\l"
	.string "venderse a las élites o pisotear al\l"
	.string "prójimo.$"

PewterCity_Museum_1F_Miguel_Texto_8.3:
	.string "Pero eso gente como vosotros lo sabe\n"
	.string "bien, ¿verdad, {PLAYER}?$"

PewterCity_Museum_1F_Miguel_Texto_8.4:
	.string "El resultado es lo que cuenta, y con\n"
	.string "con este ÁMBAR solo yo, LANCE y BILL\l"
	.string "tendremos un AERODACTYL en KANTO.$"

PewterCity_Museum_1F_Miguel_Texto_9:
.string "PETREL: Estás soñando, tienes delante\n"
	.string "tuya a un EJECUTIVO ROCKET y a\l"
	.string "uno de nuestros mejores ALTO RANGO.\l"
	.string "No vas a ir a ninguna parte.$"

PewterCity_Museum_1F_Miguel_Texto_10:
.string "C.MIGUEL: Tú no me interesas, PETREL.\n"
	.string "Mi lucha es con {PLAYER},\l"
	.string "Le dije que me las iba a pagar por\l"
	.string "lo del TÚNEL ROCA, y aquí estamos.$"

PewterCity_Museum_1F_Miguel_Texto_10.1:
	.string "¡Prepárate a sufrir, {PLAYER}!$"

PewterCity_Museum_1F_Miguel_Texto_11:
	.string "But my POKÉMON are even stronger!!$"

PewterCity_Museum_1F_Miguel_Texto_12:
	.string "S.MIGUEL: Grrrr…{PAUSE 15} So it was not enough, I\n"
	.string "won't let you capture me again like last\l"
	.string "time.$"

PewterCity_Museum_1F_Miguel_Texto_13:
	.string "PETREL: Take away his POKÉMON!$"

PewterCity_Museum_1F_Miguel_Texto_14:
.string "S.MIGUEL USED ESCAPE ROPE!$"

PewterCity_Museum_1F_Miguel_Texto_15:
	.string "PETREL: Damn scientist. The next time\n"
	.string "we won't take away his POKÉMON, we will\l"
	.string "take him directly to the jail so that\l"
	.string "way he doesn't cause any more trouble.$"

PewterCity_Museum_1F_Miguel_Texto_16:
	.string "He was just about to take the AMBER\n"
	.string "from us if it weren't for your\l"
	.string "intervention, take this as a thank you,\l"
	.string "young ROCKET.$"

PewterCity_Museum_1F_Miguel_Texto_17:
.string "YOU RECEIVED A LV:30 OMANYTE!$"

PewterCity_Museum_1F_Miguel_Texto_18:
	.string "PETREL: For real you became much\n"
	.string "stronger since you went to work along\l"
	.string "with GIOVANNI, even an EXECUTIVE as me\l"
	.string "would have had a tough time against the\l"
	.string "team that scientist had.$"

PewterCity_Museum_1F_Miguel_Texto_19:
	.string "After all this, we are indebted to you,\n"
	.string "if you want to do some tests with the\l"
	.string "FOSSIL for a while, we are fine with\l"
	.string "that.$"

PewterCity_Museum_1F_Miguel_Texto_20:
	.string "PETREL: Perfect, you won't regret it! We\n"
	.string "will allocate a percentage of our\l"
	.string "profits for your collaboration, TEAM\l"
	.string "ROCKET knows how to reciprocate favors\l"
	.string "like these and generously.$"

PewterCity_Museum_1F_Miguel_Texto_21:
	.string "PETREL: This was possible due you\n"
	.string "{PLAYER}, take this like a personal\l"
	.string "present.$"

PewterCity_Museum_1F_Miguel_Texto_22:
	.string "PETREL: The POISON BARB boosts a 20%\n"
	.string "the POISON TYPE moves. Equipping it will\l"
	.string "make your GOLBAT's POISON FANG even\l"
	.string "more lethal!$"

PewterCity_Museum_1F_Miguel_Texto_23:
	.string "Cya later, {PLAYER}, scientists…$"

PewterCity_Museum_1F_Miguel_Move_1:
walk_up
walk_in_place_up
step_end

PewterCity_Museum_1F_Miguel_Move_2:
walk_right
walk_up
step_end

PewterCity_Museum_1F_Miguel_Move_3:
emote_exclamation_mark
step_end

PewterCity_Museum_1F_Miguel_Move_4:
face_right
step_end

PewterCity_Museum_1F_Miguel_Move_5:
face_up
step_end

PewterCity_Museum_1F_Miguel_Move_6:
walk_down
step_end

PewterCity_Museum_1F_Miguel_Move_7:
face_down
step_end

PewterCity_Museum_1F_Miguel_Move_8:
walk_down
walk_right
walk_down
step_end

PewterCity_Museum_1F_Miguel_Move_9:
walk_up
walk_up
walk_left
walk_in_place_down
step_end

PewterCity_Museum_1F_Miguel_Move_10:
walk_in_place_down
step_end

PewterCity_Museum_1F_Miguel_Move_11:
walk_up
walk_right
walk_up
walk_up
step_end

PewterCity_Museum_1F_Miguel_Move_12:
walk_down
walk_down
step_end

PewterCity_Museum_1F_Miguel_Move_13:
walk_left
walk_down
walk_down
walk_down
step_end

PewterCity_Museum_1F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE125_STATE, 0
goto_if_gt PewterCity_Museum_1F_Entrenador_Especial_3
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt PewterCity_Museum_1F_Entrenador_Especial_2
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

PewterCity_Museum_1F_Entrenador_Especial_2::
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_Museum_1F_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CINTAELEGIDA, PewterCity_Museum_1F_Entrenador_Especial_Texto_8
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_CHOICE_BAND
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE125_STATE, 1
release
end

PewterCity_Museum_1F_Entrenador_Especial_2_No::
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end

PewterCity_Museum_1F_Entrenador_Especial_3::
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end

PewterCity_Museum_1F_Entrenador_Especial_Texto_1.1:
	.string "You obtained a CHOICE BAND from the\n"
	.string "SCIENTIST!$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_1:
	.string "I will be honest, SEISMIC TOSS is a\n"
	.string "lousy move, just would be helpful for\l"
	.string "POKÉMON like CHANSEY who is unable to\l"
	.string "do physical damage, anyone who uses it\l"
	.string "on a CHARIZARD is an incompetent, I'm\l"
	.string "willing to give something that really\l"
	.string "causes damage to the TRAINER capable\l"
	.string "of collecting all 8 GYM BADGES.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_3:
	.string "What a pity, I am so sorry for making\n"
	.string "you waste your time.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_4:
	.string "The CHOICE BAND boosts a 50% the\n"
	.string "physical attack of the POKÉMON that\l"
	.string "it's holding it. But at the cost of\l"
	.string "restricting it to a single move, anyway,\l"
	.string "who cares about that restriction when\l"
	.string "it allows you to sweep everything in one\l"
	.string "hit?$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_5:
	.string "Wow! Not everyday you can see someone\n"
	.string "with all the BADGES! I am tired of\l"
	.string "investigating the process of pearl\l"
	.string "formation inside the shell of CLOYSTER!\l"
	.string "If you can defeat me in battle, I'll give\l"
	.string "you an incredible item.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_6:
.string "So, do you accept the challenge?$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_7:
.string "All right!\n"
	.string "Finally!\l"
	.string "A worthy opponent!$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_8:
.string "It was a great battle!$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_9:
	.string "I haven't seen a TRAINER like you in all\n"
	.string "my years as a researcher, if you decide\l"
	.string "to take on the POKÉMON LEAGUE\l"
	.string "challenge, it's better to have this with\l"
	.string "you, it will increase your chances of\l"
	.string "success.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_10:
	.string "Blargh! I will keep defeating once again\n"
	.string "my scientist associates with no skills\l"
	.string "to battling!$"
