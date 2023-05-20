CeladonCity_Casino_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_Casino_OnTransition
	.byte 0
	
CeladonCity_Casino_OnTransition:
	setrespawn HEAL_LOCATION_CASINO_AZULONA
	end

CeladonCasino_1::
lock     
faceplayer     
msgbox CeladonCity_Casino_Text_1, MSGBOX_DEFAULT
release     
end

CeladonCity_Casino_Text_1:
.string "La venta de fICHAS está prohibida\n"
.string "para los miembros del TEAM ROCKET,\l"
.string "normas del CASINO.$"



CeladonCasino_2::
lock     
faceplayer     
msgbox CeladonCity_Casino_Text_2, MSGBOX_DEFAULT
release     
end

CeladonCity_Casino_Text_2:
.string "La venta de fichas está prohibida\n"
.string "para los miembros del TEAM ROCKET,\l"
.string "normas del CASINO.$"



CeladonCasino_3::
lock     
faceplayer     
msgbox CeladonCity_Casino_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Casino_Text_3:
.string "Sé que vosotros tenéis algo que\n"
.string "ver con todo esto ROCKETS, a mí no\l"
.string "me engañáis.$"



CeladonCasino_4::
lock     
faceplayer     
msgbox CeladonCity_Casino_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_Casino_Text_4:
.string "Creo que estas máquinas están\n"
.string "trucadas.$"



CeladonCasino_5::
lock     
faceplayer     
msgbox CeladonCity_Casino_Text_5, MSGBOX_DEFAULT
release     
end

CeladonCity_Casino_Text_5:
.string "¿Cómo?\n"
.string "¿Quieres fICHAS?\l"
.string "¡Largo de aquí antes de que llame\l"
.string "a las autoridades delincuente!$"



CeladonCasino_6::
lock     
faceplayer     
msgbox CeladonCity_Casino_Text_6, MSGBOX_DEFAULT
release     
end

CeladonCity_Casino_Text_6:
.string "Deberíais de dejaros de tantos\n"
.string "robos y aprender de los grandes\l"
.string "empresarios de esta región, ¡no sé\l"
.string "quién llevará este casino pero\l"
.string "está claro que es un modelo de\l"
.string "negocio exitoso!\l"
.string "¡Aprended ROCKETS!$"



CeladonCasino_7::
lock     
faceplayer     
msgbox CeladonCity_Casino_Text_7, MSGBOX_DEFAULT
release     
end

CeladonCity_Casino_Text_7:
.string "Ganar o perder aquí únicamente es\n"
.string "cuestión de suerte, ¿dónde está la\l"
.string "gracia entonces?\l"
.string "…\l"
.string "¡Aún así no puedo parar de jugar!$"



CeladonCasino_8::
lock     
faceplayer     
msgbox CeladonCity_Casino_Text_8, MSGBOX_DEFAULT
release     
end

CeladonCity_Casino_Text_8:
.string "¡Es tan fácil quedarse enganchado\n"
.string "con estos juegos!$"



CeladonCasino_9::
lock     
faceplayer     
msgbox CeladonCity_Casino_Text_9, MSGBOX_DEFAULT
release     
end

CeladonCity_Casino_Text_9:
.string "¡La falsa sensación de control es\n"
.string "una de las claves del éxito de\l"
.string "estos juegos!$"



CeladonCasino_10::
lock     
faceplayer     
msgbox CeladonCity_Casino_Text_10, MSGBOX_DEFAULT
release     
end

CeladonCity_Casino_Text_10:
.string "¡El truco está en mirar\n"
.string "atentamente a la pantalla!$"



CeladonCasino_11::
lock     
faceplayer     
msgbox CeladonCity_Casino_Text_11, MSGBOX_DEFAULT
release     
end

CeladonCity_Casino_Text_11:
.string "¡Tranquilo camarada!\n"
.string "¡Conmigo aquí nuestra guarida está\l"
.string "a salvo!$"
