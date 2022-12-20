SilphS3_MapScripts::
	.byte 0

SilphS3_EventScript_Policia::
	trainerbattle_single TRAINER_CHARLIE, SilphS3_Text_PoliciaIntro, SilphS3_Text_PoliciaDefeated
	msgbox SilphS3_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



SilphS3_4::
lock     
faceplayer     
msgbox SilphS3_Text_4, MSGBOX_DEFAULT
release     
end


SilphS3_Text_4:
.string "De grandes atletas pasaron a ser\n"
.string "dioses griegos y, finalmente,\l"
.string "acabaron convertidos en penosos\l"
.string "experimentos fallidos.\l"
.string "¿Hasta qué punto es viable elevar\l"
.string "el rendimiento a toda costa\l"
.string "sacrificando todo lo demás?\l"
.string "Tal vez algo tan\l"
.string "extraordinariamente sobrehumano\l"
.string "deje de ser inspirador\l"
.string "precisamente por eso, por estar\l"
.string "tan a reventar de todo que no\l"
.string "pueda servir de inspiración y\l"
.string "ejemplo para nadie.\l"
.string "Asimismo, ¿con qué ojos veríamos\l"
.string "un POKÉMON con 150 de base en cada\l"
.string "estadística?\l"
.string "Tal vez, lejos de ser admirable,\l"
.string "esté tan fuera de nuestros\l"
.string "parámetros y posibilidades que\l"
.string "perdamos el interés en él al saber\l"
.string "que jamás podremos replicarlo.$"
	