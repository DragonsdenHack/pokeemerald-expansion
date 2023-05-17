ViasTren1_MapScripts::
	.byte 0

ViasTren1_3::
lock     
faceplayer     
msgbox ViasTren1_Text_3, MSGBOX_DEFAULT
release     
end

ViasTren1_Text_3:
.string "El MAGNETOTRÉN viajará a una velocidad\n"
.string "de 550 KM/H, si tenemos en cuenta que\l"
.string "las vías recorren 140 KM hasta llegar a\l"
.string "AZAFRÁN, el trayecto podrá\l"
.string "completarse en poco más de 15 min. ¿No\l"
.string "es increíble?$"



ViasTren1_5::
lock     
faceplayer     
msgbox ViasTren1_Text_5, MSGBOX_DEFAULT
release     
end

ViasTren1_Text_5:
.string "CIUDAD MALVA está al norte, realmente\n"
.string "ya la hemos pasado, desde este punto\l"
.string "está al noroeste.$"




ViasTren1_7::
lock     
faceplayer     
msgbox ViasTren1_Text_7, MSGBOX_DEFAULT
release     
end

ViasTren1_Text_7:
.string "Conforme nos adentramos hacia el este,\n"
.string "la vegetación se hace cada vez más\l"
.string "espesa, hay muchas zonas por explorar\l"
.string "aquí.$"



ViasTren1_EventScript_Obrero::
	trainerbattle_single TRAINER_SAWYER_4, ViasTren1_Text_ObreroIntro, ViasTren1_Text_ObreroDefeated
	msgbox ViasTren1_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end
