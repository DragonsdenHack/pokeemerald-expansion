Route53_MapScripts::
	.byte 0

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
end



Route53_8::
end



Route53_9::
end



Route53_EventScript_Obrero::
	trainerbattle_single TRAINER_LISA_AND_RAY, Route53_Text_ObreroIntro, Route53_Text_ObreroDefeated
	msgbox Route53_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end
