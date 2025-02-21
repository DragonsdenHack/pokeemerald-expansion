SootopolisCity_House3_MapScripts::
	.byte 0

SootopolisCity_House3_EventScript_Woman::
	lock
	faceplayer
	msgbox SootopolisCity_House3_Text_JuanHasManyFansDoYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SootopolisCity_House3_EventScript_HaveFans
	msgbox SootopolisCity_House3_Text_LonesomeTryWorkingHarder, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House3_EventScript_HaveFans::
	msgbox SootopolisCity_House3_Text_YouMustBePrettyStrong, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House3_EventScript_Girl::
	msgbox SootopolisCity_House3_Text_TrainerFanClubWasWild, MSGBOX_NPC
	end

SootopolisCity_House3_Text_JuanHasManyFansDoYou:
	.string "You're a POKÉMON TRAINER, aren't you?\p"
	.string "SOOTOPOLIS's JUAN has many fans.\n"
	.string "Even more than his student WALLACE!\p"
	.string "Do you have any?$"

SootopolisCity_House3_Text_YouMustBePrettyStrong:
	.string	"Vaya, pues entonces debes de ser\n"
	.string	"tremendamente fuerte{PAUSE 5}…{PAUSE 5}$"

SootopolisCity_House3_Text_LonesomeTryWorkingHarder:
	.string	"Oh, qué pena… Todos necesitamos\n"
	.string	"que alguien nos apoye…\p"
	.string	"Pero, si entrenas mucho, seguro\n"
	.string	"que consigues algún fan solo para ti.$"

SootopolisCity_House3_Text_TrainerFanClubWasWild:
	.string	"Muchos fans vienen incluso desde\n"
	.string	"más allá de HOENN.\p"
	.string	"Yo me lo pasé pipa cuando fui\n"
	.string	"al CLUB de FANS de ENTRENADORES\l"
	.string	"que hay en CALAGUA.$"

