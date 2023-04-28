Route53_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route53_OnFrame
	.byte 0

Route53_OnFrame:
map_script_2 VAR_TEMP_0, 0, Ruta_53_Seteo_Metatiles
	.2byte 0

Route53_1::
lock     
faceplayer     
msgbox Route53_Text_1, MSGBOX_DEFAULT
release     
end

Route53_Text_1:
.string "AZAFRÁN está absurdamente lejos,\n"
.string "la peor parte será cuando tengamos\l"
.string "que atravesar las montañas de RUTA\l"
.string "26 y 27.$"



Route53_2::
end



Route53_3::
lock     
faceplayer     
msgbox Route53_Text_3, MSGBOX_DEFAULT
release     
end

Route53_Text_3:
.string "No es muy común ver a gente de tu\n"
.string "estatus bajar a la arena para\l"
.string "mancharse los pantalones como uno\l"
.string "más.\l"
.string "¡Esa es la actitud!$"



Route53_4::
lock     
faceplayer     
msgbox Route53_Text_4, MSGBOX_DEFAULT
release     
end

Route53_Text_4:
.string "El MAGNETOTREN supondrá un antes y\n"
.string "un después en la conversión de\l"
.string "JOHTO en potencia tecnológica,\l"
.string "pero para que ocurra, gente\l"
.string "como yo tiene que pringar bajo\l"
.string "este sol abrasador.\l"
.string "¡Todo tiene un precio!$"



Route53_5::
lock     
faceplayer     
msgbox Route53_Text_5, MSGBOX_DEFAULT
release     
end

Route53_Text_5:
.string "¡Que TRIGAL y AZAFRÁN acaben\n"
.string "unidas por el MAGNETOTREN es\l"
.string "inevitable!\l"
.string "¡En dos años todo estará\l"
.string "dispuesto!$"



Route53_6::
end



Route53_7::
lock
msgbox Route53_7_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route53_7_Texto_1:
.string "¡Aún queda mucho trabajo antes de\n"
	.string "llegar a AZAFRÁN!\l"
	.string "¡Vamos, seguid!$"


Route53_8::
lock
msgbox Route53_8_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route53_8_Texto_1:
.string "Este jefe...\n"
	.string "Si él también se pusiera a picar\l"
	.string "piedra con nosotros quizás iríamos\l"
	.string "más rápido...$"


Route53_9::
lock
msgbox Route53_9_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route53_9_Texto_1:
.string "Un...dos...\n"
	.string "Un...dos...\l"
	.string "Paciencia y constancia, agachas la\l"
	.string "cabeza, te pones a cavar y zas!\l"
	.string "¡AZAFRÁN a la vista!$"


Route53_EventScript_Obrero::
	trainerbattle_single TRAINER_LISA_AND_RAY, Route53_Text_ObreroIntro, Route53_Text_ObreroDefeated
	msgbox Route53_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end


Ruta_53_Seteo_Metatiles::
lock
compare VAR_UNUSED_0x40F7, 180
goto_if_lt Ruta_53_Seteo_Metatiles_2
setvar VAR_TEMP_0, 1
release
end

Ruta_53_Seteo_Metatiles_2::
setmetatile 62, 12, 0x07B, FALSE
setmetatile 63, 12, 0x07C, FALSE
setmetatile 64, 12, 0x07C, FALSE
setmetatile 65, 12, 0x07C, FALSE
setmetatile 66, 12, 0x07C, FALSE
setmetatile 67, 12, 0x07C, FALSE
setmetatile 68, 12, 0x07C, FALSE
setmetatile 69, 12, 0x07C, FALSE
setmetatile 62, 11, 0x073, FALSE
setmetatile 63, 11, 0x071, FALSE
setmetatile 64, 11, 0x071, FALSE
setmetatile 65, 11, 0x071, FALSE
setmetatile 66, 11, 0x071, FALSE
setmetatile 67, 11, 0x071, FALSE
setmetatile 68, 11, 0x071, FALSE
setmetatile 69, 11, 0x071, FALSE
setmetatile 62, 10, 0x073, FALSE
setmetatile 63, 10, 0x071, FALSE
setmetatile 64, 10, 0x071, FALSE
setmetatile 65, 10, 0x071, FALSE
setmetatile 66, 10, 0x071, FALSE
setmetatile 67, 10, 0x071, FALSE
setmetatile 68, 10, 0x071, FALSE
setmetatile 69, 10, 0x071, FALSE
setmetatile 62, 9, 0x068, FALSE
setmetatile 63, 9, 0x069, FALSE
setmetatile 64, 9, 0x06C, FALSE
setmetatile 65, 9, 0x06C, FALSE
setmetatile 66, 9, 0x06C, FALSE
setmetatile 67, 9, 0x06C, FALSE
setmetatile 68, 9, 0x06C, FALSE
setmetatile 69, 9, 0x06C, FALSE
setmetatile 62, 13, 0x06C, FALSE
setmetatile 63, 13, 0x06C, FALSE
setmetatile 64, 13, 0x06C, FALSE
setmetatile 65, 13, 0x06C, FALSE
setmetatile 66, 13, 0x06C, FALSE
setmetatile 67, 13, 0x06C, FALSE
setmetatile 68, 13, 0x06C, FALSE
setmetatile 69, 13, 0x06C, FALSE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end
