VictoryRoad_B2F_MapScripts::
	.byte 0

VictoryRoad_B2F_EventScript_Vito::
	trainerbattle_single TRAINER_TRAINER_555, VictoryRoad_B2F_Text_VitoIntro, VictoryRoad_B2F_Text_VitoDefeat
	msgbox VictoryRoad_B2F_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Owen::
	trainerbattle_single TRAINER_TRAINER_560, VictoryRoad_B2F_Text_OwenIntro, VictoryRoad_B2F_Text_OwenDefeat
	msgbox VictoryRoad_B2F_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Caroline::
	trainerbattle_single TRAINER_TRAINER_556, VictoryRoad_B2F_Text_CarolineIntro, VictoryRoad_B2F_Text_CarolineDefeat
	msgbox VictoryRoad_B2F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Julie::
	trainerbattle_single TRAINER_TRAINER_559, VictoryRoad_B2F_Text_JulieIntro, VictoryRoad_B2F_Text_JulieDefeat
	msgbox VictoryRoad_B2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Felix::
	trainerbattle_single TRAINER_TRAINER_558, VictoryRoad_B2F_Text_FelixIntro, VictoryRoad_B2F_Text_FelixDefeat
	msgbox VictoryRoad_B2F_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Dianne::
	trainerbattle_single TRAINER_TRAINER_557, VictoryRoad_B2F_Text_DianneIntro, VictoryRoad_B2F_Text_DianneDefeat
	msgbox VictoryRoad_B2F_Text_DiannePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_Text_VitoIntro:
	.string "He entrenado con toda mi familia, toda\n"
	.string "enterita. ¡No voy a perder!$"

VictoryRoad_B2F_Text_VitoDefeat:
	.string "¡¿Mejor que mi familia?! ¡¿Cómo puede\n"
	.string "ser?!$"

VictoryRoad_B2F_Text_VitoPostBattle:
	.string "Logré superar a toda mi familia. Nunca\n"
	.string "había perdido... Vaya palo... Me voy a\l"
	.string "casa a entrenar más.$"

VictoryRoad_B2F_Text_OwenIntro:
	.string "Me han dicho que por aquí había una\n"
	.string "personita que da mucha guerra. ¿Eres\l"
	.string "tú?$"

VictoryRoad_B2F_Text_OwenDefeat:
	.string "¡No hay que fiarse de tu juventud, está\n"
	.string "claro!$"

VictoryRoad_B2F_Text_OwenPostBattle:
	.string "Jamás había oído hablar de un\n"
	.string "ENTRENADOR como tú.$"

VictoryRoad_B2F_Text_CarolineIntro:
	.string "Yo creo que ya debes de estar\n"
	.string "cansándote con tanta lucha...$"

VictoryRoad_B2F_Text_CarolineDefeat:
	.string "¡Pues no!$"

VictoryRoad_B2F_Text_CarolinePostBattle:
	.string "Tanto CALLE VICTORIA como la LIGA\n"
	.string "POKéMON son desafíos largos y duros.\l"
	.string "¡Procura no fatigarte demasiado!$"

VictoryRoad_B2F_Text_JulieIntro:
	.string "No deberías dormirte en los laureles\n"
	.string "sólo porque tienes un montón de\l"
	.string "MEDALLAS de GIMNASIO. ¡Siempre puedes\l"
	.string "encontrar a alguien que sea mejor que\l"
	.string "tú!$"

VictoryRoad_B2F_Text_JulieDefeat:
	.string "¡Eres mejor que yo!$"

VictoryRoad_B2F_Text_JuliePostBattle:
	.string "Mira todas tus medallas y acuérdate de\n"
	.string "los entrenadores contra los que te has\l"
	.string "enfrentado.$"

VictoryRoad_B2F_Text_FelixIntro:
	.string "He llegado hasta aquí, pero tanta\n"
	.string "tensión me destroza el estómago...$"

VictoryRoad_B2F_Text_FelixDefeat:
	.string "Ayyyy…\n"
	.string "Qué dolor…$"

VictoryRoad_B2F_Text_FelixPostBattle:
	.string "No puedo evitar ponerme tenso al saber\n"
	.string "que me acerco a la LIGA POKÉMON.\l"
	.string "Curiosamente, es la única forma de\l"
	.string "controlar los nervios.$"

VictoryRoad_B2F_Text_DianneIntro:
	.string "En esta cueva encontrarás lo mejor de\n"
	.string "lo mejor. Hasta ahora ¿qué te parece?$"

VictoryRoad_B2F_Text_DianneDefeat:
	.string "¡Esto no me afecta lo más mínimo!$"

VictoryRoad_B2F_Text_DiannePostBattle:
	.string "¡Tienes agallas y eso me gusta!\n"
	.string "¡Sigue así!$"

