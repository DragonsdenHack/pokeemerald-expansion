VictoryRoad_B1F_MapScripts::
	.byte 0

VictoryRoad_B1F_EventScript_Samuel::
	trainerbattle_single TRAINER_TRAINER_554, VictoryRoad_B1F_Text_SamuelIntro, VictoryRoad_B1F_Text_SamuelDefeat
	msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Shannon::
	trainerbattle_single TRAINER_TRAINER_553, VictoryRoad_B1F_Text_ShannonIntro, VictoryRoad_B1F_Text_ShannonDefeat
	msgbox VictoryRoad_B1F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Michelle::
	trainerbattle_single TRAINER_TRAINER_552, VictoryRoad_B1F_Text_MichelleIntro, VictoryRoad_B1F_Text_MichelleDefeat
	msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Mitchell::
	trainerbattle_single TRAINER_TRAINER_550, VictoryRoad_B1F_Text_MitchellIntro, VictoryRoad_B1F_Text_MitchellDefeat
	msgbox VictoryRoad_B1F_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Halle::
	trainerbattle_single TRAINER_TRAINER_551, VictoryRoad_B1F_Text_HalleIntro, VictoryRoad_B1F_Text_HalleDefeat
	msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_Text_SamuelIntro:
	.string "Pensar que estoy cada vez más cerca de\n"
	.string "la LIGA POKéMON… me entra miedo\l"
	.string "escénico…$"

VictoryRoad_B1F_Text_SamuelDefeat:
	.string "No me he dado ni cuenta…$"

VictoryRoad_B1F_Text_SamuelPostBattle:
	.string "La LIGA POKéMON vuelve a estar lejos,\n"
	.string "lejos…Qué depresión…$"

VictoryRoad_B1F_Text_ShannonIntro:
	.string "Para ganar en la LIGA POKéMON, debes\n"
	.string "contar con la confianza de tus POKéMON.$"

VictoryRoad_B1F_Text_ShannonDefeat:
	.string "Se nota que vuestra relación se basa en\n"
	.string "la mutua confianza.$"

VictoryRoad_B1F_Text_ShannonPostBattle:
	.string "Cuanto más tiempo pasan juntos, más\n"
	.string "crece la confianza entre POKéMON y\l"
	.string "ENTRENADORES.$"

VictoryRoad_B1F_Text_MichelleIntro:
	.string "Éste no es el objetivo final, sólo un\n"
	.string "paso más hacia la LIGA POKéMON.$"

VictoryRoad_B1F_Text_MichelleDefeat:
	.string "¡Tú avanzas rápido!$"

VictoryRoad_B1F_Text_MichellePostBattle:
	.string "¡Lo harás bien, seguro!\n"
	.string "¡Tus POKÉMON están preparados!$"

VictoryRoad_B1F_Text_MitchellIntro:
	.string "¡Mis POKéMON provocan una admiración\n"
	.string "galáctica!$"

VictoryRoad_B1F_Text_MitchellDefeat:
	.string "Nunca había conocido a nadie igual.$"

VictoryRoad_B1F_Text_MitchellPostBattle:
	.string "Incluso fuera de la batalla, percibo\n"
    .string "un poder increíble emanando de ti\l"
    .string "y de tus POKéMON.$"

VictoryRoad_B1F_Text_HalleIntro:
	.string "¡Eh tranqui, no te mosquees! ¡Vamos a\n"
	.string "luchar con calma!$"

VictoryRoad_B1F_Text_HalleDefeat:
	.string "¡Guau!\n"
	.string "¡Ha sido magnífico!$"

VictoryRoad_B1F_Text_HallePostBattle:
	.string "Estamos en la CALLE VICTORIA. Pero en\n"
	.string "el fondo no es tan distinta de cualquier\l"
	.string "otra ruta. ¡Intenta disfrutar de todo\l"
	.string "lo que te queda por ver!$"

