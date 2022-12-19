SilphS1_MapScripts::
	.byte 0

SilphS1_EventScript_Cientifico::
	trainerbattle_single TRAINER_LOLA_2, SilphS1_Text_CientificoIntro, SilphS1_Text_CientificoDefeated
	msgbox SilphS1_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



SilphS1_1::
lock     
faceplayer     
msgbox SilphS1_Text_1, MSGBOX_DEFAULT
release     
end


SilphS1_Text_1:
.string "La inmensa mayoría sólo vivirá\n"
.string "para mantener girando la necesaria\l"
.string "rueda de la sociedad, desde aquí\l"
.string "intentamos formar parte de ese\l"
.string "mínimo porcentaje que logra\l"
.string "expandir la enorme base que ya\l"
.string "tenemos y hacer avanzar aún más a\l"
.string "la humanidad.$"



SilphS1_2::
lock     
faceplayer     
msgbox SilphS1_Text_2, MSGBOX_DEFAULT
release     
end


SilphS1_Text_2:
.string "Nunca pensé que diría esto, pero\n"
.string "presento mis respetos a un ROCKET,\l"
.string "gracias a ti se ha puesto fin a la\l"
.string "tiranía en esta región, me siento\l"
.string "avergonzado de todos los POLICÍAS\l"
.string "que han trabajado para LANCE y\l"
.string "colaborado en esa maldita\l"
.string "dictadura enmascarada.$"
