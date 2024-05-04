TwoIsland_Torre_P3_MapScripts::
	.byte 0

TwoIsland_Torre_P3_Motero::
lock
faceplayer
msgbox TwoIsland_Torre_P3_Motero_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIsland_Torre_P3_Motero_Texto_1:
.string "¡Déjame en paz!\n"
	.string "No me has visto, y yo tampoco, así no\l"
	.string "tendré que pelear contigo.\l"
	.string "Total, para la miseria que me pagan.$"

TwoIsland_Torre_P3_Cientifico::
lock
faceplayer
msgbox TwoIsland_Torre_P3_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIsland_Torre_P3_Cientifico_Texto_1:
.string "Los pocos científicos que verás en\n"
	.string "esta isla lo están con fines\l"
	.string "arqueológicos.\l"
	.string "Este edificio es una excepción, desde\l"
	.string "aquí dentro podría parecer que\l"
	.string "estamos en KANTO, tal vez podamos\l"
	.string "traer un poco de esa región a esta\l"
	.string "isla{PAUSE 5}…{PAUSE 5}$"

TwoIsland_Torre_P3_Cientifico_2::
lock
faceplayer
msgbox TwoIsland_Torre_P3_Cientifico_2_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIsland_Torre_P3_Cientifico_2_Texto_1:
.string "El negocio que tenían con PORYGON en\n"
	.string "el CASINO de CIUDAD AZULONA no será\l"
	.string "nada comparado con este.\l"
	.string "Espera, me suenas de algo. ¿Te he\l"
	.string "visto antes?$"


TwoIsland_Torre_P3_EventScript_Calvo::
	trainerbattle_single TRAINER_TRAINER_161, TwoIsland_Torre_P3_Text_CalvoIntro, TwoIsland_Torre_P3_Text_CalvoDefeated
	msgbox TwoIsland_Torre_P3_Text_CalvoPostBattle, MSGBOX_AUTOCLOSE
	end

TwoIsland_Torre_P3_EventScript_Rocket::
	trainerbattle_single TRAINER_TRAINER_162, TwoIsland_Torre_P3_Text_RocketIntro, TwoIsland_Torre_P3_Text_RocketDefeated
	msgbox TwoIsland_Torre_P3_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
	end



