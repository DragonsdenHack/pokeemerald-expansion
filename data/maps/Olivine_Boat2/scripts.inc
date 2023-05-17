Olivine_Boat2_MapScripts::
	.byte 0

OlivineBoat2_1::
lock     
faceplayer     
msgbox OlivineBoat2_Text_1, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_1:
.string "¿Podemos dejar de hablar del TIPO\n"
.string "LUCHA aunque sea por un momento?\l"
.string "¿Has visto a WEEZING?\l"
.string "Con esa DEFENSA aguanta todos\l"
.string "vuestros golpes.$"



OlivineBoat2_2::
lock     
faceplayer     
msgbox OlivineBoat2_Text_2, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_2:
.string "Dijeron que ANÍBAL iba a asistir a\n"
.string "la fiesta. Lo sabía, seguro que\l"
.string "está entrenando.$"



OlivineBoat2_3::
lock     
faceplayer     
msgbox OlivineBoat2_Text_3, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_3:
.string "¿La ACADEMIA de PETRA?\n"
.string "¡Qué aburrimiento!\l"
.string "¡Prefiero que los científicos de\l"
.string "SILPH me den clases!\l"
.string "¡Ellos sí que saben de POKÉMON\l"
.string "fuertes y de cómo manipularlos!\l"
.string "¡Mira ese BILL!$"



OlivineBoat2_4::
lock     
faceplayer     
msgbox OlivineBoat2_Text_4, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_4:
.string "Hace 50 años, en esta ciudad no\n"
.string "había más de 4 o 5 familias de\l"
.string "humildes pescadores. Míranos\l"
.string "ahora.$"



OlivineBoat2_5::
lock     
faceplayer     
msgbox OlivineBoat2_Text_5, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_5:
.string "Cómo ha cambiado CIUDAD OLIVO. Y\n"
.string "lo que nos queda por ver, ¿verdad,\l"
.string "querida?$"



OlivineBoat2_6::
lock     
faceplayer     
msgbox OlivineBoat2_Text_6, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_6:
.string "¿Has oído?\n"
.string "En un par de meses, la línea\l"
.string "OLIVO-PORTUAL estará lista. Irás\l"
.string "a CIUDAD FÉRRICA a estudiar en la\l"
.string "ACADEMIA de PETRA.$"



OlivineBoat2_7::
lock     
faceplayer   
msgbox OlivineBoat2_Text_7, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_7:
.string "¿Conoces las ISLAS REMOLINO?\n"
.string "Los barcos evitan acercarse a\l"
.string "ellas, no solo por todas las rocas\l"
.string "que sobresalen la superficie,\l"
.string "también por las fuertes mareas que\l"
.string "las rodean.$"



OlivineBoat2_8::
lock     
faceplayer     
msgbox OlivineBoat2_Text_8, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_8:
.string "El CAPITÁN está en el acto que\n"
.string "inaugura la ampliación del PUERTO\l"
.string "a otras regiones. Hasta que no\l"
.string "regrese nadie puede entrar a su\l"
.string "camarote.$"



OlivineBoat2_9::
end



OlivineBoat2_10::
lock     
faceplayer     
msgbox OlivineBoat2_Text_10, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_10:
.string "Sí que hay acuerdo, aunque tú no\n"
.string "te beneficiarás de él. Yo siempre\l"
.string "gano, de un modo u otro.\l"
.string "…\l"
.string "…\l"
.string "Oh, perdona, creí que eras otra\l"
.string "persona.$"



OlivineBoat2_11::
end



OlivineBoat2_12::
lock     
faceplayer     
msgbox OlivineBoat2_Text_12, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_12:
.string "Después de CIUDAD CARMÍN,\n"
.string "estableceremos la conexión con\l"
.string "CIUDAD PORTUAL, en HOENN. NORMAN y\l"
.string "su familia se mudarán allí en\l"
.string "cuanto esté disponible la línea.$"



OlivineBoat2_13::
lock     
faceplayer     
msgbox OlivineBoat2_Text_13, MSGBOX_DEFAULT
release     
end

OlivineBoat2_Text_13:
.string "Lo sé, un CAZABICHOS como yo no\n"
.string "pinta nada en una fiesta como\l"
.string "esta. Solo vine porque corren\l"
.string "rumores de que el CAPITÁN cuenta\l"
.string "con un TIPO BICHO extremadamente\l"
.string "fuerte y raro en su equipo. ¿Algún\l"
.string "problema?$"



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
