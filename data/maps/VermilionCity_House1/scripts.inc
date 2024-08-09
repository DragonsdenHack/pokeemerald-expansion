VermilionCity_House1_MapScripts::
	.byte 0

VermilionCityHouse1_1::
end

VermilionCity_House1_Secundaria_Magikarp::
lock
faceplayer
compare VAR_UNUSED_0x409D, 3
goto_if_eq VermilionCity_House1_Secundaria_Magikarp_4
compare VAR_UNUSED_0x409D, 2
goto_if_eq VermilionCity_House1_Secundaria_Magikarp_3
compare VAR_UNUSED_0x409D, 1
goto_if_eq VermilionCity_House1_Secundaria_Magikarp_2
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCity_House1_Secundaria_Magikarp_Move_1
waitmovement 0x0
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_3 MSGBOX_AUTOCLOSE
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq VermilionCity_House1_Secundaria_Magikarp_NO
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, VermilionCity_House1_Secundaria_Magikarp_Move_2
waitmovement 0x0
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, VermilionCity_House1_Secundaria_Magikarp_Move_3
waitmovement 0x0
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409D, 1
release
end

VermilionCity_House1_Secundaria_Magikarp_NO::
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_13 MSGBOX_AUTOCLOSE
release
end

VermilionCity_House1_Secundaria_Magikarp_2::
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_8 MSGBOX_AUTOCLOSE
release
end

VermilionCity_House1_Secundaria_Magikarp_3::
delay 20
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCity_House1_Secundaria_Magikarp_Move_1
waitmovement 0x0
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_5 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_MAGIKARP, 5, ITEM_RARE_CANDY
waitfanfare
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_7 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409D, 3
release
end

VermilionCity_House1_Secundaria_Magikarp_4::
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_4 MSGBOX_AUTOCLOSE
release
end


VermilionCity_House1_Secundaria_Magikarp_Texto_1:
.string "Maldito DOMADOR…\n"
	.string "Por su culpa todo el mundo se toma\l"
	.string "a broma mi CAÑA VIEJA. No puedo\l"
	.string "dejar que esto siga así, mis\l"
	.string "hermanos van a llevarse todo el\l"
	.string "protagonismo{PAUSE 5}…{PAUSE 5}$"

VermilionCity_House1_Secundaria_Magikarp_Texto_2:
.string "…\n"
	.string "…{PAUSE 5}$"

VermilionCity_House1_Secundaria_Magikarp_Texto_3:
.string "¡Eres un ROCKET!\n"
	.string "¡No tendrás problema en poner en\l"
	.string "su lugar a un sinvergüenza que\l"
	.string "está acabando con mi reputación!\l"
	.string "¿Verdad?$"

VermilionCity_House1_Secundaria_Magikarp_Texto_4:
.string "Si cuidas a ese MAGIKARP, pronto\n"
	.string "tendrás un POKÉMON que todos en tu\l"
	.string "organización envidiarán y\l"
	.string "respetarán, te dará una jerarquía\l"
	.string "en batalla única, ¡puede que\l"
	.string "incluso te ayude a ascender!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_5:
.string "¿De verdad le diste una lección?\n"
	.string "¿Y quedó tan asustado con tus\l"
	.string "amenazas que prometió no volver a\l"
	.string "hablar de mi CAÑA VIEJA?\l"
	.string "Debes de ocupar un puesto de gran\l"
	.string "importancia dentro del TEAM ROCKET\l"
	.string "para haber derrotado a esos\l"
	.string "POKÉMON, seguro que con este\l"
	.string "POKÉMON puedes mejorar todavía\l"
	.string "más.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_6:
.string "¡¡OBTUVISTE UN MAGIKARP AL\n"
	.string "NV:5!!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_7:
.string "¿Cómo?\n"
	.string "¿Esperabas algo mejor?\l"
	.string "Déjame decirte ROCKET, que este\l"
	.string "POKÉMON guarda un potencial muy\l"
	.string "especial en su interior, solo\l"
	.string "debes preocuparte de cuidarlo\l"
	.string "adecuadamente y hacerlo crecer, y\l"
	.string "tendrás a uno de los mejores\l"
	.string "POKÉMON de todo KANTO, un DRAGÓN\l"
	.string "en toda regla que el mismísimo\l"
	.string "LANCE tiene en su equipo.\l"
	.string "Por si fuera poco, te he dado un\l"
	.string "CARAMELORARO de regalo equipado en\l"
	.string "el MAGIKARP para que se te haga\l"
	.string "menos duro entrenarlo, muy pocos\l"
	.string "tienen ese detalle, ¿eh?\l"
	.string "¡Úsalo cuando esté en el NIVEL 19\l"
	.string "y disfruta de la transformación\l"
	.string "más radical que podrás ver en el\l"
	.string "mundo POKÉMON!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_8:
.string "¿Pudiste encontrar a ese DOMADOR?\n"
	.string "¡Recuerda está en AZULONA!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_9:
.string "¿Estarías dispuesto a hacer un\n"
	.string "pequeño ajuste de cuentas para un\l"
	.string "pobre GURÚ PESCADOR como yo?\l"
	.string "¡Te pagaré con algo que no podrás\l"
	.string "encontrar en ningún lugar!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_10:
.string "¡Bien!\n"
	.string "Mira ROCKET, hace poco pasó por\l"
	.string "aquí un DOMADOR, y adquirió mi\l"
	.string "CAÑA VIEJA esperando poder atrapar\l"
	.string "a un KINGLER para su espectáculo,\l"
	.string "pero cuando vio que solo servía\l"
	.string "para capturar MAGIKARP, empezó a\l"
	.string "difamarme diciendo que mi CAÑA\l"
	.string "VIEJA no servía para nada, y era\l"
	.string "una estafa.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_11:
.string "Es cierto que solo sirve para\n"
	.string "capturar MAGIKARP, pero esa es\l"
	.string "precisamente su virtud, ninguna\l"
	.string "otra caña te permite pescar a un\l"
	.string "POKÉMON tan común y con tanto\l"
	.string "potencial, ese DOMADOR ha\l"
	.string "tergiversado la utilidad de mi\l"
	.string "CAÑA VIEJA y ha hecho creer a\l"
	.string "todos que soy un chiste en\l"
	.string "comparación con mis hermanos.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_12:
.string "Quiero que vayas a CIUDAD AZULONA,\n"
	.string "donde actualmente reside, y le des\l"
	.string "una lección de parte del GURÚ\l"
	.string "PESCADOR de CIUDAD CARMÍN, con eso\l"
	.string "debería de ser suficiente para que\l"
	.string "deje de decir sandeces sobre mi\l"
	.string "CAÑA VIEJA, déjale claro que el\l"
	.string "TEAM ROCKET no avisa dos veces, y\l"
	.string "a la próxima le arruinaréis el\l"
	.string "negocio o algo por el estilo.\l"
	.string "Cuando acabes el encargo, vuelve\l"
	.string "aquí y te daré un fabuloso\l"
	.string "POKÉMON.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_13:
.string "¿No?\n"
	.string "Pensaba que los ROCKET adoraban\l"
	.string "este tipo de trabajos.$"

VermilionCity_House1_Secundaria_Magikarp_Move_1:
emote_exclamation_mark
step_end

VermilionCity_House1_Secundaria_Magikarp_Move_2:
walk_in_place_right
step_end

VermilionCity_House1_Secundaria_Magikarp_Move_3:
face_player
step_end
