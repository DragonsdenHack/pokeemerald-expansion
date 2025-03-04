Azalea_Gym_MapScripts::
	.byte 0




AzaleaGym1::
end



AzaleaGym2::
end



AzaleaGym3::
end



AzaleaGym4::
end



AzaleaGym_EventScript_Cazabichos::
	trainerbattle_single TRAINER_WALLY_MAUVILLE, AzaleaGym_Text_CazabichosIntro, AzaleaGym_Text_CazabichosDefeated
	msgbox AzaleaGym_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaGym_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_WALLY_VR_2, AzaleaGym_Text_Cazabichos2Intro, AzaleaGym_Text_Cazabichos2Defeated
	msgbox AzaleaGym_Text_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaGym_EventScript_Sabio::
	trainerbattle_single TRAINER_WALLY_VR_3, AzaleaGym_Text_SabioIntro, AzaleaGym_Text_SabioDefeated
	msgbox AzaleaGym_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end


AzaleaGym_Combate_Cesar::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 130
goto_if_gt Azalea_Gym_Combate_Cesar_2
msgbox AzaleaGym_Combate_Cesar_Texto_1 MSGBOX_AUTOCLOSE
msgbox AzaleaGym_Combate_Cesar_Texto_2 MSGBOX_AUTOCLOSE
msgbox AzaleaGym_Combate_Cesar_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaGym_Combate_Cesar_Texto_4 MSGBOX_AUTOCLOSE
playse 414
delay 40
msgbox AzaleaGym_Combate_Cesar_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaGym_Combate_Cesar_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CESAR, AzaleaGym_Combate_Cesar_Texto_7
msgbox AzaleaGym_Combate_Cesar_Texto_8 MSGBOX_AUTOCLOSE
msgbox AzaleaGym_Combate_Cesar_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox AzaleaGym_Combate_Cesar_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox AzaleaGym_Combate_Cesar_Texto_9.2 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox AzaleaGym_Combate_Cesar_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_GRUBBIN, 25, ITEM_NONE
waitfanfare
msgbox AzaleaGym_Combate_Cesar_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox AzaleaGym_Combate_Cesar_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM82
msgbox AzaleaGym_Combate_Cesar_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox AzaleaGym_Combate_Cesar_Texto_11.3 MSGBOX_NPC
setflag FLAG_BADGE10_GET
setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
setvar VAR_UNUSED_0x40F7, 131
release
end

AzaleaGym_Combate_Cesar_Texto_11.1:
.string "Ah, and one more thing. Take this.$"

AzaleaGym_Combate_Cesar_Texto_11.2:
	.string "{PLAYER} obtained the TM82 STRUGGLE\n"
	.string "BUG from KURT!!$"

AzaleaGym_Combate_Cesar_Texto_11.3:
	.string "Its power might not be impressive, but\n"
	.string "it will drain the opponent's SPECIAL\l"
	.string "ATTACK. If you use it strategically, it\l"
	.string "can be incredibly helpful, trust me!$"


Azalea_Gym_Combate_Cesar_2::
setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
msgbox AzaleaGym_Combate_Cesar_Texto_12 MSGBOX_AUTOCLOSE
release
end

AzaleaGym_Combate_Cesar_Texto_1:
.string "KURT: {PLAYER}!\n"
	.string "You are here!$"

AzaleaGym_Combate_Cesar_Texto_2:
	.string "I must confess that I am eager to fight\n"
	.string "you. Despite my old age, my enthusiasm\l"
	.string "for POKÉMON battles is still as strong\l"
	.string "as when I was a child.$"

AzaleaGym_Combate_Cesar_Texto_3:
.string "El problema es que, llegados a\n"
	.string "cierto nivel y después de todo lo\l"
	.string "que he visto y vivido, pocas cosas\l"
	.string "pueden llegar a sorprenderme.\p"
	.string "Ya encuentro mucha más satisfacción\n"
	.string "en pulir mi propia técnica que en\l"
	.string "luchar frente a rivales que son ya\l"
	.string "un libro abierto, tanto para mi\l"
	.string "equipo como para mí.$"

AzaleaGym_Combate_Cesar_Texto_4:
.string "{PAUSE 5}…{PAUSE 5}$"

AzaleaGym_Combate_Cesar_Texto_5:
	.string "ALDER has shown me that there's always\n"
	.string "something extraordinary out there to\l"
	.string "discover, even when you think you've\l"
	.string "seen it all.$"

AzaleaGym_Combate_Cesar_Texto_6:
	.string "Will you, {PLAYER}, be another one of\n"
	.string "those singularities capable of\l"
	.string "reigniting the passion of the old glory\l"
	.string "of JOHTO during battle? Let's find out!$"

AzaleaGym_Combate_Cesar_Texto_7:
.string "Ah{PAUSE 15}…{PAUSE 15} Este combate sí.$"

AzaleaGym_Combate_Cesar_Texto_8:
	.string "I can't remember the last time that\n"
	.string "someone broke the bond between my\l"
	.string "BUTTERFREE and me.$"

AzaleaGym_Combate_Cesar_Texto_9:
	.string "Whoever you are, there is no doubt that\n"
	.string "you have high goals. The skill level of\l"
	.string "your team represents that. I would like\l"
	.string "you to have this POKÉMON I'd gotten\l"
	.string "various specimens of long ago, in one of\l"
	.string "my many journeys.$"

AzaleaGym_Combate_Cesar_Texto_9.1:
	.string "Take this, here you have\n"
	.string "the HIVEBADGE.$"

AzaleaGym_Combate_Cesar_Texto_9.2:
	.string "I also want you to keep this POKÉMON. I\n"
	.string "obtained several specimens long ago\l"
	.string "during one of my many journeys.$"

AzaleaGym_Combate_Cesar_Texto_10:
.string "¡¡OBTUVISTE UN GRUBBIN AL NV.25!!$"

AzaleaGym_Combate_Cesar_Texto_11:
.string "VIKAVOLT es uno de mis TIPO BICHO\n"
	.string "favoritos, su portentoso ATAQUE\l"
	.string "ESPECIAL es toda una rareza que\l"
	.string "puede abrir huecos en cualquier\l"
	.string "equipo.\p"
	.string "No lo parece, ¡pero sus descargas\n"
	.string "eléctricas son más potentes que\l"
	.string "las del mismísimo ZAPDOS!$"

AzaleaGym_Combate_Cesar_Texto_12:
.string "Ahora que lo pienso…\n"
	.string "No le pregunté a MIRTO de dónde\l"
	.string "venía. Me gustaría tener al menos\l"
	.string "la forma normal de ese POKÉMON tan\l"
	.string "especial.\p"
	.string "Esa polilla es lo más\n"
	.string "increíble que he visto jamás.\l"
	.string "Qué pena que las mejores flores\l"
	.string "acaben por marchitarse antes, pero\l"
	.string "nada podrá arrebatarles la luz que\l"
	.string "mostraron al mundo mientras duró.$"



AzaleaGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 130
goto_if_gt AzaleaGym_Gym_Dude_2
msgbox AzaleaGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

AzaleaGym_Gym_Dude_2::
msgbox AzaleaGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

AzaleaGym_Gym_Dude_Texto_1:
.string "No sé quien eres ni por qué estás\n"
	.string "aquí.\l"
	.string "¡Pero estoy encantado de tener\l"
	.string "un nuevo aspirante!\p"
	.string "Escucha, CÉSAR es un maestro del\n"
	.string "TIPO BICHO. Puedes usar el\l"
	.string "VOLADOR, FUEGO y ROCA contra él,\l"
	.string "pero te aconsejo usarlos\l"
	.string "sabiamente. Puede neutralizar a\l"
	.string "todos estos tipos. Varios de sus\l"
	.string "POKÉMON saben GIGADRENADO, para el\l"
	.string "VOLADOR cuenta con un BICHO/ELÉCTRICO\l"
	.string "que tira rayos como nadie.\p"
	.string "Lo mismo aplica para el TIPO FUEGO,\n"
	.string "cuenta con un AGUA/BICHO muy sólido.\l"
	.string "Debes estar fino en los 1VS1, como sea\l"
	.string "él quien derrote a uno de los tuyos\l"
	.string "antes, será difícil recuperar la ventaja.\l"
	.string "¡Ánimo!$"

AzaleaGym_Gym_Dude_Texto_2:
.string "¡No puedo creerlo!\n"
	.string "¡La última vez que vi perder así a\l"
	.string "CÉSAR, PUEBLO AZALEA y el ENCINAR\l"
	.string "no estaban ni separados por el\l"
	.string "puesto de seguridad!\l"
	.string "¡Increíble!$"



AzaleaGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 130
goto_if_gt AzaleaGym_Estatua_2
msgbox AzaleaGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end

AzaleaGym_Estatua_2::
msgbox AzaleaGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


AzaleaGym_Estatua_Texto_1:
.string "AZALEA TOWN POKÉMON GYM \n"
	.string "LEADER: KURT\p"
	.string "WINNING TRAINERS:\n"
	.string "It is empty!$"

AzaleaGym_Estatua_Texto_2:
.string "AZALEA TOWN POKÉMON GYM\n"
	.string "LEADER: KURT\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"
