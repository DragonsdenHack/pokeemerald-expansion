VioletCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, VioletCity_OnTransition
	.byte 0

VioletCity_OnTransition::
setflag FLAG_VISITED_VIOLET_CITY
end

VioletCity1::
end


VioletCity2::
lock     
faceplayer     
msgbox VioletCity_Text_2, MSGBOX_DEFAULT
release     
end

VioletCity_Text_2:
.string "Este templo lo levantaron mis\n"
.string "antepasados hace 1000 años, para\l"
.string "honrar la resiliencia de\l"
.string "BELLSPROUT.\l"
.string "El actual maestro de la TORRE\l"
.string "BELLSPROUT aún conserva el último\l"
.string "ejemplar de esa sagrada línea de\l"
.string "BELLSPROUT, así es, su BELLSPROUT\l"
.string "es el más fuerte del mundo, solo\l"
.string "lo verán aquellos merecedores\l"
.string "de presenciar algo que muchos\l"
.string "creen imposible.$"



VioletCity3::
lock     
faceplayer     
msgbox VioletCity_Text_3, MSGBOX_DEFAULT
release     
end

VioletCity_Text_3:
.string "El otro día me pegué un buen baño\n"
.string "en el lago que rodea nuestra\l"
.string "pagoda. Dicen que está prohibido,\l"
.string "pero no tienen idea de lo bien que\l"
.string "sienta bañarse con ese paisaje de\l"
.string "fondo.$"


VioletCity4::
lock     
faceplayer     
msgbox VioletCity_Text_4, MSGBOX_DEFAULT
release     
end

VioletCity_Text_4:
.string "¡El padre de PEGASO es súper guay!\n"
.string "¡Tiene unos POKÉMON que nunca\l"
.string "antes había visto, creo que\l"
.string "algunos son incluso LEGENDARIOS de\l"
.string "otras regiones!$"


VioletCity5::
lock     
faceplayer     
msgbox VioletCity_Text_5, MSGBOX_DEFAULT
release     
end

VioletCity_Text_5:
.string "Tú no eres de por aquí, ¿verdad?\n"
.string "Te recomiendo visitar la\l"
.string "escuela de entrenadores. Nuestra\l"
.string "TORRE BELLSPROUT es también muy\l"
.string "famosa.$"


VioletCity6::
lock     
faceplayer     
msgbox VioletCity_Text_6, MSGBOX_DEFAULT
release     
end

VioletCity_Text_6:
.string "Estas flores solo crecen en CIUDAD\n"
.string "MALVA, ellas son las responsables\l"
.string "del aroma a nostalgia tan\l"
.string "característico que se respira por\l"
.string "aquí.$"


VioletCity7::
end


VioletCity8::
end


VioletCity9::
lock     
faceplayer     
msgbox VioletCity_Text_9, MSGBOX_DEFAULT
release     
end

VioletCity_Text_9:
.string "Un POKÉMON en manos de un\n"
.string "ENTRENADOR es mucho más fuerte que\l"
.string "otro salvaje de la misma especie.\l"
.string "Eso es prueba de que la\l"
.string "convivencia entre humanos y\l"
.string "POKÉMON es positiva.$"


VioletCity10::
lock     
faceplayer     
msgbox VioletCity_Text_18, MSGBOX_DEFAULT
release     
end

VioletCity_Text_18:
.string "PEGASO padre tiene pensado ceder\n"
.string "el GIMNASIO a su hijo, también\l"
.string "llamado PEGASO. Espero que haga un\l"
.string "buen trabajo cuando eso ocurra.$"


VioletCity11::
end


VioletCity12::
end



VioletCityDocumento_100::
msgbox VioletCityDocumento_Text_100, MSGBOX_SIGN   
end

VioletCityDocumento_Text_100:
.string "CIUDAD MALVA\n"
	.string "La ciudad de los aromas\l"
	.string "nostálgicos.$"



VioletCityDocumento_101::
msgbox VioletCityDocumento_Text_101, MSGBOX_SIGN   
end

VioletCityDocumento_Text_101:
.string "GIMNASIO de CIUDAD MALVA\n"
	.string "LÍDER: PEGASO\l"
	.string "¡Un genio de altos vuelos y 1001\l"
	.string "viajes!$"



VioletCity_Chicos_Escuela::
clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
addobject 7
addobject 8
applymovement OBJ_EVENT_ID_PLAYER, VioletCity_Chicos_Escuela_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VioletCity_Chicos_Escuela_Move_2
waitmovement 0x0
applymovement 7, VioletCity_Chicos_Escuela_Move_3
waitmovement 0x0
msgbox VioletCity_Chicos_Escuela_Texto_1 MSGBOX_AUTOCLOSE
applymovement 8, VioletCity_Chicos_Escuela_Move_4
waitmovement 0x0
msgbox VioletCity_Chicos_Escuela_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, VioletCity_Chicos_Escuela_Move_5
applymovement 8, VioletCity_Chicos_Escuela_Move_5
waitmovement 0x0
playse SE_DOOR
delay 20
playse SE_EXIT
setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
removeobject 7
removeobject 8
setvar VAR_UNUSED_0x40F7, 120
release
end

VioletCity_Chicos_Escuela_Texto_1:
.string "¡Vamos, date prisa!\n"
	.string "¡El padre de PEGASO va a dar una\l"
	.string "clase especial acerca de los\l"
	.string "POKÉMON TIPO VOLADOR!$"

VioletCity_Chicos_Escuela_Texto_2:
.string "¡No podemos perder esta\n"
	.string "oportunidad, quién sabe cuanto\l"
	.string "tiempo más estará en CIUDAD MALVA\l"
	.string "antes de que emprenda un nuevo\l"
	.string "viaje!$"

VioletCity_Chicos_Escuela_Move_1:
walk_in_place_up
step_end

VioletCity_Chicos_Escuela_Move_2:
emote_exclamation_mark
step_end

VioletCity_Chicos_Escuela_Move_3:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
face_left
step_end

VioletCity_Chicos_Escuela_Move_4:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

VioletCity_Chicos_Escuela_Move_5:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
step_end
