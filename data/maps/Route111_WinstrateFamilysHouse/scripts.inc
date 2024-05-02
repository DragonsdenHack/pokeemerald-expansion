.set LOCALID_VIVI, 1
.set LOCALID_VICTOR, 2
.set LOCALID_VICTORIA, 3
.set LOCALID_VICKY, 4

Route111_WinstrateFamilysHouse_MapScripts::
	.byte 0

Route111_WinstrateFamilysHouse_EventScript_Victor::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_VICTOR
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Victoria::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_VICTORIA
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
	giveitem ITEM_SCEPTILITE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MACHO_BRACE
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace::
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Vivi::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_VIVI
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Vicky::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_VICKY
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
	setflag FLAG_TEMP_4
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
	closemessage
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
	.string	"Nunca antes había visto a nadie que\n"
	.string	"usara los POKéMON con tanto arte.\p"
	.string	"¡Incluso has podido derrotar a\n"
	.string	"nuestro hijo!\p"
	.string	"Es tan fuerte que va a participar en\n"
	.string	"el desafío de la LIGA POKéMON.$"

Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace:
	.string	"Usamos VESTIDURA para que nuestros\n"
	.string	"POKéMON mejoren aún más durante\l"
	.string	"el entrenamiento.\p"
	.string	"Alguien tan fuerte como tú no necesita\n"
	.string	"algo así, pero... creo que sí tengo algo\l"
	.string	"que puede interesarte. Mira.$"

Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
	.string	"Cuando se trata de combates POKéMON,\n"
	.string	"tendemos a tomárnoslo muy en serio…$"

Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
	.string	"Mamá es más fuerte que papá.\p"
	.string	"Yo soy más fuerte que mamá.\p"
	.string	"¡Y la abuelita es más fuerte que yo!\p"
	.string	"Pero mi hermano mayor es aún\n"
	.string	"más fuerte que la abuelita.$"

Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
	.string	"No cabe duda de que eres fuerte.\p"
	.string	"Pero mi nieto puede mejorar aún más,\n"
	.string	"algún día llorarás pidiendo clemencia.\p"
	.string	"Es mucho más fuerte que cualquier\n"
	.string	"otro ENTRENADOR que conozcamos.\p"
	.string	"Si sigue así, llegará a derrotar\n"
	.string	"al CAMPEÓN de la LIGA POKéMON…\p"
	.string	"Conociendo a mi nieto…, ¡no se\n"
	.string	"detendrá hasta lograrlo!$"

Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
	.string	"Mi nieto tratará de derrotar\n"
	.string	"al CAMPEÓN de la LIGA POKéMON…\p"
	.string	"Conociendo a mi nieto…, ¡no se\n"
	.string	"detendrá hasta lograrlo!$"


Route111_WinstrateFamilysHouse_Nieto::
lock
faceplayer
msgbox Route111_Nieto_Texto_3, MSGBOX_DEFAULT
release
end

