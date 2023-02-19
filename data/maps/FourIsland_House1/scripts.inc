FourIsland_House1_MapScripts::
	.byte 0

FourIslandHouse1_1::
lock     
faceplayer     
msgbox FourIsland_House1_Text_1, MSGBOX_DEFAULT
release     
end

FourIsland_House1_Text_1:
.string "¡Hala, qué golpe!\n"
.string "¡Qué fuerza tienes!$"



FourIslandHouse1_2::
end

FourIsland_House1_Entrenador_Especial::
msgbox FourIsland_House1_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox FourIsland_House1_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
msgbox FourIsland_House1_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
msgbox FourIsland_House1_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
msgbox FourIsland_House1_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox FourIsland_House1_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
msgbox FourIsland_House1_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE114_STATE, 1
release
end

FourIsland_House1_Entrenador_Especial_Texto_1:
.string "Los ataques de contacto como GOLPE\n"
	.string "CUERPO suelen hacer gran daño y\l"
	.string "pueden causar efectos secundarios\l"
	.string "interesantes como la parálisis,\l"
	.string "sin embargo, tienen un problema.$"

FourIsland_House1_Entrenador_Especial_Texto_2:
.string "¿Quieres saberlo?$"

FourIsland_House1_Entrenador_Especial_Texto_3:
.string "El CASCO DENTADO restará 1/6 de\n"
	.string "PS a todo POKÉMON rival que nos\l"
	.string "golpee con movimientos de contacto\l"
	.string "mientras llevemos este objeto\l"
	.string "equipado, combinado con\l"
	.string "habilidades como PIEL TOSCA o\l"
	.string "PUNTA ACERO generará un daño más\l"
	.string "que considerable sólo por aguantar\l"
	.string "el golpe.\l"
	.string "¿Te imaginas un CLEFABLE usando\l"
	.string "DOBLEBOFETÓN contra un FERROTHORN\l"
	.string "equipado con este CASCO?\l"
	.string "¡Tendríamos que llevar al CLEFABLE\l"
	.string "directo al hospital sin haber el\l"
	.string "FERROTHORN hecho un solo\l"
	.string "movimiento!$"

FourIsland_House1_Entrenador_Especial_Texto_4:
.string "¡Bien!\n"
	.string "¡Te lo mostraré!$"

FourIsland_House1_Entrenador_Especial_Texto_5:
.string "Tienes un equipo formidable, si,\n"
	.string "te lo enseñaré.$"

FourIsland_House1_Entrenador_Especial_Texto_6:
.string "¡Así es!\n"
	.string "Los movimientos de contacto pueden\l"
	.string "perjudicar al POKÉMON que lo\l"
	.string "realiza si toca a ciertos POKÉMON\l"
	.string "con habilidades como ELECTRICIDAD\l"
	.string "ESTÁTICA, PUNTA ACERO, PIEL TOSCA\l"
	.string "o CUERPO LLAMA, por ello hay que\l"
	.string "usarlos cuidadosamente, más aún,\l"
	.string "existe otro objeto que castiga\l"
	.string "todo movimiento de contacto como\l"
	.string "GOLPE CUERPO, mira.$"

FourIsland_House1_Entrenador_Especial_Texto_7:
.string "Entonces no sé que haces aquí.\n"
	.string "¡Largo!$"
