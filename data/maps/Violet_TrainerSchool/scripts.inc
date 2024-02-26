Violet_TrainerSchool_MapScripts::
	.byte 0

VioletTrainerSchool1::
end



VioletTrainerSchool2::
lock
msgbox VioletTrainerSchool2_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool2_Texto_1:
	.string "I knew that FEAROW wasn't that good…$"



VioletTrainerSchool3::
lock
msgbox VioletTrainerSchool3_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool3_Texto_1:
.string "...$"



VioletTrainerSchool4::
lock
msgbox VioletTrainerSchool4_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool4_Texto_1:
	.string "So… Can DODRIO really do that much\n"
	.string "damage?$"


VioletTrainerSchool5::
lock
msgbox VioletTrainerSchool5_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool5_Texto_1:
	.string "You'll see, once I can go back to ROUTE\n"
	.string "13 in KANTO, no BIRDKEEPER there will\l"
	.string "believe I could attend a class with the\l"
	.string "real FALKNER personally…$"


VioletTrainerSchool6::
lock
msgbox VioletTrainerSchool6_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool6_Texto_1:
	.string "I didn't know that NOCTOWL is a PSYCHIC\n"
	.string "TYPE also…$"



VioletTrainerSchool7::
lock
msgbox VioletTrainerSchool7_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool7_Texto_1:
	.string "This can't be… The weakest of his\n"
	.string "POKÉMON is much stronger than the best\l"
	.string "of my POKÉMON…$"



VioletTrainerSchool8::
lock
msgbox VioletTrainerSchool8_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool8_Texto_1:
	.string "Everything is okay, but… Where did you\n"
	.string "get that powerful bird? It's far\l"
	.string "superior to PIDGEOT.$"



VioletTrainerSchool9::
end



VioletTrainerSchool10::
lock
msgbox VioletTrainerSchool10_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool10_Texto_1:
	.string "And keep this in your minds, to awaken a\n"
	.string "POKÉMON, we only need to use an\l"
	.string "AWAKENING on it, or have a POKÉ FLUTE.$"



VioletTrainerSchool11::
lock
msgbox VioletTrainerSchool11_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool11_Texto_1:
	.string "These classes are so boring, I'm sure\n"
	.string "that FALKNER could make it more\l"
	.string "interesting…$"



VioletTrainerSchool12::
lock
msgbox VioletTrainerSchool12_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool12_Texto_1:
	.string "I know that I need an ANTIDOTE to heal\n"
	.string "the POISON. Can you teach something\l"
	.string "else?$"



VioletTrainerSchool_EventScript_ReceiveStarly::
    lock
    faceplayer
	checkmoncatch SPECIES_STARLY
	goto_if_eq VAR_RESULT, FALSE, VioletTrainerSchool_EventScript_TakeStarly 
	msgbox VioletTrainerSchool_Text_9, MSGBOX_DEFAULT
	release
	end



VioletTrainerSchool_EventScript_TakeStarly::
    msgbox VioletTrainerSchool_Text_TakeStarly MSGBOX_DEFAULT
	msgbox VioletTrainerSchool_Text_TakeStarly2 MSGBOX_DEFAULT
	msgbox VioletTrainerSchool_Text_TakeStarly3 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox VioletTrainerSchool_Text_MensajeStarly, MSGBOX_DEFAULT
	givemon SPECIES_STARLY, 10, ITEM_FLYING_GEM
	waitfanfare  
	release
	end 



VioletTrainerSchool_Text_TakeStarly:
	.string "You were also in FALKNER's class,\n"
	.string "weren't you?$"




VioletTrainerSchool_Text_TakeStarly2:
	.string "It's amazing how knowledgeable he is\n"
	.string "about the FLYING TYPE. Additionally, he\l"
	.string "always seeks to resolve inquiries in the\l"
	.string "most practical way.$"



VioletTrainerSchool_Text_TakeStarly3:
	.string "He even gave me a bird from some\n"
	.string "distant region when he saw my interest\l"
	.string "in them. You know what? I paired it with\l"
	.string "my PIDGEOT, and it laid several eggs\l"
	.string "that hatched. I'll give you one of the\l"
	.string "ones that came out!$"



VioletTrainerSchool_Text_MensajeStarly:
.string "YOU OBTAINED A LV.10 STARLY!$"


VioletTrainerSchool_Text_9:
	.string "Be careful with STARLY when it grows.\n"
	.string "Its final evolution is more aggressive\l"
	.string "and offensive than PIDGEOT!$"

Violet_TrainerSchool_Discurso_Pegaso::
applymovement OBJ_EVENT_ID_PLAYER, Violet_TrainerSchool_Discurso_Pegaso_Move_1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Violet_TrainerSchool_Discurso_Pegaso_Move_2
waitmovement 0x0
special RemoveCameraObject
delay 15
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_1 MSGBOX_AUTOCLOSE
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_3 MSGBOX_AUTOCLOSE
delay 40
applymovement 4, Violet_TrainerSchool_Discurso_Pegaso_Move_4
applymovement 3, Violet_TrainerSchool_Discurso_Pegaso_Move_5
applymovement 5, Violet_TrainerSchool_Discurso_Pegaso_Move_6
applymovement 2, Violet_TrainerSchool_Discurso_Pegaso_Move_6
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Violet_TrainerSchool_Discurso_Pegaso_Move_8
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_7
applymovement 5, Violet_TrainerSchool_Discurso_Pegaso_Move_8
applymovement 2, Violet_TrainerSchool_Discurso_Pegaso_Move_8
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_9
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_10
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
fadescreen 1
removeobject 2
removeobject 4
removeobject 6
removeobject 7
removeobject 8
delay 20
fadescreen 0
delay 10
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_7
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_11 MSGBOX_AUTOCLOSE
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_8
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_13 MSGBOX_AUTOCLOSE
applymovement 3, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_14 MSGBOX_AUTOCLOSE
applymovement 3, Violet_TrainerSchool_Discurso_Pegaso_Move_3.1
waitmovement 0x0
removeobject 3
playse SE_EXIT
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Violet_TrainerSchool_Discurso_Pegaso_Move_13
waitmovement 0x0
special RemoveCameraObject
delay 20
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_15 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_14
waitmovement 0x0
delay 15
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_15
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_16
applymovement OBJ_EVENT_ID_PLAYER, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_14
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_18 MSGBOX_AUTOCLOSE
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_4
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_17
waitmovement 0x0
removeobject 1
removeobject 3
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 121
release
end

Violet_TrainerSchool_Discurso_Pegaso_Texto_1:
	.string "FALKNER: So, that concludes the short\n"
	.string "overview of all the birds found in KANTO\l"
	.string "and JOHTO. Remember, FEAROW signifies\l"
	.string "variety, DODRIO signifies offense,\l"
	.string "NOCTOWL signifies endurance, and\l"
	.string "PIDGEOT signifies balance.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_2:
	.string "Now we'll move on to the strategy\n"
	.string "section, and here I'd like to emphasize\l"
	.string "two of the biggest weaknesses of the\l"
	.string "FLYING TYPE: ROCK and ELECTRIC.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_3:
	.string "Is there anyone here who knows how a\n"
	.string "FLYING TYPE can effectively deal with\l"
	.string "the ELECTRIC TYPE or the ROCK TYPE?$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_4:
	.string "????: There's a move called MUD-SLAP\n"
	.string "that most birds can learn, and it's\l"
	.string "super effective against these types.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_5:
	.string "FALKNER: We've already discussed this,\n"
	.string "son, the power of MUD-SLAP is very poor,\l"
	.string "and the decrease in accuracy it offers\l"
	.string "makes us fall into the traps of chance,\l"
	.string "losing control of the battle. I'm not\l"
	.string "talking about turning this into a\l"
	.string "gamble, and seeing if we can survive by\l"
	.string "sheer luck; I'm talking about taking\l"
	.string "down these types decisively with\l"
	.string "FLYING TYPE POKÉMON.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_6:
	.string "In this case, the best defense is a\n"
	.string "good offense. A trained and equipped\l"
	.string "DODRIO with a FOCUS SASH will knock out\l"
	.string "100% of ELECTRIC TYPES with a single\l"
	.string "STOMPING TANTRUM hit, only outsped by\l"
	.string "a few like JOLTEON or ELECTRODE, for\l"
	.string "which we have the CHOICE SCARF.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_7:
	.string "FEAROW with DRILL RUN or PIDGEOT with\n"
	.string "CLOSE COMBAT will also hit super\l"
	.string "effectively, taking advantage of the\l"
	.string "low SPEED of ROCK TYPES to attack\l"
	.string "first, or the low DEFENSE of ELECTRIC\l"
	.string "TYPES to knock them out in one hit.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_8:
	.string "This teaches us that in a POKÉMON\n"
	.string "battle, there are countless variables\l"
	.string "at play, and any POKEMON, with the right\l"
	.string "moves, items, and training, is capable of\l"
	.string "taking down any other.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_9:
	.string "Note that we have barely scratched the\n"
	.string "surface of the resources we have at\l"
	.string "our disposal to counter type\l"
	.string "disadvantages. A GLIGAR or GLISCOR will\l"
	.string "be directly immune to ELECTRIC TYPE\l"
	.string "and will resist ROCK TYPE neutrally,\l"
	.string "while also hitting by STAB both types\l"
	.string "super effectively with EARTHQUAKE due\l"
	.string "to being both FLYING and GROUND TYPE.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_10:
	.string "That's all for today's lesson. In our\n"
	.string "next session, we'll explore how the move\l"
	.string "ROOST can effectively eliminate all\l"
	.string "weaknesses of FLYING TYPE, allowing us\l"
	.string "to adopt a defensive strategy against\l"
	.string "the mentioned types. However, you'll\l"
	.string "also discover why it can be a\l"
	.string "double-edged sword. Thank you all for\l"
	.string "coming.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_11:
	.string "FALKNER: FALKNER, return to SPROUT\n"
	.string "TOWER immediately to continue your\l"
	.string "training.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_12:
.string "But… dad…\n"
	.string "I want to start training\l"
	.string "a PIDGEY!$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_13:
	.string "FALKNER: You're not ready yet. Before\n"
	.string "you start, you need to polish your\l"
	.string "skills to the fullest. You're still very\l"
	.string "young. If you prepare well in these\l"
	.string "couple of years, I assure you that once\l"
	.string "you take flight, you'll touch the sky.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_14:
.string "¡Mphf!\n"
	.string "¡Estoy harto de ver BELLSPROUTS!$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_15:
.string "PEGASO: Algún día el GIMNASIO de\n"
	.string "MALVA será tuyo, hijo...$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_16:
.string "Vaya, tenemos un alumno curioso.\n"
	.string "¿Querías hacerme alguna pregunta?\l"
	.string "Estaré encantado de responderte.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_17:
.string "¿Combatir?\n"
	.string "Lo siento chico, pareces buen\l"
	.string "entrenador, pero hace ya tiempo\l"
	.string "que decidí apartarme de el combate\l"
	.string "POKÉMON tal y como es concebido\l"
	.string "hoy en día, además, las MEDALLAS\l"
	.string "de JOHTO actualmente no tienen\l"
	.string "validez. Según lo poco que he\l"
	.string "visto, la LIGA POKÉMON regresó,\l"
	.string "pero solo para KANTO.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_18:
.string "¿Son las ganas de mejorar como\n"
	.string "ENTRENADOR, conocer nuevos\l"
	.string "POKÉMON y proseguir con tu propio\l"
	.string "viaje lo que te llevan a pedirme\l"
	.string "este combate?\l"
	.string "¿Y no el colgarte una MEDALLA para\l"
	.string "exponerla ante todos?$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_19:
.string "Interesante...\n"
	.string "¿Eres {PLAYER}?\l"
	.string "Si cumples el reto que voy a\l"
	.string "proponerte te concederé ese\l"
	.string "combate.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_20:
.string "Sube a la cima de la TORRE\n"
	.string "BELLSPROUT y habla con el maestro\l"
	.string "anciano. Dile que te envío yo.$"


Violet_TrainerSchool_Discurso_Pegaso_Texto_21:
.string "Si le derrotas, lucharé contigo, y\n"
	.string "usaré a mis mejores POKÉMON.\l"
	.string "Pase lo que pase, espero que te\l"
	.string "enriquezca la experiencia de\l"
	.string "visitar un lugar tan sagrado como\l"
	.string "ese. Eso también es parte de tu\l"
	.string "viaje, ¿no?$"

Violet_TrainerSchool_Discurso_Pegaso_Move_1:
walk_in_place_right
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_2:
walk_right
walk_right
walk_down
walk_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_3:
walk_in_place_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_3.1:
walk_in_place_down
walk_down
walk_down
walk_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_4:
face_right
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_5:
walk_in_place_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_6:
face_left
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_7:
walk_left
walk_down
walk_left
face_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_8:
face_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_9:
walk_right
walk_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_10:
walk_right
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_11:
face_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_12:
walk_down
walk_down
walk_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_13:
walk_left
walk_left
walk_up
walk_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_14:
emote_exclamation_mark
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_15:
face_left
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_16:
walk_left
walk_left
walk_left
face_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_17:
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
step_end
