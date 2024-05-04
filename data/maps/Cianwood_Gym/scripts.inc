Cianwood_Gym_MapScripts::
	.byte 0

CianwoodGym1::
end



CianwoodGym2::
end



CianwoodGym3::
end



CianwoodGym4::
end



CianwoodGym5::
end



CianwoodGym6::
end



CianwoodGym7::
end



CianwoodGym8::
end



CianwoodGym9::
end



CianwoodGym_EventScript_Karateka::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, CianwoodGym_Text_KaratekaIntro, CianwoodGym_Text_KaratekaDefeated
	msgbox CianwoodGym_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



CianwoodGym_EventScript_Karateka2::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_4, CianwoodGym_Text_Karateka2Intro, CianwoodGym_Text_Karateka2Defeated
	msgbox CianwoodGym_Text_Karateka2PostBattle, MSGBOX_AUTOCLOSE
	end



CianwoodGym_EventScript_Karateka3::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_5, CianwoodGym_Text_Karateka3Intro, CianwoodGym_Text_Karateka3Defeated
	msgbox CianwoodGym_Text_Karateka3PostBattle, MSGBOX_AUTOCLOSE
	end



CianwoodGym_EventScript_Karateka4::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, CianwoodGym_Text_Karateka4Intro, CianwoodGym_Text_Karateka4Defeated
	msgbox CianwoodGym_Text_Karateka4PostBattle, MSGBOX_AUTOCLOSE
	end

Cianwood_Gym_Combate_Anibal::
lock
faceplayer
compare VAR_VERDANTURF_TOWN_STATE, 0
goto_if_gt Cianwood_Gym_Combate_Anibal_3
compare VAR_UNUSED_0x40F7, 149
goto_if_gt Cianwood_Gym_Combate_Anibal_2
compare VAR_UNUSED_0x40F7, 149
goto_if_gt Cianwood_Gym_Combate_Anibal_2
msgbox Cianwood_Gym_Combate_Anibal_Texto_1 MSGBOX_NPC
msgbox Cianwood_Gym_Combate_Anibal_Texto_2 MSGBOX_NPC
msgbox Cianwood_Gym_Combate_Anibal_Texto_3 MSGBOX_NPC
delay 20
msgbox Cianwood_Gym_Combate_Anibal_Texto_4 MSGBOX_NPC
playse 414
delay 40
msgbox Cianwood_Gym_Combate_Anibal_Texto_5 MSGBOX_NPC
delay 20
msgbox Cianwood_Gym_Combate_Anibal_Texto_6 MSGBOX_NPC
trainerbattle_no_intro TRAINER_ANIBAL, Cianwood_Gym_Combate_Anibal_Texto_7
msgbox Cianwood_Gym_Combate_Anibal_Texto_8 MSGBOX_NPC
msgbox Cianwood_Gym_Combate_Anibal_Texto_9 MSGBOX_NPC
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox Cianwood_Gym_Combate_Anibal_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox Cianwood_Gym_Combate_Anibal_Texto_9.2 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox Cianwood_Gym_Combate_Anibal_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_STUFFUL, 25, ITEM_NONE
waitfanfare
msgbox Cianwood_Gym_Combate_Anibal_Texto_11 MSGBOX_NPC
delay 10
msgbox Cianwood_Gym_Combate_Anibal_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM65
msgbox Cianwood_Gym_Combate_Anibal_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox Cianwood_Gym_Combate_Anibal_Texto_11.3 MSGBOX_NPC
setflag FLAG_BADGE13_GET
clearflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
setvar VAR_UNUSED_0x40F7, 150
release
end

Cianwood_Gym_Combate_Anibal_Texto_11.1:
.string "¡Jah! ¡Llévate también esta MT!$"

Cianwood_Gym_Combate_Anibal_Texto_11.2:
.string "¡¡{PLAYER} obtuvo la MT65 PUNTAPIE\n"
	.string "de manos de ANIBAL!!$"

Cianwood_Gym_Combate_Anibal_Texto_11.3:
.string "Los TIPO LUCHA no suelen tener la mejor\n"
	.string "VELOCIDAD. Con este movimiento no solo\l"
	.string "causarás daño, ¡también volverás\l"
	.string "lentos a tus rivales!$"

Cianwood_Gym_Combate_Anibal_2::
msgbox Cianwood_Gym_Combate_Anibal_Texto_12 MSGBOX_NPC
release
end

Cianwood_Gym_Combate_Anibal_3::
compare VAR_VERDANTURF_TOWN_STATE, 1
goto_if_gt Cianwood_Gym_Combate_Anibal_4
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Cianwood_Gym_Combate_Anibal_3_Move_1
waitmovement 0x0
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Cianwood_Gym_Combate_Anibal_3_Move_2
waitmovement 0x0
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_3 MSGBOX_AUTOCLOSE
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_5 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, Cianwood_Gym_Combate_Anibal_3_Move_1
waitmovement 0x0
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Cianwood_Gym_Combate_Anibal_3_Move_2
waitmovement 0x0
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_7 MSGBOX_AUTOCLOSE
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_8 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
setvar VAR_VERDANTURF_TOWN_STATE, 2
release
end

Cianwood_Gym_Combate_Anibal_3_Move_1:
face_right
step_end

Cianwood_Gym_Combate_Anibal_3_Move_2:
face_player
step_end

Cianwood_Gym_Combate_Anibal_4::
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_8 MSGBOX_AUTOCLOSE
release
end

Cianwood_Gym_Combate_Anibal_3_Texto_1:
.string "ANIBAL: ¡Ah, {PLAYER}! ¿Qué te trae\n"
	.string "de vuelta? Si deseas volver a combatir\l"
	.string "conmigo, me temo que ya es demasiado\l"
	.string "tarde.$"

Cianwood_Gym_Combate_Anibal_3_Texto_2:
.string "Así es{PAUSE 25}…{PAUSE 25} hace unos días liberé a mis\n"
	.string "POKÉMON, tal y como te dije en nuestra\l"
	.string "batalla, hace ya casi 1 año{PAUSE 5}…{PAUSE 5}$"

Cianwood_Gym_Combate_Anibal_3_Texto_3:
.string "En fin, cada cosa tiene su tiempo, ¿no\n"
	.string "crees? Ahora estoy, humildemente,\l"
	.string "criando a dos pequeños POLIWAG y\l"
	.string "MANKEY, sin ninguna pretensión\l"
	.string "competitiva.$"

Cianwood_Gym_Combate_Anibal_3_Texto_4:
.string "Entonces, ¿cuál es el motivo de tu\n"
	.string "visita?$"

Cianwood_Gym_Combate_Anibal_3_Texto_5:
.string "{PAUSE 5}…{PAUSE 5}$"

Cianwood_Gym_Combate_Anibal_3_Texto_6:
.string "Mmm, ya veo, lo que me dices es cierto,\n"
	.string "ese lugar existe. Fue descubierto por\l"
	.string "los más avezados MONTAÑEROS de esta\l"
	.string "ciudad. Pero la historia de ese lugar es\l"
	.string "mucho más antigua.$"

Cianwood_Gym_Combate_Anibal_3_Texto_7:
.string "En su día yo mismo entré, hace ya\n"
	.string "décadas, actualmente no sabría\l"
	.string "decirte el lugar exacto. Sin embargo, sé\l"
	.string "de alguien que lo conoce a la\l"
	.string "perfección.$"

Cianwood_Gym_Combate_Anibal_3_Texto_8:
.string "El habitante de la pequeña casita que\n"
	.string "hay al norte de la ciudad ha vuelto, él\l"
	.string "suele visitar la zona. Seguro que\l"
	.string "estará encantado de acompañarte, a\l"
	.string "poco que te conozca. ¡Buena suerte\l"
	.string "{PLAYER}!$"

Cianwood_Gym_Combate_Anibal_Texto_1:
.string "ANÍBAL: Ah, {PLAYER}, ¿no?\n"
	.string "Bienvenido a mi humilde GIMNASIO.$"

Cianwood_Gym_Combate_Anibal_Texto_2:
.string "Aquí, humanos y POKÉMON pelean como\n"
	.string "iguales. Una de nuestras máximas\l"
	.string "es que si no puedes predicar con\l"
	.string "el ejemplo y seguir el ritmo a\l"
	.string "tus propios POKÉMON, no eres digno\l"
	.string "de continuar entrenándolos.$"

Cianwood_Gym_Combate_Anibal_Texto_3:
.string "Por ello, hablar de ENTRENADORES y\n"
	.string "POKÉMON pierde su sentido. Todos\l"
	.string "aprendemos y mejoramos juntos, de\l"
	.string "forma que al combatir frente a\l"
	.string "otros actuamos como un único\l"
	.string "cuerpo.$"

Cianwood_Gym_Combate_Anibal_Texto_4:
.string "{PAUSE 15}…{PAUSE 15}$"

Cianwood_Gym_Combate_Anibal_Texto_5:
.string "Lamentablemente, la edad me ha\n"
	.string "alcanzado. No la vejez, pero si el\l"
	.string "fin de mi plenitud física. A mis\l"
	.string "51 años, he hecho todo lo posible\l"
	.string "para mantenerme al nivel de mis\l"
	.string "mejores POKÉMON, y he comprobado\l"
	.string "que físicamente ya no puedo dar el\l"
	.string "100%.$"

Cianwood_Gym_Combate_Anibal_Texto_6:
.string "Me cuesta más recuperarme de\n"
	.string "grandes esfuerzos, también\l"
	.string "arrancar antes de realizarlos,\l"
	.string "pero te diré una cosa: ¡en el\l"
	.string "fragor del combate sigo siendo el\l"
	.string "mismo de siempre!$"

Cianwood_Gym_Combate_Anibal_Texto_7:
.string "Sí, ¡sabía que podía volver a este\n"
	.string "nivel!$"

Cianwood_Gym_Combate_Anibal_Texto_8:
.string "Eres un gran ENTRENADOR, {PLAYER},\n"
	.string "justo el reto que necesitaba para\l"
	.string "saber exactamente en qué punto\l"
	.string "estoy. Me has hecho ver que aún\l"
	.string "puedo aguantar un poco más, antes\l"
	.string "de que mis mejores POKÉMON\l"
	.string "prosigan su viaje sin mí.$"

Cianwood_Gym_Combate_Anibal_Texto_9:
	.string "No hay duda, ¡mereces portar nuestro\n"
	.string "emblema!$"

Cianwood_Gym_Combate_Anibal_Texto_9.1:
	.string "Toma, aquí tienes la\n"
	.string "MEDALLA TORMENTA.$"

Cianwood_Gym_Combate_Anibal_Texto_9.2:
.string "Me gustaría que te quedaras con\n"
	.string "este POKÉMON, tiene grandes dotes\l"
	.string "para la lucha.$"

Cianwood_Gym_Combate_Anibal_Texto_10:
.string "¡¡OBTUVISTE UN STUFFUL AL Nv.25!!$"

Cianwood_Gym_Combate_Anibal_Texto_11:
.string "No encontrarás en todo KANTO o\n"
	.string "JOHTO un POKÉMON LUCHA así. Tiene\l"
	.string "el don de encajar golpes físicos\l"
	.string "como ningún otro, al tiempo que\l"
	.string "pega durísimo.$"

Cianwood_Gym_Combate_Anibal_Texto_12:
.string "Creo que podré aguantar 1 año más,\n"
	.string "pasado ese tiempo liberaré a mis\l"
	.string "POKÉMON y comenzaré de 0 con un\l"
	.string "MANKEY y un POLIWAG, sin\l"
	.string "pretensiones ni presión alguna.$"

CianwoodGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 149
goto_if_gt CianwoodGym_Gym_Dude_2
msgbox CianwoodGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

CianwoodGym_Gym_Dude_2::
msgbox CianwoodGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

CianwoodGym_Gym_Dude_Texto_1:
.string "Parece que ANÍBAL va a tomárselo\n"
	.string "en serio contigo, chico. Si quieres\l"
	.string "tener opciones deberías hacerme\l"
	.string "caso y evitar el cuerpo a cuerpo a\l"
	.string "toda cosa, ANÍBAL es\l"
	.string "indestructible por ese lado.\l"
	.string "Céntrate en ataques del TIPO\l"
	.string "PSÍQUICO o VOLADOR a distancia.\l"
	.string "POKÉMON con INTIMIDACIÓN, CASCO\l"
	.string "DENTADO y con gran resistencia por\l"
	.string "el lado físico podrán servirte\l"
	.string "para frenar la portentosa fuerza\l"
	.string "de sus TIPO LUCHA mejor\l"
	.string "entrenados.\l"
	.string "¡Espero que ofrezcas un gran\l"
	.string "espectáculo!$"

CianwoodGym_Gym_Dude_Texto_2:
.string "¡Vaya intercambio de golpes!\n"
	.string "¡Los POKÉMON de ANÍBAL casi acaban\l"
	.string "partiendo el GIMNASIO por la mitad\l"
	.string "intentando tumbar a los tuyos!\l"
	.string "¡Tienes un talento inmenso!$"




CianwoodGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 149
goto_if_gt CianwoodGym_Estatua_2
msgbox CianwoodGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end

CianwoodGym_Estatua_2::
msgbox CianwoodGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


CianwoodGym_Estatua_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CIUDAD ORQUÍDEA: ANÍBAL\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "(¡Está vacío!)$"

CianwoodGym_Estatua_Texto_2:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CIUDAD ORQUÍDEA: ANÍBAL\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "{PLAYER}$"
