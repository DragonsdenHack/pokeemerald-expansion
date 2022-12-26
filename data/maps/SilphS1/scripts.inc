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



SilphS1_3::
lock     
faceplayer     
msgbox SilphS1_Text_3, MSGBOX_DEFAULT
release     
end


SilphS1_Text_3:
.string "Nuestro PRESIDENTE debe tener\n"
.string "una absoluta confianza en ti, de\l"
.string "lo contrario jamás habrías podido\l"
.string "acceder a un lugar como este.$"



SilphS1_4::
lock     
faceplayer     
msgbox SilphS1_Text_4, MSGBOX_DEFAULT
release     
end


SilphS1_Text_4:
.string "Enhorabuena, si has llegado hasta\n"
.string "aquí quiere decir que has logrado\l"
.string "escapar de esa parte dormida de\l"
.string "KANTO que sigue creyendo\l"
.string "únicamente en la existencia de 150\l"
.string "POKÉMON y no ve más allá de lo que\l"
.string "el gobierno de LANCE le muestra,\l"
.string "el mundo es mucho más amplio, aquí\l"
.string "tratamos de abarcar y compilar lo\l"
.string "más reseñable que hemos encontrado\l"
.string "ahí fuera.$"



SilphS1Documento_100::
lock     
showmonpic SPECIES_DARMANITAN, 10, 3  
playmoncry SPECIES_DARMANITAN, CRY_MODE_ENCOUNTER 
msgbox SilphS1Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS1Documento_Text_100:
.string "DARMANITAN: FUEGO/LUCHA\p"
	.string "PS: 105\n"
	.string "ATAQUE: 140\l"
	.string "DEFENSA: 65\l"
	.string "ATAQUE ESPECIAL: 30\l"
	.string "DEFENSA ESPECIAL: 65\l"
	.string "VELOCIDAD: 95\l"
	.string "TOTAL: 500\p"
	.string "La furia y el vigor convertidos en\n"
	.string "POKÉMON, una energía incombustible\l"
	.string "corre por sus venas, provocando\l"
	.string "que en su naturaleza esté el\l"
	.string "actuar y embestir haciendo uso de\l"
	.string "toda su fuerza bruta antes incluso\l"
	.string "de que su mente se lo ordene,\l"
	.string "motivo de su colosal ATAQUE de 140\l"
	.string "de BASE, y también de su pésimo\l"
	.string "ATAQUE ESPECIAL de 30.$"
