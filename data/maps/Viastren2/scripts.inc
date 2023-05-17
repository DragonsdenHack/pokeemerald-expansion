ViasTren2_MapScripts::
	.byte 0

ViasTren2_1::
lock     
faceplayer     
msgbox ViasTren2_Text_1, MSGBOX_DEFAULT
release     
end

ViasTren2_Text_1:
.string "Estamos en el ecuador del trayecto\n"
.string "TRIGAL-AZAFRÁN, si se te hace\l"
.string "demasiado largo, ¡puedes usar la BICI!$"




ViasTren2_4::
lock     
faceplayer     
msgbox ViasTren2_Text_4, MSGBOX_DEFAULT
release     
end

ViasTren2_Text_4:
.string "Hemos pasado CIUDAD CEREZO, desde\n"
.string "aquí la tenemos al suroeste.$"



ViasTren2_10::
lock     
faceplayer     
msgbox ViasTren2_Text_10, MSGBOX_DEFAULT
release     
end

ViasTren2_Text_10:
.string "El construir estas vías ha llevado a\n"
.string "darnos cuenta del mucho terreno por\l"
.string "explorar que aún nos queda.$"



ViasTren2_EventScript_Obrero::
	trainerbattle_single TRAINER_GABRIELLE_2, ViasTren2_Text_ObreroIntro, ViasTren2_Text_ObreroDefeated
	msgbox ViasTren2_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



ViasTren2_EventScript_Obrero2::
	trainerbattle_single TRAINER_SAWYER_4, ViasTren2_Text_Obrero2Intro, ViasTren2_Text_Obrero2Defeated
	msgbox ViasTren2_Text_Obrero2PostBattle, MSGBOX_AUTOCLOSE
	end
