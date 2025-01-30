Olivine_Boat4_MapScripts::
	.byte 0

OlivineBoat4_1::
lock     
faceplayer     
msgbox OlivineBoat4_Text_1, MSGBOX_DEFAULT
release     
end

OlivineBoat4_Text_1:
.string "Recuerda, {PLAYER}: apenas asomamos\n"
.string "a ver la punta del iceberg en\l"
.string "cuanto a misterios del MUNDO\l"
.string "POKÉMON se refiere. Puede que tu\l"
.string "paso por JOHTO nos permita ver un\l"
.string "poco más de ese iceberg.$"

Olivine_Boat4_Combate_Capitan::
lock
applymovement OBJ_EVENT_ID_PLAYER, Olivine_Boat4_Combate_Capitan_Move_1
waitmovement 0x0
delay 10
msgbox Olivine_Boat4_Combate_Capitan_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Olivine_Boat4_Combate_Capitan_Move_2
waitmovement 0x0
delay 10
msgbox Olivine_Boat4_Combate_Capitan_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Olivine_Boat4_Combate_Capitan_Move_3
waitmovement 0x0
delay 10
msgbox Olivine_Boat4_Combate_Capitan_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Olivine_Boat4_Combate_Capitan_Move_4
waitmovement 0x0
delay 10
msgbox Olivine_Boat4_Combate_Capitan_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Olivine_Boat4_Combate_Capitan_Move_3
waitmovement 0x0
delay 10
msgbox Olivine_Boat4_Combate_Capitan_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Olivine_Boat4_Combate_Capitan_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox Olivine_Boat4_Combate_Capitan_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Olivine_Boat4_Combate_Capitan_Move_3
waitmovement 0x0
delay 10
msgbox Olivine_Boat4_Combate_Capitan_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CAPITAN_2, Olivine_Boat4_Combate_Capitan_Texto_9
msgbox Olivine_Boat4_Combate_Capitan_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SCANNER
msgbox Olivine_Boat4_Combate_Capitan_Texto_11.1 MSGBOX_DEFAULT
waitfanfare
msgbox Olivine_Boat4_Combate_Capitan_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Olivine_Boat4_Combate_Capitan_Move_3
waitmovement 0x0
delay 10
msgbox Olivine_Boat4_Combate_Capitan_Texto_12 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
setvar VAR_UNUSED_0x40F7, 147
release
end

Olivine_Boat4_Combate_Capitan_Texto_11.1:
.string "¡¡Obtuviste un CRUZACORRIENTES\n"
	.string "de manos de CAPITÁN!!$"

Olivine_Boat4_Combate_Capitan_Texto_1:
.string "CAPITÁN: Debo admitir, {PLAYER},\n"
	.string "que me equivoqué contigo y con tu\l"
	.string "organización.$"

Olivine_Boat4_Combate_Capitan_Texto_2:
.string "El LT.SURGE me habló de vosotros,\n"
	.string "y no tuvo palabras muy agradables\l"
	.string "hacia el TEAM ROCKET. Me advirtió\l"
	.string "acerca de unos ladrones de la peor\l"
	.string "calaña.\p"
	.string "Según él, la vergüenza de KANTO.$"

Olivine_Boat4_Combate_Capitan_Texto_3:
.string "Así lo creí yo también, hasta que\n"
	.string "GIOVANNI en persona, vuestro\l"
	.string "LÍDER, me contactó poco después de\l"
	.string "todo el lío de la LIGA POKÉMON.\p"
	.string "Me hizo saber, tal y como dijo tu\n"
	.string "compañera, la función de esa\l"
	.string "misteriosa piedra: no era más que\l"
	.string "una parte de ese POKÉMON que se\l"
	.string "hace llamar DEOXYS. Con un ADN\l"
	.string "imposible de replicar y unos\l"
	.string "poderes PSÍQUICOS sin igual.\p"
	.string "Quedé de piedra cuando me envió\n"
	.string "sus datos al completo.$"

Olivine_Boat4_Combate_Capitan_Texto_4:
.string "Pero no solo eso, también me habló\n"
	.string "de las MEGAPIEDRAS, y de algunos\l"
	.string "PSEUDOLEGENDARIOS que podían\l"
	.string "beneficiarse de ellas.\p"
	.string "Con ello, mis teorías sobre su\n"
	.string "potencial quedan confirmadas.\l"
	.string "Gracias a vosotros, ahora sé que\l"
	.string "su techo es mayor al de algunos\l"
	.string "LEGENDARIOS MAYORES. Sorprendente.$"

Olivine_Boat4_Combate_Capitan_Texto_5:
.string "Después de todo lo ocurrido, me ha\n"
	.string "quedado claro que el TEAM ROCKET\l"
	.string "sabe devolver un favor con creces.\l"
	.string "Sabed que tenéis aquí un amigo y\l"
	.string "aliado para lo que necesitéis.$"

Olivine_Boat4_Combate_Capitan_Texto_6:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Olivine_Boat4_Combate_Capitan_Texto_7:
.string "Y una cosa más.$"

Olivine_Boat4_Combate_Capitan_Texto_8:
.string "Aún recuerdo nuestro combate,\n"
	.string "únicamente te libraste porque no\l"
	.string "traje mis mejores POKÉMON a KANTO.\p"
	.string "¿Quieres ver PSEUDOLEGENDARIOS de\n"
	.string "verdad?\p"
	.string "¡Observa!$"

Olivine_Boat4_Combate_Capitan_Texto_9:
.string "¿Perdí de nuevo?$"

Olivine_Boat4_Combate_Capitan_Texto_10:
.string "¡Ja!\p"
	.string "Tal y como suponía, tu equipo no\n"
	.string "tiene nada que ver con el SS.ANNE.\l"
	.string "Allí ya apuntabas maneras, pero\l"
	.string "desde ese entonces se nota que te\l"
	.string "has curtido a base de bien.\p"
	.string "Toma, esto es para ti.$"

Olivine_Boat4_Combate_Capitan_Texto_11:
.string "Con este aparato, tus POKÉMON\n"
	.string "podrán atravesar determinadas\l"
	.string "corrientes, como las de las ISLAS\l"
	.string "REMOLINO, sin problemas. Funciona\l"
	.string "igual que TORBELLINO, pero sin\l"
	.string "necesidad de aprenderlo.$"

Olivine_Boat4_Combate_Capitan_Texto_12:
.string "Un placer verte de nuevo,\n"
	.string "{PLAYER}, y recuerda: aún estamos\l"
	.string "en la punta del iceberg respecto a\l"
	.string "todos los misterios que rodean al\l"
	.string "mundo POKÉMON. Tal vez, tu paso por\l"
	.string "JOHTO contribuya a seguir\l"
	.string "descubriéndolo.$"

Olivine_Boat4_Combate_Capitan_Move_1:
walk_up
walk_right
walk_in_place_up
step_end

Olivine_Boat4_Combate_Capitan_Move_2:
face_right
step_end

Olivine_Boat4_Combate_Capitan_Move_3:
walk_in_place_down
step_end

Olivine_Boat4_Combate_Capitan_Move_4:
face_up
step_end
