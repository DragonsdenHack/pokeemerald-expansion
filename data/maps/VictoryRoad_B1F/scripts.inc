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
	.string "The thought that I'm getting closer to\n"
	.string "the POKÉMON LEAGUE…\p"
	.string "I'm getting stage fright…$"

VictoryRoad_B1F_Text_SamuelDefeat:
	.string "No me he dado ni cuenta…{PAUSE 5}$"

VictoryRoad_B1F_Text_SamuelPostBattle:
	.string "The POKÉMON LEAGUE became distant\n"
	.string "again… What a letdown…$"

VictoryRoad_B1F_Text_ShannonIntro:
	.string "To win your way through the POKÉMON\n"
	.string "LEAGUE, you need the trust of your\l"
	.string "POKÉMON.$"

VictoryRoad_B1F_Text_ShannonDefeat:
	.string "Se nota que vuestra relación se basa en\n"
	.string "la mutua confianza.$"

VictoryRoad_B1F_Text_ShannonPostBattle:
	.string "By being together all the time, trust\n"
	.string "grows between POKÉMON and TRAINERS.$"

VictoryRoad_B1F_Text_MichelleIntro:
	.string "This isn't the goal. It's only a place\n"
	.string "on the way to the POKÉMON LEAGUE.$"

VictoryRoad_B1F_Text_MichelleDefeat:
	.string "¡Tú avanzas rápido!$"

VictoryRoad_B1F_Text_MichellePostBattle:
	.string "You'll do fine, for sure!\n"
	.string "Your POKÉMON are all eager to go!$"

VictoryRoad_B1F_Text_MitchellIntro:
	.string "My POKÉMON are cosmically\n"
	.string "awe inspiring!$"

VictoryRoad_B1F_Text_MitchellDefeat:
	.string "Nunca había conocido a nadie igual.$"

VictoryRoad_B1F_Text_MitchellPostBattle:
	.string "Even outside of battle, I sense\n"
	.string "incredible power emanating from you\l"
	.string "and your POKÉMON.$"

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

